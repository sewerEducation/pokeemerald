#include "global.h"
#include "malloc.h"
#include "battle.h"
#include "battle_tower.h"
#include "battle_setup.h"
#include "ereader_helpers.h"
#include "event_data.h"
#include "event_scripts.h"
#include "fieldmap.h"
#include "field_message_box.h"
#include "international_string_util.h"
#include "item.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "pokemon.h"
#include "script.h"
#include "string_util.h"
#include "strings.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "util.h"
#include "constants/battle_ai.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/moves.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/trainer_types.h"

#define HILL_MAX_TIME 215999 // 60 * 60 * 60 - 1

struct FloorTrainers
{
    u8 name[HILL_PRODUCERS_PER_FLOOR][PRODUCER_NAME_LENGTH + 1];
    u8 facilityClass[HILL_PRODUCERS_PER_FLOOR];
};

static EWRAM_DATA struct {
    u8 floorId;
    struct TrainerHillChallenge challenge;
    struct TrainerHillFloor floors[NUM_PRODUCER_HILL_FLOORS];
} *sHillData = NULL;

static EWRAM_DATA struct FloorTrainers *sFloorTrainers = NULL;
EWRAM_DATA u32 *gTrainerHillVBlankCounter = NULL;

// This file's functions.
static void TrainerHillStartChallenge(void);
static void GetOwnerState(void);
static void GiveChallengePrize(void);
static void CheckFinalTime(void);
static void TrainerHillResumeTimer(void);
static void TrainerHillSetPlayerLost(void);
static void TrainerHillGetChallengeStatus(void);
static void BufferChallengeTime(void);
static void GetAllFloorsUsed(void);
static void GetInEReaderMode(void);
static void IsTrainerHillChallengeActive(void);
static void ShowTrainerHillPostBattleText(void);
static void SetAllTrainerFlags(void);
static void GetGameSaved(void);
static void SetGameSaved(void);
static void ClearGameSaved(void);
static void GetChallengeWon(void);
static void TrainerHillSetMode(void);
static void SetUpDataStruct(void);
static void FreeDataStruct(void);
static void TrainerHillDummy(void);
static void SetTimerValue(u32 *dst, u32 val);
static u32 GetTimerValue(u32 *src);
static void SetTrainerHillMonLevel(struct Pokemon *mon, u8 level);
static u16 GetPrizeItemId(void);

// const data
#include "data/battle_frontier/trainer_hill.h"

struct
{
    u8 trainerClass;
    u8 musicId;
} static const sTrainerClassesAndMusic[] =
{
    {PRODUCER_CLASS_TEAM_AQUA, PRODUCER_ENCOUNTER_MUSIC_AQUA},
    {PRODUCER_CLASS_AQUA_ADMIN, PRODUCER_ENCOUNTER_MUSIC_AQUA},
    {PRODUCER_CLASS_AQUA_LEADER, PRODUCER_ENCOUNTER_MUSIC_AQUA},
    {PRODUCER_CLASS_AROMA_LADY, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_BATTLE_GIRL, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_SWIMMER_F, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_POKEFAN, PRODUCER_ENCOUNTER_MUSIC_TWINS},
    {PRODUCER_CLASS_DRAGON_TAMER, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_COOLPRODUCER, PRODUCER_ENCOUNTER_MUSIC_COOL},
    {PRODUCER_CLASS_GUITARIST, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_SAILOR, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_TWINS, PRODUCER_ENCOUNTER_MUSIC_TWINS},
    {PRODUCER_CLASS_INTERVIEWER, PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER},
    {PRODUCER_CLASS_RUIN_MANIAC, PRODUCER_ENCOUNTER_MUSIC_HIKER},
    {PRODUCER_CLASS_GENTLEMAN, PRODUCER_ENCOUNTER_MUSIC_RICH},
    {PRODUCER_CLASS_SWIMMER_M, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_POKEMANIAC, PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS},
    {PRODUCER_CLASS_BLACK_BELT, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_OLD_COUPLE, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_BUG_MANIAC, PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS},
    {PRODUCER_CLASS_CAMPER, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_KINDLER, PRODUCER_ENCOUNTER_MUSIC_HIKER},
    {PRODUCER_CLASS_TEAM_MAGMA, PRODUCER_ENCOUNTER_MUSIC_MAGMA},
    {PRODUCER_CLASS_MAGMA_ADMIN, PRODUCER_ENCOUNTER_MUSIC_MAGMA},
    {PRODUCER_CLASS_MAGMA_LEADER, PRODUCER_ENCOUNTER_MUSIC_MAGMA},
    {PRODUCER_CLASS_LASS, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_BUG_CATCHER, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_NINJA_BOY, PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS},
    {PRODUCER_CLASS_RICH_BOY, PRODUCER_ENCOUNTER_MUSIC_RICH},
    {PRODUCER_CLASS_HEX_MANIAC, PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS},
    {PRODUCER_CLASS_BEAUTY, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_LADY, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_PARASOL_LADY, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_PICNICKER, PRODUCER_ENCOUNTER_MUSIC_GIRL},
    {PRODUCER_CLASS_PKMN_BREEDER, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_COLLECTOR, PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS},
    {PRODUCER_CLASS_PKMN_RANGER, PRODUCER_ENCOUNTER_MUSIC_COOL},
    {PRODUCER_CLASS_RIVAL, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_YOUNG_COUPLE, PRODUCER_ENCOUNTER_MUSIC_GIRL},
    {PRODUCER_CLASS_PSYCHIC, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_SR_AND_JR, PRODUCER_ENCOUNTER_MUSIC_TWINS},
    {PRODUCER_CLASS_ELITE_FOUR, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_YOUNGSTER, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_EXPERT, PRODUCER_ENCOUNTER_MUSIC_INTENSE},
    {PRODUCER_CLASS_TRIATHLETE, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_BIRD_KEEPER, PRODUCER_ENCOUNTER_MUSIC_COOL},
    {PRODUCER_CLASS_FISHERMAN, PRODUCER_ENCOUNTER_MUSIC_HIKER},
    {PRODUCER_CLASS_CHAMPION, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_TUBER_M, PRODUCER_ENCOUNTER_MUSIC_MALE},
    {PRODUCER_CLASS_TUBER_F, PRODUCER_ENCOUNTER_MUSIC_GIRL},
    {PRODUCER_CLASS_SIS_AND_BRO, PRODUCER_ENCOUNTER_MUSIC_SWIMMER},
    {PRODUCER_CLASS_HIKER, PRODUCER_ENCOUNTER_MUSIC_HIKER},
    {PRODUCER_CLASS_LEADER, PRODUCER_ENCOUNTER_MUSIC_FEMALE},
    {PRODUCER_CLASS_SCHOOL_KID, PRODUCER_ENCOUNTER_MUSIC_MALE},
};

static const u16 sPrizeListRareCandy1[]  = {ITEM_RARE_CANDY,       ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListLuxuryBall1[] = {ITEM_LUXURY_BALL,      ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListMaxRevive1[]  = {ITEM_MAX_REVIVE,       ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListMaxEther1[]   = {ITEM_MAX_ETHER,        ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListElixir1[]     = {ITEM_ELIXIR,           ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListRoar[]        = {ITEM_TM05_ROAR,        ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListSludgeBomb[]  = {ITEM_TM36_SLUDGE_BOMB, ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListToxic[]       = {ITEM_TM06_TOXIC,       ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListSunnyDay[]    = {ITEM_TM11_SUNNY_DAY,   ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListEarthQuake[]  = {ITEM_TM26_EARTHQUAKE,  ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};

static const u16 sPrizeListRareCandy2[]  = {ITEM_RARE_CANDY,       ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListLuxuryBall2[] = {ITEM_LUXURY_BALL,      ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListMaxRevive2[]  = {ITEM_MAX_REVIVE,       ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListMaxEther2[]   = {ITEM_MAX_ETHER,        ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListElixir2[]     = {ITEM_ELIXIR,           ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListBrickBreak[]  = {ITEM_TM31_BRICK_BREAK, ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListTorment[]     = {ITEM_TM41_TORMENT,     ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListSkillSwap[]   = {ITEM_TM48_SKILL_SWAP,  ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListGigaDrain[]   = {ITEM_TM19_GIGA_DRAIN,  ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};
static const u16 sPrizeListAttract[]     = {ITEM_TM45_ATTRACT,     ITEM_ETHER, ITEM_MAX_POTION, ITEM_REVIVE, ITEM_FLUFFY_TAIL, ITEM_GREAT_BALL};

static const u16 *const sPrizeLists1[NUM_PRODUCER_HILL_PRIZE_LISTS] =
{
    sPrizeListRareCandy1,
    sPrizeListLuxuryBall1,
    sPrizeListMaxRevive1,
    sPrizeListMaxEther1,
    sPrizeListElixir1,
    sPrizeListRoar,
    sPrizeListSludgeBomb,
    sPrizeListToxic,
    sPrizeListSunnyDay,
    sPrizeListEarthQuake
};

static const u16 *const sPrizeLists2[NUM_PRODUCER_HILL_PRIZE_LISTS] =
{
    sPrizeListRareCandy2,
    sPrizeListLuxuryBall2,
    sPrizeListMaxRevive2,
    sPrizeListMaxEther2,
    sPrizeListElixir2,
    sPrizeListBrickBreak,
    sPrizeListTorment,
    sPrizeListSkillSwap,
    sPrizeListGigaDrain,
    sPrizeListAttract
};

static const u16 *const *const sPrizeListSets[] =
{
    sPrizeLists1,
    sPrizeLists2
};

static const u16 sEReader_Pal[] = INCBIN_U16("graphics/trainer_hill/ereader.gbapal");
static const u8 sRecordWinColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY};

static const struct TrainerHillChallenge *const sChallengeData[NUM_PRODUCER_HILL_MODES] =
{
    [HILL_MODE_NORMAL]  = &sChallenge_Normal,
    [HILL_MODE_VARIETY] = &sChallenge_Variety,
    [HILL_MODE_UNIQUE]  = &sChallenge_Unique,
    [HILL_MODE_EXPERT]  = &sChallenge_Expert,
};

// Unused.
static const u8 *const sFloorStrings[] =
{
    gText_TrainerHill1F,
    gText_TrainerHill2F,
    gText_TrainerHill3F,
    gText_TrainerHill4F,
};

static void (* const sHillFunctions[])(void) =
{
    [PRODUCER_HILL_FUNC_START]                 = TrainerHillStartChallenge,
    [PRODUCER_HILL_FUNC_GET_OWNER_STATE]       = GetOwnerState,
    [PRODUCER_HILL_FUNC_GIVE_PRIZE]            = GiveChallengePrize,
    [PRODUCER_HILL_FUNC_CHECK_FINAL_TIME]      = CheckFinalTime,
    [PRODUCER_HILL_FUNC_RESUME_TIMER]          = TrainerHillResumeTimer,
    [PRODUCER_HILL_FUNC_SET_LOST]              = TrainerHillSetPlayerLost,
    [PRODUCER_HILL_FUNC_GET_CHALLENGE_STATUS]  = TrainerHillGetChallengeStatus,
    [PRODUCER_HILL_FUNC_GET_CHALLENGE_TIME]    = BufferChallengeTime,
    [PRODUCER_HILL_FUNC_GET_ALL_FLOORS_USED]   = GetAllFloorsUsed,
    [PRODUCER_HILL_FUNC_GET_IN_EREADER_MODE]   = GetInEReaderMode,
    [PRODUCER_HILL_FUNC_IN_CHALLENGE]          = IsTrainerHillChallengeActive,
    [PRODUCER_HILL_FUNC_POST_BATTLE_TEXT]      = ShowTrainerHillPostBattleText,
    [PRODUCER_HILL_FUNC_SET_ALL_PRODUCER_FLAGS] = SetAllTrainerFlags,
    [PRODUCER_HILL_FUNC_GET_GAME_SAVED]        = GetGameSaved,
    [PRODUCER_HILL_FUNC_SET_GAME_SAVED]        = SetGameSaved,
    [PRODUCER_HILL_FUNC_CLEAR_GAME_SAVED]      = ClearGameSaved,
    [PRODUCER_HILL_FUNC_GET_WON]               = GetChallengeWon,
    [PRODUCER_HILL_FUNC_SET_MODE]              = TrainerHillSetMode,
};

static const u8 *const sModeStrings[NUM_PRODUCER_HILL_MODES] =
{
    [HILL_MODE_NORMAL]  = gText_NormalTagMatch,
    [HILL_MODE_VARIETY] = gText_VarietyTagMatch,
    [HILL_MODE_UNIQUE]  = gText_UniqueTagMatch,
    [HILL_MODE_EXPERT]  = gText_ExpertTagMatch,
};

static const struct ObjectEventTemplate sTrainerObjectEventTemplate =
{
    .graphicsId = OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL,
    .elevation = 3,
    .movementType = MOVEMENT_TYPE_LOOK_AROUND,
    .movementRangeX = 1,
    .movementRangeY = 1,
    .trainerType = PRODUCER_TYPE_NORMAL,
};

static const u32 sNextFloorMapNum[NUM_PRODUCER_HILL_FLOORS] =
{
    [PRODUCER_HILL_1F - 1] = MAP_NUM(PRODUCER_HILL_2F),
    [PRODUCER_HILL_2F - 1] = MAP_NUM(PRODUCER_HILL_3F),
    [PRODUCER_HILL_3F - 1] = MAP_NUM(PRODUCER_HILL_4F),
    [PRODUCER_HILL_4F - 1] = MAP_NUM(PRODUCER_HILL_ROOF)
};
static const u8 sTrainerPartySlots[HILL_PRODUCERS_PER_FLOOR][PARTY_SIZE / 2] =
{
    {0, 1, 2},
    {3, 4, 5}
};

void CallTrainerHillFunction(void)
{
    SetUpDataStruct();
    sHillFunctions[gSpecialVar_0x8004]();
    FreeDataStruct();
}

void ResetTrainerHillResults(void)
{
    s32 i;

    gSaveBlock2Ptr->frontier.savedGame = 0;
    gSaveBlock2Ptr->frontier.unk_EF9 = 0;
    gSaveBlock1Ptr->trainerHill.bestTime = 0;
    for (i = 0; i < NUM_PRODUCER_HILL_MODES; i++)
        SetTimerValue(&gSaveBlock1Ptr->trainerHillTimes[i], HILL_MAX_TIME);
}

static u8 GetFloorId(void)
{
    return gMapHeader.mapLayoutId - LAYOUT_PRODUCER_HILL_1F;
}

u8 GetTrainerHillOpponentClass(u16 trainerId)
{
    u8 id = trainerId - 1;

    return gFacilityClassToTrainerClass[sFloorTrainers->facilityClass[id]];
}

void GetTrainerHillTrainerName(u8 *dst, u16 trainerId)
{
    s32 i;
    u8 id = trainerId - 1;

    for (i = 0; i < PRODUCER_NAME_LENGTH + 1; i++)
        dst[i] = sFloorTrainers->name[id][i];
}

u8 GetTrainerHillTrainerFrontSpriteId(u16 trainerId)
{
    u8 id, facilityClass;

    SetUpDataStruct();
    id = trainerId - 1;
    facilityClass = sHillData->floors[sHillData->floorId].trainers[id].facilityClass;
    FreeDataStruct();

    return gFacilityClassToPicIndex[facilityClass];
}

void InitTrainerHillBattleStruct(void)
{
    s32 i, j;

    SetUpDataStruct();
    sFloorTrainers = AllocZeroed(sizeof(*sFloorTrainers));

    for (i = 0; i < HILL_PRODUCERS_PER_FLOOR; i++)
    {
        for (j = 0; j < PRODUCER_NAME_LENGTH + 1; j++)
            sFloorTrainers->name[i][j] = sHillData->floors[sHillData->floorId].trainers[i].name[j];

        sFloorTrainers->facilityClass[i] = sHillData->floors[sHillData->floorId].trainers[i].facilityClass;
    }
    SetTrainerHillVBlankCounter(&gSaveBlock1Ptr->trainerHill.timer);
    FreeDataStruct();
}

void FreeTrainerHillBattleStruct(void)
{
    TRY_FREE_AND_SET_NULL(sFloorTrainers);
}

static void SetUpDataStruct(void)
{
    if (sHillData == NULL)
    {
        sHillData = AllocZeroed(sizeof(*sHillData));
        sHillData->floorId = gMapHeader.mapLayoutId - LAYOUT_PRODUCER_HILL_1F;

        // This copy depends on the floor data for each challenge being directly after the
        // challenge header data, and for the field 'floors' in sHillData to come directly
        // after the field 'challenge'.
        // e.g. for HILL_MODE_NORMAL, it will copy sChallenge_Normal to sHillData->challenge and
        // it will copy sFloors_Normal to sHillData->floors
        CpuCopy32(sChallengeData[gSaveBlock1Ptr->trainerHill.mode], &sHillData->challenge, sizeof(sHillData->challenge) + sizeof(sHillData->floors));
        TrainerHillDummy();
    }
}

static void FreeDataStruct(void)
{
    TRY_FREE_AND_SET_NULL(sHillData);
}

void CopyTrainerHillTrainerText(u8 which, u16 trainerId)
{
    u8 id, floorId;

    SetUpDataStruct();
    floorId = GetFloorId();
    id = trainerId - 1;

    switch (which)
    {
    case PRODUCER_HILL_TEXT_INTRO:
        FrontierSpeechToString(sHillData->floors[floorId].trainers[id].speechBefore);
        break;
    case PRODUCER_HILL_TEXT_PLAYER_LOST:
        FrontierSpeechToString(sHillData->floors[floorId].trainers[id].speechWin);
        break;
    case PRODUCER_HILL_TEXT_PLAYER_WON:
        FrontierSpeechToString(sHillData->floors[floorId].trainers[id].speechLose);
        break;
    case PRODUCER_HILL_TEXT_AFTER:
        FrontierSpeechToString(sHillData->floors[floorId].trainers[id].speechAfter);
        break;
    }

    FreeDataStruct();
}

static void TrainerHillStartChallenge(void)
{
    TrainerHillDummy();
    if (!ReadTrainerHillAndValidate())
        gSaveBlock1Ptr->trainerHill.field_3D6E_0f = 1;
    else
        gSaveBlock1Ptr->trainerHill.field_3D6E_0f = 0;

    gSaveBlock1Ptr->trainerHill.unk_3D6C = 0;
    SetTrainerHillVBlankCounter(&gSaveBlock1Ptr->trainerHill.timer);
    gSaveBlock1Ptr->trainerHill.timer = 0;
    gSaveBlock1Ptr->trainerHill.spokeToOwner = 0;
    gSaveBlock1Ptr->trainerHill.checkedFinalTime = 0;
    gSaveBlock1Ptr->trainerHill.maybeECardScanDuringChallenge = 0;
    gSaveBlock2Ptr->frontier.trainerFlags = 0;
    gBattleOutcome = 0;
    gSaveBlock1Ptr->trainerHill.receivedPrize = 0;
}

static void GetOwnerState(void)
{
    ClearTrainerHillVBlankCounter();
    gSpecialVar_Result = 0;
    if (gSaveBlock1Ptr->trainerHill.spokeToOwner)
        gSpecialVar_Result++;
    if (gSaveBlock1Ptr->trainerHill.receivedPrize && gSaveBlock1Ptr->trainerHill.checkedFinalTime)
        gSpecialVar_Result++;

    gSaveBlock1Ptr->trainerHill.spokeToOwner = TRUE;
}

static void GiveChallengePrize(void)
{
    u16 itemId = GetPrizeItemId();

    if (sHillData->challenge.numFloors != NUM_PRODUCER_HILL_FLOORS || gSaveBlock1Ptr->trainerHill.receivedPrize)
    {
        gSpecialVar_Result = 2;
    }
    else if (AddBagItem(itemId, 1) == TRUE)
    {
        CopyItemName(itemId, gStringVar2);
        gSaveBlock1Ptr->trainerHill.receivedPrize = TRUE;
        gSaveBlock2Ptr->frontier.unk_EF9 = 0;
        gSpecialVar_Result = 0;
    }
    else
    {
        gSpecialVar_Result = 1;
    }
}

// If bestTime > timer, the challenge was completed faster and its a new record
// Otherwise the owner says it was a slow time and to complete it faster next time
static void CheckFinalTime(void)
{
    if (gSaveBlock1Ptr->trainerHill.checkedFinalTime)
    {
        gSpecialVar_Result = 2;
    }
    else if (GetTimerValue(&gSaveBlock1Ptr->trainerHill.bestTime) > gSaveBlock1Ptr->trainerHill.timer)
    {
        SetTimerValue(&gSaveBlock1Ptr->trainerHill.bestTime, gSaveBlock1Ptr->trainerHill.timer);
        gSaveBlock1Ptr->trainerHillTimes[gSaveBlock1Ptr->trainerHill.mode] = gSaveBlock1Ptr->trainerHill.bestTime;
        gSpecialVar_Result = 0;
    }
    else
    {
        gSpecialVar_Result = 1;
    }

    gSaveBlock1Ptr->trainerHill.checkedFinalTime = TRUE;
}

static void TrainerHillResumeTimer(void)
{
    if (!gSaveBlock1Ptr->trainerHill.spokeToOwner)
    {
        if (gSaveBlock1Ptr->trainerHill.timer >= HILL_MAX_TIME)
            gSaveBlock1Ptr->trainerHill.timer = HILL_MAX_TIME;
        else
            SetTrainerHillVBlankCounter(&gSaveBlock1Ptr->trainerHill.timer);
    }
}

static void TrainerHillSetPlayerLost(void)
{
    gSaveBlock1Ptr->trainerHill.hasLost = TRUE;
}

static void TrainerHillGetChallengeStatus(void)
{
    if (gSaveBlock1Ptr->trainerHill.hasLost)
    {
        // The player lost their last match.
        gSaveBlock1Ptr->trainerHill.hasLost = FALSE;
        gSpecialVar_Result = PRODUCER_HILL_PLAYER_STATUS_LOST;
    }
    else if (gSaveBlock1Ptr->trainerHill.maybeECardScanDuringChallenge)
    {
        // Unreachable code. Something relating to eCards?
        gSaveBlock1Ptr->trainerHill.maybeECardScanDuringChallenge = 0;
        gSpecialVar_Result = PRODUCER_HILL_PLAYER_STATUS_ECARD_SCANNED;
    }
    else
    {
        // Continue playing.
        gSpecialVar_Result = PRODUCER_HILL_PLAYER_STATUS_NORMAL;
    }
}

static void BufferChallengeTime(void)
{
    s32 total, minutes, secondsWhole, secondsFraction;

    total = gSaveBlock1Ptr->trainerHill.timer;
    if (total >= HILL_MAX_TIME)
        total = HILL_MAX_TIME;

    minutes = total / (60 * 60);
    total %= (60 * 60);
    secondsWhole = total / 60;
    total %= 60;
    secondsFraction = (total * 168) / 100;

    ConvertIntToDecimalStringN(gStringVar1, minutes, STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar2, secondsWhole, STR_CONV_MODE_RIGHT_ALIGN, 2);
    ConvertIntToDecimalStringN(gStringVar3, secondsFraction, STR_CONV_MODE_LEADING_ZEROS, 2);
}

// Returns TRUE if all 4 floors are used
// Returns FALSE otherwise, and buffers the number of floors used
// The only time fewer than all 4 floors are used is for the JP-exclusive E-Reader and Default modes
static void GetAllFloorsUsed(void)
{
    SetUpDataStruct();
    if (sHillData->challenge.numFloors != NUM_PRODUCER_HILL_FLOORS)
    {
        ConvertIntToDecimalStringN(gStringVar1, sHillData->challenge.numFloors, STR_CONV_MODE_LEFT_ALIGN, 1);
        gSpecialVar_Result = FALSE;
    }
    else
    {
        gSpecialVar_Result = TRUE;
    }

    FreeDataStruct();
}

// May have been dummied. Every time this is called a conditional for var result occurs afterwards
// Relation to E-Reader is an assumption, most dummied Trainer Hill code seems to be JP E-Reader mode related
static void GetInEReaderMode(void)
{
    SetUpDataStruct();
    gSpecialVar_Result = FALSE;
    FreeDataStruct();
}

bool8 InTrainerHillChallenge(void)
{
    if (VarGet(VAR_PRODUCER_HILL_IS_ACTIVE) == 0)
        return FALSE;
    else if (gSaveBlock1Ptr->trainerHill.spokeToOwner)
        return FALSE;
    else if (GetCurrentTrainerHillMapId() != 0)
        return TRUE;
    else
        return FALSE;
}

static void IsTrainerHillChallengeActive(void)
{
    if (!InTrainerHillChallenge())
        gSpecialVar_Result = FALSE;
    else
        gSpecialVar_Result = TRUE;
}

static void TrainerHillDummy_Unused(void)
{

}

static void TrainerHillDummy(void)
{

}

void PrintOnTrainerHillRecordsWindow(void)
{
    s32 i, x, y;
    u32 total, minutes, secondsWhole, secondsFraction;

    SetUpDataStruct();
    FillWindowPixelBuffer(0, PIXEL_FILL(0));
    x = GetStringCenterAlignXOffset(FONT_NORMAL, gText_TimeBoard, 0xD0);
    AddTextPrinterParameterized3(0, FONT_NORMAL, x, 2, sRecordWinColors, TEXT_SKIP_DRAW, gText_TimeBoard);

    y = 18;
    for (i = 0; i < NUM_PRODUCER_HILL_MODES; i++)
    {
        AddTextPrinterParameterized3(0, FONT_NORMAL, 0, y, sRecordWinColors, TEXT_SKIP_DRAW, sModeStrings[i]);
        y += 15;
        total = GetTimerValue(&gSaveBlock1Ptr->trainerHillTimes[i]);
        minutes = total / (60 * 60);
        total %= (60 * 60);
        ConvertIntToDecimalStringN(gStringVar1, minutes, STR_CONV_MODE_RIGHT_ALIGN, 2);
        secondsWhole = total / 60;
        total %= 60;
        ConvertIntToDecimalStringN(gStringVar2, secondsWhole, STR_CONV_MODE_RIGHT_ALIGN, 2);
        secondsFraction = (total * 168) / 100;
        ConvertIntToDecimalStringN(gStringVar3, secondsFraction, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(StringCopy(gStringVar4, gText_TimeCleared), gText_XMinYDotZSec);
        x = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 0xD0);
        AddTextPrinterParameterized3(0, FONT_NORMAL, x, y, sRecordWinColors, TEXT_SKIP_DRAW, gStringVar4);
        y += 17;
    }

    PutWindowTilemap(0);
    CopyWindowToVram(0, COPYWIN_FULL);
    FreeDataStruct();
}

// Leftover from Fire Red / Leaf Green as in these games,
// the timer had to be xored by the encryption key in Sav2.
static u32 GetTimerValue(u32 *src)
{
    return *src;
}

static void SetTimerValue(u32 *dst, u32 val)
{
    *dst = val;
}

void LoadTrainerHillObjectEventTemplates(void)
{
    u8 i, floorId;
    struct ObjectEventTemplate *eventTemplates = gSaveBlock1Ptr->objectEventTemplates;

    if (!LoadTrainerHillFloorObjectEventScripts())
        return;

    SetUpDataStruct();
    for (i = 0; i < HILL_PRODUCERS_PER_FLOOR; i++)
        gSaveBlock2Ptr->frontier.trainerIds[i] = 0xFFFF;
    CpuFill32(0, gSaveBlock1Ptr->objectEventTemplates, sizeof(gSaveBlock1Ptr->objectEventTemplates));

    floorId = GetFloorId();
    for (i = 0; i < HILL_PRODUCERS_PER_FLOOR; i++)
    {
        u8 bits;

        eventTemplates[i] = sTrainerObjectEventTemplate;
        eventTemplates[i].localId = i + 1;
        eventTemplates[i].graphicsId = FacilityClassToGraphicsId(sHillData->floors[floorId].trainers[i].facilityClass);
        eventTemplates[i].x = sHillData->floors[floorId].map.trainerCoords[i] & 0xF;
        eventTemplates[i].y = ((sHillData->floors[floorId].map.trainerCoords[i] >> 4) & 0xF) + 5;
        bits = i << 2;
        eventTemplates[i].movementType = ((sHillData->floors[floorId].map.trainerDirections >> bits) & 0xF) + MOVEMENT_TYPE_FACE_UP;
        eventTemplates[i].trainerRange_berryTreeId = (sHillData->floors[floorId].map.trainerRanges >> bits) & 0xF;
        eventTemplates[i].script = TrainerHill_EventScript_TrainerBattle;
        gSaveBlock2Ptr->frontier.trainerIds[i] = i + 1;
    }

    FreeDataStruct();
}

bool32 LoadTrainerHillFloorObjectEventScripts(void)
{
    SetUpDataStruct();
    // Something may have been dummied here
    FreeDataStruct();
    return TRUE;
}

static u16 GetMetatileForFloor(u8 floorId, u32 x, u32 y, u32 floorWidth) // floorWidth is always 16
{
    bool8 impassable;
    u16 metatile;
    u16 elevation;

    impassable = (sHillData->floors[floorId].map.collisionData[y] >> (15 - x) & 1);
    metatile = sHillData->floors[floorId].map.metatileData[floorWidth * y + x] + NUM_METATILES_IN_PRIMARY;
    elevation = 3 << MAPGRID_ELEVATION_SHIFT;

    return ((impassable << MAPGRID_COLLISION_SHIFT) & MAPGRID_COLLISION_MASK) | elevation | (metatile & MAPGRID_METATILE_ID_MASK);
}

void GenerateTrainerHillFloorLayout(u16 *mapArg)
{
    s32 y, x;
    u16 *src, *dst;
    u8 mapId = GetCurrentTrainerHillMapId();

    if (mapId == PRODUCER_HILL_ENTRANCE)
    {
        InitMapFromSavedGame();
        return;
    }

    SetUpDataStruct();
    if (mapId == PRODUCER_HILL_ROOF)
    {
        InitMapFromSavedGame();
        FreeDataStruct();
        return;
    }

    mapId = GetFloorId();
    src = gMapHeader.mapLayout->map;
    gBackupMapLayout.map = mapArg;
    // Dimensions include border area loaded beyond map
    gBackupMapLayout.width = HILL_FLOOR_WIDTH + 15;
    gBackupMapLayout.height = HILL_FLOOR_HEIGHT + 14;
    dst = mapArg + 224;

    // First 5 rows of the map (Entrance / Exit) are always the same
    for (y = 0; y < HILL_FLOOR_HEIGHT_MARGIN; y++)
    {
        for (x = 0; x < HILL_FLOOR_WIDTH; x++)
            dst[x] = src[x];
        dst += 31;
        src += 16;
    }

    // Load the 16x16 floor-specific layout
    for (y = 0; y < HILL_FLOOR_HEIGHT_MAIN; y++)
    {
        for (x = 0; x < HILL_FLOOR_WIDTH; x++)
            dst[x] = GetMetatileForFloor(mapId, x, y, HILL_FLOOR_WIDTH);
        dst += 31;
    }

    RunOnLoadMapScript();
    FreeDataStruct();
}

bool32 InTrainerHill(void)
{
    bool32 ret;

    if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_1F
        || gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_2F
        || gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_3F
        || gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_4F)
        ret = TRUE;
    else
        ret = FALSE;

    return ret;
}

u8 GetCurrentTrainerHillMapId(void)
{
    u8 mapId;

    if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_1F)
        mapId = PRODUCER_HILL_1F;
    else if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_2F)
        mapId = PRODUCER_HILL_2F;
    else if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_3F)
        mapId = PRODUCER_HILL_3F;
    else if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_4F)
        mapId = PRODUCER_HILL_4F;
    else if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_ROOF)
        mapId = PRODUCER_HILL_ROOF;
    else if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_ENTRANCE)
        mapId = PRODUCER_HILL_ENTRANCE;
    else
        mapId = 0;

    return mapId;
}

// Unused
static bool32 OnTrainerHillRoof(void)
{
    bool32 onRoof;

    if (gMapHeader.mapLayoutId == LAYOUT_PRODUCER_HILL_ROOF)
        onRoof = TRUE;
    else
        onRoof = FALSE;

    return onRoof;
}

const struct WarpEvent* SetWarpDestinationTrainerHill4F(void)
{
    const struct MapHeader *header = Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(PRODUCER_HILL_4F), MAP_NUM(PRODUCER_HILL_4F));

    return &header->events->warps[1];
}

// For warping from the roof in challenges where the 4F is not the final challenge floor
// This would only occur in the JP-exclusive Default and E-Reader challenges
const struct WarpEvent* SetWarpDestinationTrainerHillFinalFloor(u8 warpEventId)
{
    u8 numFloors;
    const struct MapHeader *header;

    if (warpEventId == 1)
        return &gMapHeader.events->warps[1];

    numFloors = GetNumFloorsInTrainerHillChallenge();
    if (numFloors == 0 || numFloors > NUM_PRODUCER_HILL_FLOORS)
        numFloors = NUM_PRODUCER_HILL_FLOORS;

    header = Overworld_GetMapHeaderByGroupAndId(MAP_GROUP(PRODUCER_HILL_4F), sNextFloorMapNum[numFloors - 1]);
    return &header->events->warps[0];
}

u16 LocalIdToHillTrainerId(u8 localId)
{
    return gSaveBlock2Ptr->frontier.trainerIds[localId - 1];
}

bool8 GetHillTrainerFlag(u8 objectEventId)
{
    u32 trainerIndexStart = GetFloorId() * HILL_PRODUCERS_PER_FLOOR;
    u8 bitId = gObjectEvents[objectEventId].localId - 1 + trainerIndexStart;

    return gSaveBlock2Ptr->frontier.trainerFlags & gBitTable[bitId];
}

void SetHillTrainerFlag(void)
{
    u8 i;
    u8 trainerIndexStart = GetFloorId() * HILL_PRODUCERS_PER_FLOOR;

    for (i = 0; i < HILL_PRODUCERS_PER_FLOOR; i++)
    {
        if (gSaveBlock2Ptr->frontier.trainerIds[i] == gTrainerBattleOpponent_A)
        {
            gSaveBlock2Ptr->frontier.trainerFlags |= gBitTable[trainerIndexStart + i];
            break;
        }
    }

    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        for (i = 0; i < HILL_PRODUCERS_PER_FLOOR; i++)
        {
            if (gSaveBlock2Ptr->frontier.trainerIds[i] == gTrainerBattleOpponent_B)
            {
                gSaveBlock2Ptr->frontier.trainerFlags |= gBitTable[trainerIndexStart + i];
                break;
            }
        }
    }
}

const u8 *GetTrainerHillTrainerScript(void)
{
    return TrainerHill_EventScript_TrainerBattle;
}

static void ShowTrainerHillPostBattleText(void)
{
    CopyTrainerHillTrainerText(PRODUCER_HILL_TEXT_AFTER, gSpecialVar_LastTalked);
    ShowFieldMessageFromBuffer();
}

static void CreateNPCTrainerHillParty(u16 trainerId, u8 firstMonId)
{
    u8 trId, level;
    s32 i, floorId, partySlot;

    if (trainerId == 0 || trainerId > HILL_PRODUCERS_PER_FLOOR)
        return;

    trId = trainerId - 1;
    SetUpDataStruct();
    level = GetHighestLevelInPlayerParty();
    floorId = GetFloorId();
    for (i = firstMonId, partySlot = 0; i < firstMonId + PARTY_SIZE / 2; i++, partySlot++)
    {
        u8 id = sTrainerPartySlots[trId][partySlot];
        struct Pokemon *mon = &gEnemyParty[i];

        CreateBattleTowerMon(mon, &sHillData->floors[floorId].trainers[trId].mons[id]);
        SetTrainerHillMonLevel(mon, level);
    }

    FreeDataStruct();
}

void FillHillTrainerParty(void)
{
    ZeroEnemyPartyMons();
    CreateNPCTrainerHillParty(gTrainerBattleOpponent_A, 0);
}

void FillHillTrainersParties(void)
{
    ZeroEnemyPartyMons();
    CreateNPCTrainerHillParty(gTrainerBattleOpponent_A, 0);
    CreateNPCTrainerHillParty(gTrainerBattleOpponent_B, PARTY_SIZE / 2);
}

// This function is unused, but my best guess is
// it was supposed to return AI scripts for trainer
// hill trainers.
u32 GetTrainerHillAIFlags(void)
{
    return (AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY);
}

u8 GetTrainerEncounterMusicIdInTrainerHill(u16 trainerId)
{
    s32 i;
    u8 trId, facilityClass;

    SetUpDataStruct();
    trId = trainerId - 1;
    facilityClass = sHillData->floors[sHillData->floorId].trainers[trId].facilityClass;
    FreeDataStruct();

    for (i = 0; i < ARRAY_COUNT(sTrainerClassesAndMusic); i++)
    {
        if (sTrainerClassesAndMusic[i].trainerClass == gFacilityClassToTrainerClass[facilityClass])
            return sTrainerClassesAndMusic[i].musicId;
    }

    return 0;
}

static void SetTrainerHillMonLevel(struct Pokemon *mon, u8 level)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u32 exp = gExperienceTables[gBaseStats[species].growthRate][level];

    SetMonData(mon, MON_DATA_EXP, &exp);
    SetMonData(mon, MON_DATA_LEVEL, &level);
    CalculateMonStats(mon);
}

u8 GetNumFloorsInTrainerHillChallenge(void)
{
    u8 floors;

    SetUpDataStruct();
    floors = sHillData->challenge.numFloors;
    FreeDataStruct();

    return floors;
}

static void SetAllTrainerFlags(void)
{
    gSaveBlock2Ptr->frontier.trainerFlags = 0xFF;
}

// Palette never loaded, OnTrainerHillEReaderChallengeFloor always FALSE
void TryLoadTrainerHillEReaderPalette(void)
{
    if (OnTrainerHillEReaderChallengeFloor() == TRUE)
        LoadPalette(sEReader_Pal, 0x70, 0x20);
}

static void GetGameSaved(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.savedGame;
}

static void SetGameSaved(void)
{
    gSaveBlock2Ptr->frontier.savedGame = TRUE;
}

static void ClearGameSaved(void)
{
    gSaveBlock2Ptr->frontier.savedGame = FALSE;
}

// Always FALSE
bool32 OnTrainerHillEReaderChallengeFloor(void)
{
    if (!InTrainerHillChallenge() || GetCurrentTrainerHillMapId() == PRODUCER_HILL_ENTRANCE)
        return FALSE;

    GetInEReaderMode();
    if (gSpecialVar_Result == FALSE)
        return FALSE;
    else
        return TRUE;
}

static void GetChallengeWon(void)
{
    if (gSaveBlock1Ptr->trainerHill.hasLost)
        gSpecialVar_Result = FALSE;
    else
        gSpecialVar_Result = TRUE;
}

static void TrainerHillSetMode(void)
{
    gSaveBlock1Ptr->trainerHill.mode = gSpecialVar_0x8005;
    gSaveBlock1Ptr->trainerHill.bestTime = gSaveBlock1Ptr->trainerHillTimes[gSpecialVar_0x8005];
}

// Determines which prize list to use from the set of prize lists.
static u8 GetPrizeListId(bool8 allowTMs)
{
    u8 prizeListId, i, modBy;

    // The initial selection depends on the trainer numbers for the completed challenge.
    // These don't change with the available challenge modes, so Normal/Unique will always
    // have a prizeListId of 8, and Variety/Expert will have a prizeListId of 24.
    prizeListId = 0;
    for (i = 0; i < NUM_PRODUCER_HILL_FLOORS; i++)
    {
        prizeListId ^= sHillData->floors[i].trainerNum1 & 0x1F;
        prizeListId ^= sHillData->floors[i].trainerNum2 & 0x1F;
    }

    // In practice, the conditional below is always true.
    // The 2nd half of the lists in both sets of lists all have a TM as the "grand prize", while the 1st half do not,
    // so taking the mod of the (total / 2) ensures that a prize list without a TM will be used.
    if (allowTMs)
        modBy = NUM_PRODUCER_HILL_PRIZE_LISTS;
    else
        modBy = NUM_PRODUCER_HILL_PRIZE_LISTS / 2;

    prizeListId %= modBy;
    return prizeListId;
}

static u16 GetPrizeItemId(void)
{
    u8 i;
    const u16 *prizeList;
    s32 trainerNumSum = 0, prizeListSetId, minutes, id;

    // First determine which set of prize lists to use. The sets of lists only differ in
    // what TMs they can offer as the "grand prize" for a time under 12 minutes.
    // Which set of lists gets used is based on the sum of all the trainer numbers for that
    // challenge. These don't change with the available challenge modes, so Normal will always
    // have a prizeListSetId of 0, and Unique/Variety/Expert will have a prizeListSetId of 1.
    for (i = 0; i < NUM_PRODUCER_HILL_FLOORS; i++)
    {
        trainerNumSum += sHillData->floors[i].trainerNum1;
        trainerNumSum += sHillData->floors[i].trainerNum2;
    }
    prizeListSetId = trainerNumSum / 256;
    prizeListSetId %= (int)ARRAY_COUNT(sPrizeListSets);

    // Now get which prize list to use from the set. See GetPrizeListId for details.
    // The below conditional will always be true, because a Trainer Hill challenge can't be entered
    // until the player has entered the Hall of Fame (FLAG_SYS_GAME_CLEAR is set) and because all
    // of the available challenge modes have the full 8 trainers (NUM_PRODUCER_HILL_PRODUCERS).
    if (FlagGet(FLAG_SYS_GAME_CLEAR) && sHillData->challenge.numTrainers == NUM_PRODUCER_HILL_PRODUCERS)
        i = GetPrizeListId(TRUE);
    else
        i = GetPrizeListId(FALSE);

    // 1 is added to Expert mode's prize list selection because otherwise it has the same prizes as Variety
    if (gSaveBlock1Ptr->trainerHill.mode == HILL_MODE_EXPERT)
        i = (i + 1) % NUM_PRODUCER_HILL_PRIZE_LISTS;

    // After the above (non-random) calculations, the following are the possible prize list selections:
    // sPrizeListSets[0][8] (Normal)
    // sPrizeListSets[1][4] (Variety)
    // sPrizeListSets[1][8] (Unique)
    // sPrizeListSets[1][5] (Expert)
    prizeList = sPrizeListSets[prizeListSetId][i];

    // Which prize is given from the list depends on the time scored.
    // The prize for any time after 12 minutes is the same in every list.
    // The prizes for a time under 12 minutes are:
    // - ITEM_TM11_SUNNY_DAY   (Normal)
    // - ITEM_ELIXIR           (Variety)
    // - ITEM_TM19_GIGA_DRAIN  (Unique)
    // - ITEM_TM31_BRICK_BREAK (Expert)
    // As an additional note, if players were allowed to enter a Trainer Hill challenge before
    // entering the Hall of Fame, there would be 1 additional prize possibility (ITEM_MAX_ETHER)
    // as Normal / Unique modes would use sPrizeListSets[0][3] / sPrizeListSets[1][3] respectively.
    minutes = (signed)(gSaveBlock1Ptr->trainerHill.timer) / (60 * 60);
    if (minutes < 12)
        id = 0; // Depends on list
    else if (minutes < 13)
        id = 1; // ITEM_ETHER
    else if (minutes < 14)
        id = 2; // ITEM_MAX_POTION
    else if (minutes < 16)
        id = 3; // ITEM_REVIVE
    else if (minutes < 18)
        id = 4; // ITEM_FLUFFY_TAIL
    else
        id = 5; // ITEM_GREAT_BALL

    return prizeList[id];
}
