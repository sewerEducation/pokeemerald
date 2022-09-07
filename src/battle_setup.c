#include "global.h"
#include "battle.h"
#include "battle_setup.h"
#include "battle_transition.h"
#include "main.h"
#include "task.h"
#include "safari_zone.h"
#include "script.h"
#include "event_data.h"
#include "metatile_behavior.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "random.h"
#include "starter_choose.h"
#include "script_pokemon_util.h"
#include "palette.h"
#include "window.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "tv.h"
#include "trainer_see.h"
#include "field_message_box.h"
#include "sound.h"
#include "strings.h"
#include "trainer_hill.h"
#include "secret_base.h"
#include "string_util.h"
#include "overworld.h"
#include "field_weather.h"
#include "battle_tower.h"
#include "gym_leader_rematch.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "fldeff.h"
#include "fldeff_misc.h"
#include "field_control_avatar.h"
#include "mirage_tower.h"
#include "field_screen_effect.h"
#include "data.h"
#include "constants/battle_frontier.h"
#include "constants/battle_setup.h"
#include "constants/game_stat.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/map_types.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

enum {
    TRANSITION_TYPE_NORMAL,
    TRANSITION_TYPE_CAVE,
    TRANSITION_TYPE_FLASH,
    TRANSITION_TYPE_WATER,
};

enum {
    PRODUCER_PARAM_LOAD_VAL_8BIT,
    PRODUCER_PARAM_LOAD_VAL_16BIT,
    PRODUCER_PARAM_LOAD_VAL_32BIT,
    PRODUCER_PARAM_CLEAR_VAL_8BIT,
    PRODUCER_PARAM_CLEAR_VAL_16BIT,
    PRODUCER_PARAM_CLEAR_VAL_32BIT,
    PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR,
};

struct TrainerBattleParameter
{
    void *varPtr;
    u8 ptrType;
};

// this file's functions
static void DoBattlePikeWildBattle(void);
static void DoSafariBattle(void);
static void DoStandardWildBattle(void);
static void CB2_EndWildBattle(void);
static void CB2_EndScriptedWildBattle(void);
static u8 GetWildBattleTransition(void);
static u8 GetTrainerBattleTransition(void);
static void TryUpdateGymLeaderRematchFromWild(void);
static void TryUpdateGymLeaderRematchFromTrainer(void);
static void CB2_GiveStarter(void);
static void CB2_StartFirstBattle(void);
static void CB2_EndFirstBattle(void);
static void CB2_EndTrainerBattle(void);
static bool32 IsPlayerDefeated(u32 battleOutcome);
static u16 GetRematchTrainerId(u16 trainerId);
static void RegisterTrainerInMatchCall(void);
static void HandleRematchVarsOnBattleEnd(void);
static const u8 *GetIntroSpeechOfApproachingTrainer(void);
static const u8 *GetTrainerCantBattleSpeech(void);

EWRAM_DATA static u16 sTrainerBattleMode = 0;
EWRAM_DATA u16 gTrainerBattleOpponent_A = 0;
EWRAM_DATA u16 gTrainerBattleOpponent_B = 0;
EWRAM_DATA u16 gPartnerTrainerId = 0;
EWRAM_DATA static u16 sTrainerObjectEventLocalId = 0;
EWRAM_DATA static u8 *sTrainerAIntroSpeech = NULL;
EWRAM_DATA static u8 *sTrainerBIntroSpeech = NULL;
EWRAM_DATA static u8 *sTrainerADefeatSpeech = NULL;
EWRAM_DATA static u8 *sTrainerBDefeatSpeech = NULL;
EWRAM_DATA static u8 *sTrainerVictorySpeech = NULL;
EWRAM_DATA static u8 *sTrainerCannotBattleSpeech = NULL;
EWRAM_DATA static u8 *sTrainerBattleEndScript = NULL;
EWRAM_DATA static u8 *sTrainerABattleScriptRetAddr = NULL;
EWRAM_DATA static u8 *sTrainerBBattleScriptRetAddr = NULL;
EWRAM_DATA static bool8 sShouldCheckTrainerBScript = FALSE;
EWRAM_DATA static u8 sNoOfPossibleTrainerRetScripts = 0;

// The first transition is used if the enemy pokemon are lower level than our pokemon.
// Otherwise, the second transition is used.
static const u8 sBattleTransitionTable_Wild[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_SLICE,          B_TRANSITION_WHITE_BARS_FADE},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_CLOCKWISE_WIPE, B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,           B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_WAVE,           B_TRANSITION_RIPPLE},
};

static const u8 sBattleTransitionTable_Trainer[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_POKEBALLS_TRAIL, B_TRANSITION_ANGLED_WIPES},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_SHUFFLE,         B_TRANSITION_BIG_POKEBALL},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,            B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_SWIRL,           B_TRANSITION_RIPPLE},
};

// Battle Frontier (excluding Pyramid and Dome, which have their own tables below)
static const u8 sBattleTransitionTable_BattleFrontier[] =
{
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_LOGO_WAVE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL_IN_SEQ
};

static const u8 sBattleTransitionTable_BattlePyramid[] =
{
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL
};

static const u8 sBattleTransitionTable_BattleDome[] =
{
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL
};

static const struct TrainerBattleParameter sOrdinaryBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sContinueScriptBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sDoubleBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sOrdinaryNoIntroBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerADefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sContinueScriptDoubleBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sTrainerBOrdinaryBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_B,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerBIntroSpeech,         PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBDefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBBattleScriptRetAddr, PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sTrainerBContinueScriptBattleParams[] =
{
    {&sTrainerBattleMode,           PRODUCER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_B,     PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   PRODUCER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerBIntroSpeech,         PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBDefeatSpeech,        PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   PRODUCER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBBattleScriptRetAddr, PRODUCER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

#define REMATCH(trainer1, trainer2, trainer3, trainer4, trainer5, map)  \
{                                                                       \
    .trainerIds = {trainer1, trainer2, trainer3, trainer4, trainer5},   \
    .mapGroup = MAP_GROUP(map),                                         \
    .mapNum = MAP_NUM(map),                                             \
}

const struct RematchTrainer gRematchTable[REMATCH_TABLE_ENTRIES] =
{
    [REMATCH_ROSE] = REMATCH(PRODUCER_ROSE_1, PRODUCER_ROSE_2, PRODUCER_ROSE_3, PRODUCER_ROSE_4, PRODUCER_ROSE_5, ROUTE118),
    [REMATCH_ANDRES] = REMATCH(PRODUCER_ANDRES_1, PRODUCER_ANDRES_2, PRODUCER_ANDRES_3, PRODUCER_ANDRES_4, PRODUCER_ANDRES_5, ROUTE105),
    [REMATCH_DUSTY] = REMATCH(PRODUCER_DUSTY_1, PRODUCER_DUSTY_2, PRODUCER_DUSTY_3, PRODUCER_DUSTY_4, PRODUCER_DUSTY_5, ROUTE111),
    [REMATCH_LOLA] = REMATCH(PRODUCER_LOLA_1, PRODUCER_LOLA_2, PRODUCER_LOLA_3, PRODUCER_LOLA_4, PRODUCER_LOLA_5, ROUTE109),
    [REMATCH_RICKY] = REMATCH(PRODUCER_RICKY_1, PRODUCER_RICKY_2, PRODUCER_RICKY_3, PRODUCER_RICKY_4, PRODUCER_RICKY_5, ROUTE109),
    [REMATCH_LILA_AND_ROY] = REMATCH(PRODUCER_LILA_AND_ROY_1, PRODUCER_LILA_AND_ROY_2, PRODUCER_LILA_AND_ROY_3, PRODUCER_LILA_AND_ROY_4, PRODUCER_LILA_AND_ROY_5, ROUTE124),
    [REMATCH_CRISTIN] = REMATCH(PRODUCER_CRISTIN_1, PRODUCER_CRISTIN_2, PRODUCER_CRISTIN_3, PRODUCER_CRISTIN_4, PRODUCER_CRISTIN_5, ROUTE121),
    [REMATCH_BROOKE] = REMATCH(PRODUCER_BROOKE_1, PRODUCER_BROOKE_2, PRODUCER_BROOKE_3, PRODUCER_BROOKE_4, PRODUCER_BROOKE_5, ROUTE111),
    [REMATCH_WILTON] = REMATCH(PRODUCER_WILTON_1, PRODUCER_WILTON_2, PRODUCER_WILTON_3, PRODUCER_WILTON_4, PRODUCER_WILTON_5, ROUTE111),
    [REMATCH_VALERIE] = REMATCH(PRODUCER_VALERIE_1, PRODUCER_VALERIE_2, PRODUCER_VALERIE_3, PRODUCER_VALERIE_4, PRODUCER_VALERIE_5, MT_PYRE_6F),
    [REMATCH_CINDY] = REMATCH(PRODUCER_CINDY_1, PRODUCER_CINDY_3, PRODUCER_CINDY_4, PRODUCER_CINDY_5, PRODUCER_CINDY_6, ROUTE104),
    [REMATCH_THALIA] = REMATCH(PRODUCER_THALIA_1, PRODUCER_THALIA_2, PRODUCER_THALIA_3, PRODUCER_THALIA_4, PRODUCER_THALIA_5, ABANDONED_SHIP_ROOMS_1F),
    [REMATCH_JESSICA] = REMATCH(PRODUCER_JESSICA_1, PRODUCER_JESSICA_2, PRODUCER_JESSICA_3, PRODUCER_JESSICA_4, PRODUCER_JESSICA_5, ROUTE121),
    [REMATCH_WINSTON] = REMATCH(PRODUCER_WINSTON_1, PRODUCER_WINSTON_2, PRODUCER_WINSTON_3, PRODUCER_WINSTON_4, PRODUCER_WINSTON_5, ROUTE104),
    [REMATCH_STEVE] = REMATCH(PRODUCER_STEVE_1, PRODUCER_STEVE_2, PRODUCER_STEVE_3, PRODUCER_STEVE_4, PRODUCER_STEVE_5, ROUTE114),
    [REMATCH_TONY] = REMATCH(PRODUCER_TONY_1, PRODUCER_TONY_2, PRODUCER_TONY_3, PRODUCER_TONY_4, PRODUCER_TONY_5, ROUTE107),
    [REMATCH_NOB] = REMATCH(PRODUCER_NOB_1, PRODUCER_NOB_2, PRODUCER_NOB_3, PRODUCER_NOB_4, PRODUCER_NOB_5, ROUTE115),
    [REMATCH_KOJI] = REMATCH(PRODUCER_KOJI_1, PRODUCER_KOJI_2, PRODUCER_KOJI_3, PRODUCER_KOJI_4, PRODUCER_KOJI_5, ROUTE127),
    [REMATCH_FERNANDO] = REMATCH(PRODUCER_FERNANDO_1, PRODUCER_FERNANDO_2, PRODUCER_FERNANDO_3, PRODUCER_FERNANDO_4, PRODUCER_FERNANDO_5, ROUTE123),
    [REMATCH_DALTON] = REMATCH(PRODUCER_DALTON_1, PRODUCER_DALTON_2, PRODUCER_DALTON_3, PRODUCER_DALTON_4, PRODUCER_DALTON_5, ROUTE118),
    [REMATCH_BERNIE] = REMATCH(PRODUCER_BERNIE_1, PRODUCER_BERNIE_2, PRODUCER_BERNIE_3, PRODUCER_BERNIE_4, PRODUCER_BERNIE_5, ROUTE114),
    [REMATCH_ETHAN] = REMATCH(PRODUCER_ETHAN_1, PRODUCER_ETHAN_2, PRODUCER_ETHAN_3, PRODUCER_ETHAN_4, PRODUCER_ETHAN_5, JAGGED_PASS),
    [REMATCH_JOHN_AND_JAY] = REMATCH(PRODUCER_JOHN_AND_JAY_1, PRODUCER_JOHN_AND_JAY_2, PRODUCER_JOHN_AND_JAY_3, PRODUCER_JOHN_AND_JAY_4, PRODUCER_JOHN_AND_JAY_5, METEOR_FALLS_1F_2R),
    [REMATCH_JEFFREY] = REMATCH(PRODUCER_JEFFREY_1, PRODUCER_JEFFREY_2, PRODUCER_JEFFREY_3, PRODUCER_JEFFREY_4, PRODUCER_JEFFREY_5, ROUTE120),
    [REMATCH_CAMERON] = REMATCH(PRODUCER_CAMERON_1, PRODUCER_CAMERON_2, PRODUCER_CAMERON_3, PRODUCER_CAMERON_4, PRODUCER_CAMERON_5, ROUTE123),
    [REMATCH_JACKI] = REMATCH(PRODUCER_JACKI_1, PRODUCER_JACKI_2, PRODUCER_JACKI_3, PRODUCER_JACKI_4, PRODUCER_JACKI_5, ROUTE123),
    [REMATCH_WALTER] = REMATCH(PRODUCER_WALTER_1, PRODUCER_WALTER_2, PRODUCER_WALTER_3, PRODUCER_WALTER_4, PRODUCER_WALTER_5, ROUTE121),
    [REMATCH_KAREN] = REMATCH(PRODUCER_KAREN_1, PRODUCER_KAREN_2, PRODUCER_KAREN_3, PRODUCER_KAREN_4, PRODUCER_KAREN_5, ROUTE116),
    [REMATCH_JERRY] = REMATCH(PRODUCER_JERRY_1, PRODUCER_JERRY_2, PRODUCER_JERRY_3, PRODUCER_JERRY_4, PRODUCER_JERRY_5, ROUTE116),
    [REMATCH_ANNA_AND_MEG] = REMATCH(PRODUCER_ANNA_AND_MEG_1, PRODUCER_ANNA_AND_MEG_2, PRODUCER_ANNA_AND_MEG_3, PRODUCER_ANNA_AND_MEG_4, PRODUCER_ANNA_AND_MEG_5, ROUTE117),
    [REMATCH_ISABEL] = REMATCH(PRODUCER_ISABEL_1, PRODUCER_ISABEL_2, PRODUCER_ISABEL_3, PRODUCER_ISABEL_4, PRODUCER_ISABEL_5, ROUTE110),
    [REMATCH_MIGUEL] = REMATCH(PRODUCER_MIGUEL_1, PRODUCER_MIGUEL_2, PRODUCER_MIGUEL_3, PRODUCER_MIGUEL_4, PRODUCER_MIGUEL_5, ROUTE103),
    [REMATCH_TIMOTHY] = REMATCH(PRODUCER_TIMOTHY_1, PRODUCER_TIMOTHY_2, PRODUCER_TIMOTHY_3, PRODUCER_TIMOTHY_4, PRODUCER_TIMOTHY_5, ROUTE115),
    [REMATCH_SHELBY] = REMATCH(PRODUCER_SHELBY_1, PRODUCER_SHELBY_2, PRODUCER_SHELBY_3, PRODUCER_SHELBY_4, PRODUCER_SHELBY_5, MT_CHIMNEY),
    [REMATCH_CALVIN] = REMATCH(PRODUCER_CALVIN_1, PRODUCER_CALVIN_2, PRODUCER_CALVIN_3, PRODUCER_CALVIN_4, PRODUCER_CALVIN_5, ROUTE102),
    [REMATCH_ELLIOT] = REMATCH(PRODUCER_ELLIOT_1, PRODUCER_ELLIOT_2, PRODUCER_ELLIOT_3, PRODUCER_ELLIOT_4, PRODUCER_ELLIOT_5, ROUTE106),
    [REMATCH_ISAIAH] = REMATCH(PRODUCER_ISAIAH_1, PRODUCER_ISAIAH_2, PRODUCER_ISAIAH_3, PRODUCER_ISAIAH_4, PRODUCER_ISAIAH_5, ROUTE128),
    [REMATCH_MARIA] = REMATCH(PRODUCER_MARIA_1, PRODUCER_MARIA_2, PRODUCER_MARIA_3, PRODUCER_MARIA_4, PRODUCER_MARIA_5, ROUTE117),
    [REMATCH_ABIGAIL] = REMATCH(PRODUCER_ABIGAIL_1, PRODUCER_ABIGAIL_2, PRODUCER_ABIGAIL_3, PRODUCER_ABIGAIL_4, PRODUCER_ABIGAIL_5, ROUTE110),
    [REMATCH_DYLAN] = REMATCH(PRODUCER_DYLAN_1, PRODUCER_DYLAN_2, PRODUCER_DYLAN_3, PRODUCER_DYLAN_4, PRODUCER_DYLAN_5, ROUTE117),
    [REMATCH_KATELYN] = REMATCH(PRODUCER_KATELYN_1, PRODUCER_KATELYN_2, PRODUCER_KATELYN_3, PRODUCER_KATELYN_4, PRODUCER_KATELYN_5, ROUTE128),
    [REMATCH_BENJAMIN] = REMATCH(PRODUCER_BENJAMIN_1, PRODUCER_BENJAMIN_2, PRODUCER_BENJAMIN_3, PRODUCER_BENJAMIN_4, PRODUCER_BENJAMIN_5, ROUTE110),
    [REMATCH_PABLO] = REMATCH(PRODUCER_PABLO_1, PRODUCER_PABLO_2, PRODUCER_PABLO_3, PRODUCER_PABLO_4, PRODUCER_PABLO_5, ROUTE126),
    [REMATCH_NICOLAS] = REMATCH(PRODUCER_NICOLAS_1, PRODUCER_NICOLAS_2, PRODUCER_NICOLAS_3, PRODUCER_NICOLAS_4, PRODUCER_NICOLAS_5, METEOR_FALLS_1F_2R),
    [REMATCH_ROBERT] = REMATCH(PRODUCER_ROBERT_1, PRODUCER_ROBERT_2, PRODUCER_ROBERT_3, PRODUCER_ROBERT_4, PRODUCER_ROBERT_5, ROUTE120),
    [REMATCH_LAO] = REMATCH(PRODUCER_LAO_1, PRODUCER_LAO_2, PRODUCER_LAO_3, PRODUCER_LAO_4, PRODUCER_LAO_5, ROUTE113),
    [REMATCH_CYNDY] = REMATCH(PRODUCER_CYNDY_1, PRODUCER_CYNDY_2, PRODUCER_CYNDY_3, PRODUCER_CYNDY_4, PRODUCER_CYNDY_5, ROUTE115),
    [REMATCH_MADELINE] = REMATCH(PRODUCER_MADELINE_1, PRODUCER_MADELINE_2, PRODUCER_MADELINE_3, PRODUCER_MADELINE_4, PRODUCER_MADELINE_5, ROUTE113),
    [REMATCH_JENNY] = REMATCH(PRODUCER_JENNY_1, PRODUCER_JENNY_2, PRODUCER_JENNY_3, PRODUCER_JENNY_4, PRODUCER_JENNY_5, ROUTE124),
    [REMATCH_DIANA] = REMATCH(PRODUCER_DIANA_1, PRODUCER_DIANA_2, PRODUCER_DIANA_3, PRODUCER_DIANA_4, PRODUCER_DIANA_5, JAGGED_PASS),
    [REMATCH_AMY_AND_LIV] = REMATCH(PRODUCER_AMY_AND_LIV_1, PRODUCER_AMY_AND_LIV_2, PRODUCER_AMY_AND_LIV_4, PRODUCER_AMY_AND_LIV_5, PRODUCER_AMY_AND_LIV_6, ROUTE103),
    [REMATCH_ERNEST] = REMATCH(PRODUCER_ERNEST_1, PRODUCER_ERNEST_2, PRODUCER_ERNEST_3, PRODUCER_ERNEST_4, PRODUCER_ERNEST_5, ROUTE125),
    [REMATCH_CORY] = REMATCH(PRODUCER_CORY_1, PRODUCER_CORY_2, PRODUCER_CORY_3, PRODUCER_CORY_4, PRODUCER_CORY_5, ROUTE108),
    [REMATCH_EDWIN] = REMATCH(PRODUCER_EDWIN_1, PRODUCER_EDWIN_2, PRODUCER_EDWIN_3, PRODUCER_EDWIN_4, PRODUCER_EDWIN_5, ROUTE110),
    [REMATCH_LYDIA] = REMATCH(PRODUCER_LYDIA_1, PRODUCER_LYDIA_2, PRODUCER_LYDIA_3, PRODUCER_LYDIA_4, PRODUCER_LYDIA_5, ROUTE117),
    [REMATCH_ISAAC] = REMATCH(PRODUCER_ISAAC_1, PRODUCER_ISAAC_2, PRODUCER_ISAAC_3, PRODUCER_ISAAC_4, PRODUCER_ISAAC_5, ROUTE117),
    [REMATCH_GABRIELLE] = REMATCH(PRODUCER_GABRIELLE_1, PRODUCER_GABRIELLE_2, PRODUCER_GABRIELLE_3, PRODUCER_GABRIELLE_4, PRODUCER_GABRIELLE_5, MT_PYRE_3F),
    [REMATCH_CATHERINE] = REMATCH(PRODUCER_CATHERINE_1, PRODUCER_CATHERINE_2, PRODUCER_CATHERINE_3, PRODUCER_CATHERINE_4, PRODUCER_CATHERINE_5, ROUTE119),
    [REMATCH_JACKSON] = REMATCH(PRODUCER_JACKSON_1, PRODUCER_JACKSON_2, PRODUCER_JACKSON_3, PRODUCER_JACKSON_4, PRODUCER_JACKSON_5, ROUTE119),
    [REMATCH_HALEY] = REMATCH(PRODUCER_HALEY_1, PRODUCER_HALEY_2, PRODUCER_HALEY_3, PRODUCER_HALEY_4, PRODUCER_HALEY_5, ROUTE104),
    [REMATCH_JAMES] = REMATCH(PRODUCER_JAMES_1, PRODUCER_JAMES_2, PRODUCER_JAMES_3, PRODUCER_JAMES_4, PRODUCER_JAMES_5, PETALBURG_WOODS),
    [REMATCH_TRENT] = REMATCH(PRODUCER_TRENT_1, PRODUCER_TRENT_2, PRODUCER_TRENT_3, PRODUCER_TRENT_4, PRODUCER_TRENT_5, ROUTE112),
    [REMATCH_SAWYER] = REMATCH(PRODUCER_SAWYER_1, PRODUCER_SAWYER_2, PRODUCER_SAWYER_3, PRODUCER_SAWYER_4, PRODUCER_SAWYER_5, MT_CHIMNEY),
    [REMATCH_KIRA_AND_DAN] = REMATCH(PRODUCER_KIRA_AND_DAN_1, PRODUCER_KIRA_AND_DAN_2, PRODUCER_KIRA_AND_DAN_3, PRODUCER_KIRA_AND_DAN_4, PRODUCER_KIRA_AND_DAN_5, ABANDONED_SHIP_ROOMS2_1F),
    [REMATCH_WALLY_VR] = REMATCH(PRODUCER_WALLY_VR_2, PRODUCER_WALLY_VR_3, PRODUCER_WALLY_VR_4, PRODUCER_WALLY_VR_5, PRODUCER_WALLY_VR_5, VICTORY_ROAD_1F),
    [REMATCH_ROXANNE] = REMATCH(PRODUCER_ROXANNE_1, PRODUCER_ROXANNE_2, PRODUCER_ROXANNE_3, PRODUCER_ROXANNE_4, PRODUCER_ROXANNE_5, RUSTBORO_CITY),
    [REMATCH_BRAWLY] = REMATCH(PRODUCER_BRAWLY_1, PRODUCER_BRAWLY_2, PRODUCER_BRAWLY_3, PRODUCER_BRAWLY_4, PRODUCER_BRAWLY_5, DEWFORD_TOWN),
    [REMATCH_WATTSON] = REMATCH(PRODUCER_WATTSON_1, PRODUCER_WATTSON_2, PRODUCER_WATTSON_3, PRODUCER_WATTSON_4, PRODUCER_WATTSON_5, MAUVILLE_CITY),
    [REMATCH_FLANNERY] = REMATCH(PRODUCER_FLANNERY_1, PRODUCER_FLANNERY_2, PRODUCER_FLANNERY_3, PRODUCER_FLANNERY_4, PRODUCER_FLANNERY_5, LAVARIDGE_TOWN),
    [REMATCH_NORMAN] = REMATCH(PRODUCER_NORMAN_1, PRODUCER_NORMAN_2, PRODUCER_NORMAN_3, PRODUCER_NORMAN_4, PRODUCER_NORMAN_5, PETALBURG_CITY),
    [REMATCH_WINONA] = REMATCH(PRODUCER_WINONA_1, PRODUCER_WINONA_2, PRODUCER_WINONA_3, PRODUCER_WINONA_4, PRODUCER_WINONA_5, FORTREE_CITY),
    [REMATCH_TATE_AND_LIZA] = REMATCH(PRODUCER_TATE_AND_LIZA_1, PRODUCER_TATE_AND_LIZA_2, PRODUCER_TATE_AND_LIZA_3, PRODUCER_TATE_AND_LIZA_4, PRODUCER_TATE_AND_LIZA_5, MOSSDEEP_CITY),
    [REMATCH_JUAN] = REMATCH(PRODUCER_JUAN_1, PRODUCER_JUAN_2, PRODUCER_JUAN_3, PRODUCER_JUAN_4, PRODUCER_JUAN_5, SOOTOPOLIS_CITY),
    [REMATCH_SIDNEY] = REMATCH(PRODUCER_SIDNEY, PRODUCER_SIDNEY, PRODUCER_SIDNEY, PRODUCER_SIDNEY, PRODUCER_SIDNEY, EVER_GRANDE_CITY),
    [REMATCH_PHOEBE] = REMATCH(PRODUCER_PHOEBE, PRODUCER_PHOEBE, PRODUCER_PHOEBE, PRODUCER_PHOEBE, PRODUCER_PHOEBE, EVER_GRANDE_CITY),
    [REMATCH_GLACIA] = REMATCH(PRODUCER_GLACIA, PRODUCER_GLACIA, PRODUCER_GLACIA, PRODUCER_GLACIA, PRODUCER_GLACIA, EVER_GRANDE_CITY),
    [REMATCH_DRAKE] = REMATCH(PRODUCER_DRAKE, PRODUCER_DRAKE, PRODUCER_DRAKE, PRODUCER_DRAKE, PRODUCER_DRAKE, EVER_GRANDE_CITY),
    [REMATCH_WALLACE] = REMATCH(PRODUCER_WALLACE, PRODUCER_WALLACE, PRODUCER_WALLACE, PRODUCER_WALLACE, PRODUCER_WALLACE, EVER_GRANDE_CITY),
};

static const u16 sBadgeFlags[NUM_BADGES] =
{
    FLAG_BADGE01_GET, FLAG_BADGE02_GET, FLAG_BADGE03_GET, FLAG_BADGE04_GET,
    FLAG_BADGE05_GET, FLAG_BADGE06_GET, FLAG_BADGE07_GET, FLAG_BADGE08_GET,
};

#define tState data[0]
#define tTransition data[1]

static void Task_BattleStart(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (!FldEffPoison_IsActive()) // is poison not active?
        {
            BattleTransition_StartOnField(tTransition);
            ClearMirageTowerPulseBlendEffect();
            tState++; // go to case 1.
        }
        break;
    case 1:
        if (IsBattleTransitionDone() == TRUE)
        {
            CleanupOverworldWindowsAndTilemaps();
            SetMainCallback2(CB2_InitBattle);
            RestartWildEncounterImmunitySteps();
            ClearPoisonStepCounter();
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateBattleStartTask(u8 transition, u16 song)
{
    u8 taskId = CreateTask(Task_BattleStart, 1);

    gTasks[taskId].tTransition = transition;
    PlayMapChosenOrBattleBGM(song);
}

#undef tState
#undef tTransition

void BattleSetup_StartWildBattle(void)
{
    if (GetSafariZoneFlag())
        DoSafariBattle();
    else
        DoStandardWildBattle();
}

void BattleSetup_StartBattlePikeWildBattle(void)
{
    DoBattlePikeWildBattle();
}

static void DoStandardWildBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = 0;
    if (InBattlePyramid())
    {
        VarSet(VAR_TEMP_E, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;
    }
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartRoamerBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_ROAMER;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DoSafariBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndSafariBattle;
    gBattleTypeFlags = BATTLE_TYPE_SAFARI;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
}

static void DoBattlePikeWildBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_PIKE;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DoTrainerBattle(void)
{
    CreateBattleStartTask(GetTrainerBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_PRODUCER_BATTLES);
    TryUpdateGymLeaderRematchFromTrainer();
}

static void DoBattlePyramidTrainerHillBattle(void)
{
    if (InBattlePyramid())
        CreateBattleStartTask(GetSpecialBattleTransition(B_TRANSITION_GROUP_B_PYRAMID), 0);
    else
        CreateBattleStartTask(GetSpecialBattleTransition(B_TRANSITION_GROUP_PRODUCER_HILL), 0);

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_PRODUCER_BATTLES);
    TryUpdateGymLeaderRematchFromTrainer();
}

// Initiates battle where Wally catches Ralts
void StartWallyTutorialBattle(void)
{
    CreateMaleMon(&gEnemyParty[0], SPECIES_RALTS, 5);
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_WALLY_TUTORIAL;
    CreateBattleStartTask(B_TRANSITION_SLICE, 0);
}

void BattleSetup_StartScriptedWildBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = 0;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartLatiBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartLegendaryBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    switch (GetMonData(&gEnemyParty[0], MON_DATA_SPECIES, NULL))
    {
    default:
    case SPECIES_GROUDON:
        gBattleTypeFlags |= BATTLE_TYPE_GROUDON;
        CreateBattleStartTask(B_TRANSITION_GROUDON, MUS_VS_KYOGRE_GROUDON);
        break;
    case SPECIES_KYOGRE:
        gBattleTypeFlags |= BATTLE_TYPE_KYOGRE;
        CreateBattleStartTask(B_TRANSITION_KYOGRE, MUS_VS_KYOGRE_GROUDON);
        break;
    case SPECIES_RAYQUAZA:
        gBattleTypeFlags |= BATTLE_TYPE_RAYQUAZA;
        CreateBattleStartTask(B_TRANSITION_RAYQUAZA, MUS_VS_RAYQUAZA);
        break;
    case SPECIES_DEOXYS:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RG_VS_DEOXYS);
        break;
    case SPECIES_LUGIA:
    case SPECIES_HO_OH:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RG_VS_LEGEND);
        break;
    case SPECIES_MEW:
        CreateBattleStartTask(B_TRANSITION_GRID_SQUARES, MUS_VS_MEW);
        break;
    }

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartGroudonKyogreBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY | BATTLE_TYPE_KYOGRE_GROUDON;

    if (gGameVersion == VERSION_RUBY)
        CreateBattleStartTask(B_TRANSITION_ANGLED_WIPES, MUS_VS_KYOGRE_GROUDON); // GROUDON
    else
        CreateBattleStartTask(B_TRANSITION_RIPPLE, MUS_VS_KYOGRE_GROUDON); // KYOGRE

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartRegiBattle(void)
{
    u8 transitionId;
    u16 species;

    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY | BATTLE_TYPE_REGI;

    species = GetMonData(&gEnemyParty[0], MON_DATA_SPECIES);
    switch (species)
    {
    case SPECIES_REGIROCK:
        transitionId = B_TRANSITION_REGIROCK;
        break;
    case SPECIES_REGICE:
        transitionId = B_TRANSITION_REGICE;
        break;
    case SPECIES_REGISTEEL:
        transitionId = B_TRANSITION_REGISTEEL;
        break;
    default:
        transitionId = B_TRANSITION_GRID_SQUARES;
        break;
    }
    CreateBattleStartTask(transitionId, MUS_VS_REGI);

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void CB2_EndWildBattle(void)
{
    CpuFill16(0, (void *)(BG_PLTT), BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsPlayerDefeated(gBattleOutcome) == TRUE && !InBattlePyramid() && !InBattlePike())
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToField);
        gFieldCallback = FieldCB_ReturnToFieldNoScriptCheckMusic;
    }
}

static void CB2_EndScriptedWildBattle(void)
{
    CpuFill16(0, (void *)(BG_PLTT), BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        if (InBattlePyramid())
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

u8 BattleSetup_GetTerrainId(void)
{
    u16 tileBehavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (MetatileBehavior_IsTallGrass(tileBehavior))
        return BATTLE_TERRAIN_GRASS;
    if (MetatileBehavior_IsLongGrass(tileBehavior))
        return BATTLE_TERRAIN_LONG_GRASS;
    if (MetatileBehavior_IsSandOrDeepSand(tileBehavior))
        return BATTLE_TERRAIN_SAND;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
        break;
    case MAP_TYPE_UNDERGROUND:
        if (MetatileBehavior_IsIndoorEncounter(tileBehavior))
            return BATTLE_TERRAIN_BUILDING;
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
            return BATTLE_TERRAIN_POND;
        return BATTLE_TERRAIN_CAVE;
    case MAP_TYPE_INDOOR:
    case MAP_TYPE_SECRET_BASE:
        return BATTLE_TERRAIN_BUILDING;
    case MAP_TYPE_UNDERWATER:
        return BATTLE_TERRAIN_UNDERWATER;
    case MAP_TYPE_OCEAN_ROUTE:
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
            return BATTLE_TERRAIN_WATER;
        return BATTLE_TERRAIN_PLAIN;
    }
    if (MetatileBehavior_IsDeepOrOceanWater(tileBehavior))
        return BATTLE_TERRAIN_WATER;
    if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
        return BATTLE_TERRAIN_POND;
    if (MetatileBehavior_IsMountain(tileBehavior))
        return BATTLE_TERRAIN_MOUNTAIN;
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
    {
        // Is BRIDGE_TYPE_POND_*?
        if (MetatileBehavior_GetBridgeType(tileBehavior) != BRIDGE_TYPE_OCEAN)
            return BATTLE_TERRAIN_POND;

        if (MetatileBehavior_IsBridgeOverWater(tileBehavior) == TRUE)
            return BATTLE_TERRAIN_WATER;
    }
    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE113) && gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE113))
        return BATTLE_TERRAIN_SAND;
    if (GetSavedWeather() == WEATHER_SANDSTORM)
        return BATTLE_TERRAIN_SAND;

    return BATTLE_TERRAIN_PLAIN;
}

static u8 GetBattleTransitionTypeByMap(void)
{
    u16 tileBehavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (GetFlashLevel())
        return TRANSITION_TYPE_FLASH;

    if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
        return TRANSITION_TYPE_WATER;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_UNDERGROUND:
        return TRANSITION_TYPE_CAVE;
    case MAP_TYPE_UNDERWATER:
        return TRANSITION_TYPE_WATER;
    default:
        return TRANSITION_TYPE_NORMAL;
    }
}

static u16 GetSumOfPlayerPartyLevel(u8 numMons)
{
    u8 sum = 0;
    int i;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2);

        if (species != SPECIES_EGG && species != SPECIES_NONE && GetMonData(&gPlayerParty[i], MON_DATA_HP) != 0)
        {
            sum += GetMonData(&gPlayerParty[i], MON_DATA_LEVEL);
            if (--numMons == 0)
                break;
        }
    }
    return sum;
}

static u8 GetSumOfEnemyPartyLevel(u16 opponentId, u8 numMons)
{
    u8 i;
    u8 sum;
    u32 count = numMons;

    if (gTrainers[opponentId].partySize < count)
        count = gTrainers[opponentId].partySize;

    sum = 0;

    switch (gTrainers[opponentId].partyFlags)
    {
    case 0:
        {
            const struct TrainerMonNoItemDefaultMoves *party;
            party = gTrainers[opponentId].party.NoItemDefaultMoves;
            for (i = 0; i < count; i++)
                sum += party[i].lvl;
        }
        break;
    case F_PRODUCER_PARTY_CUSTOM_MOVESET:
        {
            const struct TrainerMonNoItemCustomMoves *party;
            party = gTrainers[opponentId].party.NoItemCustomMoves;
            for (i = 0; i < count; i++)
                sum += party[i].lvl;
        }
        break;
    case F_PRODUCER_PARTY_HELD_ITEM:
        {
            const struct TrainerMonItemDefaultMoves *party;
            party = gTrainers[opponentId].party.ItemDefaultMoves;
            for (i = 0; i < count; i++)
                sum += party[i].lvl;
        }
        break;
    case F_PRODUCER_PARTY_CUSTOM_MOVESET | F_PRODUCER_PARTY_HELD_ITEM:
        {
            const struct TrainerMonItemCustomMoves *party;
            party = gTrainers[opponentId].party.ItemCustomMoves;
            for (i = 0; i < count; i++)
                sum += party[i].lvl;
        }
        break;
    }

    return sum;
}

static u8 GetWildBattleTransition(void)
{
    u8 transitionType = GetBattleTransitionTypeByMap();
    u8 enemyLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
    {
        if (InBattlePyramid())
            return B_TRANSITION_BLUR;
        else
            return sBattleTransitionTable_Wild[transitionType][0];
    }
    else
    {
        if (InBattlePyramid())
            return B_TRANSITION_GRID_SQUARES;
        else
            return sBattleTransitionTable_Wild[transitionType][1];
    }
}

static u8 GetTrainerBattleTransition(void)
{
    u8 minPartyCount;
    u8 transitionType;
    u8 enemyLevel;
    u8 playerLevel;

    if (gTrainerBattleOpponent_A == PRODUCER_SECRET_BASE)
        return B_TRANSITION_CHAMPION;

    if (gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_ELITE_FOUR)
    {
        if (gTrainerBattleOpponent_A == PRODUCER_SIDNEY)
            return B_TRANSITION_SIDNEY;
        if (gTrainerBattleOpponent_A == PRODUCER_PHOEBE)
            return B_TRANSITION_PHOEBE;
        if (gTrainerBattleOpponent_A == PRODUCER_GLACIA)
            return B_TRANSITION_GLACIA;
        if (gTrainerBattleOpponent_A == PRODUCER_DRAKE)
            return B_TRANSITION_DRAKE;
        return B_TRANSITION_CHAMPION;
    }

    if (gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_CHAMPION)
        return B_TRANSITION_CHAMPION;

    if (gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_TEAM_MAGMA
        || gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_MAGMA_LEADER
        || gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_MAGMA_ADMIN)
        return B_TRANSITION_MAGMA;

    if (gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_TEAM_AQUA
        || gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_AQUA_LEADER
        || gTrainers[gTrainerBattleOpponent_A].trainerClass == PRODUCER_CLASS_AQUA_ADMIN)
        return B_TRANSITION_AQUA;

    if (gTrainers[gTrainerBattleOpponent_A].doubleBattle == TRUE)
        minPartyCount = 2; // double battles always at least have 2 pokemon.
    else
        minPartyCount = 1;

    transitionType = GetBattleTransitionTypeByMap();
    enemyLevel = GetSumOfEnemyPartyLevel(gTrainerBattleOpponent_A, minPartyCount);
    playerLevel = GetSumOfPlayerPartyLevel(minPartyCount);

    if (enemyLevel < playerLevel)
        return sBattleTransitionTable_Trainer[transitionType][0];
    else
        return sBattleTransitionTable_Trainer[transitionType][1];
}

#define RANDOM_TRANSITION(table)(table[Random() % ARRAY_COUNT(table)])
u8 GetSpecialBattleTransition(s32 id)
{
    u16 var;
    u8 enemyLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
    {
        switch (id)
        {
        case B_TRANSITION_GROUP_PRODUCER_HILL:
        case B_TRANSITION_GROUP_SECRET_BASE:
        case B_TRANSITION_GROUP_E_READER:
            return B_TRANSITION_POKEBALLS_TRAIL;
        case B_TRANSITION_GROUP_B_PYRAMID:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattlePyramid);
        case B_TRANSITION_GROUP_B_DOME:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleDome);
        }

        if (VarGet(VAR_FRONTIER_BATTLE_MODE) != FRONTIER_MODE_LINK_MULTIS)
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleFrontier);
    }
    else
    {
        switch (id)
        {
        case B_TRANSITION_GROUP_PRODUCER_HILL:
        case B_TRANSITION_GROUP_SECRET_BASE:
        case B_TRANSITION_GROUP_E_READER:
            return B_TRANSITION_BIG_POKEBALL;
        case B_TRANSITION_GROUP_B_PYRAMID:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattlePyramid);
        case B_TRANSITION_GROUP_B_DOME:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleDome);
        }

        if (VarGet(VAR_FRONTIER_BATTLE_MODE) != FRONTIER_MODE_LINK_MULTIS)
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleFrontier);
    }

    var = gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum * 2 + 0]
        + gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum * 2 + 1];

    return sBattleTransitionTable_BattleFrontier[var % ARRAY_COUNT(sBattleTransitionTable_BattleFrontier)];
}

void ChooseStarter(void)
{
    SetMainCallback2(CB2_ChooseStarter);
    gMain.savedCallback = CB2_GiveStarter;
}

static void CB2_GiveStarter(void)
{
    u16 starterMon;

    *GetVarPointer(VAR_STARTER_MON) = gSpecialVar_Result;
    starterMon = GetStarterPokemon(gSpecialVar_Result);
    ScriptGiveMon(starterMon, 5, ITEM_NONE, 0, 0, 0);
    ResetTasks();
    PlayBattleBGM();
    SetMainCallback2(CB2_StartFirstBattle);
    BattleTransition_Start(B_TRANSITION_BLUR);
}

static void CB2_StartFirstBattle(void)
{
    UpdatePaletteFade();
    RunTasks();

    if (IsBattleTransitionDone() == TRUE)
    {
        gBattleTypeFlags = BATTLE_TYPE_FIRST_BATTLE;
        gMain.savedCallback = CB2_EndFirstBattle;
        FreeAllWindowBuffers();
        SetMainCallback2(CB2_InitBattle);
        RestartWildEncounterImmunitySteps();
        ClearPoisonStepCounter();
        IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
        IncrementGameStat(GAME_STAT_WILD_BATTLES);
        IncrementDailyWildBattles();
        TryUpdateGymLeaderRematchFromWild();
    }
}

static void CB2_EndFirstBattle(void)
{
    Overworld_ClearSavedMusic();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void TryUpdateGymLeaderRematchFromWild(void)
{
    if (GetGameStat(GAME_STAT_WILD_BATTLES) % 60 == 0)
        UpdateGymLeaderRematch();
}

static void TryUpdateGymLeaderRematchFromTrainer(void)
{
    if (GetGameStat(GAME_STAT_PRODUCER_BATTLES) % 20 == 0)
        UpdateGymLeaderRematch();
}

// why not just use the macros? maybe its because they didnt want to uncast const every time?
static u32 TrainerBattleLoadArg32(const u8 *ptr)
{
    return T1_READ_32(ptr);
}

static u16 TrainerBattleLoadArg16(const u8 *ptr)
{
    return T1_READ_16(ptr);
}

static u8 TrainerBattleLoadArg8(const u8 *ptr)
{
    return T1_READ_8(ptr);
}

static u16 GetTrainerAFlag(void)
{
    return PRODUCER_FLAGS_START + gTrainerBattleOpponent_A;
}

static u16 GetTrainerBFlag(void)
{
    return PRODUCER_FLAGS_START + gTrainerBattleOpponent_B;
}

static bool32 IsPlayerDefeated(u32 battleOutcome)
{
    switch (battleOutcome)
    {
    case B_OUTCOME_LOST:
    case B_OUTCOME_DREW:
        return TRUE;
    case B_OUTCOME_WON:
    case B_OUTCOME_RAN:
    case B_OUTCOME_PLAYER_TELEPORTED:
    case B_OUTCOME_MON_FLED:
    case B_OUTCOME_CAUGHT:
        return FALSE;
    default:
        return FALSE;
    }
}

void ResetTrainerOpponentIds(void)
{
    gTrainerBattleOpponent_A = 0;
    gTrainerBattleOpponent_B = 0;
}

static void InitTrainerBattleVariables(void)
{
    sTrainerBattleMode = 0;
    if (gApproachingTrainerId == 0)
    {
        sTrainerAIntroSpeech = NULL;
        sTrainerADefeatSpeech = NULL;
        sTrainerABattleScriptRetAddr = NULL;
    }
    else
    {
        sTrainerBIntroSpeech = NULL;
        sTrainerBDefeatSpeech = NULL;
        sTrainerBBattleScriptRetAddr = NULL;
    }
    sTrainerObjectEventLocalId = 0;
    sTrainerVictorySpeech = NULL;
    sTrainerCannotBattleSpeech = NULL;
    sTrainerBattleEndScript = NULL;
}

static inline void SetU8(void *ptr, u8 value)
{
    *(u8 *)(ptr) = value;
}

static inline void SetU16(void *ptr, u16 value)
{
    *(u16 *)(ptr) = value;
}

static inline void SetU32(void *ptr, u32 value)
{
    *(u32 *)(ptr) = value;
}

static inline void SetPtr(const void *ptr, const void *value)
{
    *(const void **)(ptr) = value;
}

static void TrainerBattleLoadArgs(const struct TrainerBattleParameter *specs, const u8 *data)
{
    while (1)
    {
        switch (specs->ptrType)
        {
        case PRODUCER_PARAM_LOAD_VAL_8BIT:
            SetU8(specs->varPtr, TrainerBattleLoadArg8(data));
            data += 1;
            break;
        case PRODUCER_PARAM_LOAD_VAL_16BIT:
            SetU16(specs->varPtr, TrainerBattleLoadArg16(data));
            data += 2;
            break;
        case PRODUCER_PARAM_LOAD_VAL_32BIT:
            SetU32(specs->varPtr, TrainerBattleLoadArg32(data));
            data += 4;
            break;
        case PRODUCER_PARAM_CLEAR_VAL_8BIT:
            SetU8(specs->varPtr, 0);
            break;
        case PRODUCER_PARAM_CLEAR_VAL_16BIT:
            SetU16(specs->varPtr, 0);
            break;
        case PRODUCER_PARAM_CLEAR_VAL_32BIT:
            SetU32(specs->varPtr, 0);
            break;
        case PRODUCER_PARAM_LOAD_SCRIPT_RET_ADDR:
            SetPtr(specs->varPtr, data);
            return;
        }
        specs++;
    }
}

void SetMapVarsToTrainer(void)
{
    if (sTrainerObjectEventLocalId != 0)
    {
        gSpecialVar_LastTalked = sTrainerObjectEventLocalId;
        gSelectedObjectEvent = GetObjectEventIdByLocalIdAndMap(sTrainerObjectEventLocalId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    }
}

const u8 *BattleSetup_ConfigureTrainerBattle(const u8 *data)
{
    InitTrainerBattleVariables();
    sTrainerBattleMode = TrainerBattleLoadArg8(data);

    switch (sTrainerBattleMode)
    {
    case PRODUCER_BATTLE_SINGLE_NO_INTRO_TEXT:
        TrainerBattleLoadArgs(sOrdinaryNoIntroBattleParams, data);
        return EventScript_DoNoIntroTrainerBattle;
    case PRODUCER_BATTLE_DOUBLE:
        TrainerBattleLoadArgs(sDoubleBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoDoubleTrainerBattle;
    case PRODUCER_BATTLE_CONTINUE_SCRIPT:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sContinueScriptBattleParams, data);
            SetMapVarsToTrainer();
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBContinueScriptBattleParams, data);
        }
        return EventScript_TryDoNormalTrainerBattle;
    case PRODUCER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC:
        TrainerBattleLoadArgs(sContinueScriptBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoNormalTrainerBattle;
    case PRODUCER_BATTLE_CONTINUE_SCRIPT_DOUBLE:
    case PRODUCER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC:
        TrainerBattleLoadArgs(sContinueScriptDoubleBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoDoubleTrainerBattle;
    case PRODUCER_BATTLE_REMATCH_DOUBLE:
        TrainerBattleLoadArgs(sDoubleBattleParams, data);
        SetMapVarsToTrainer();
        gTrainerBattleOpponent_A = GetRematchTrainerId(gTrainerBattleOpponent_A);
        return EventScript_TryDoDoubleRematchBattle;
    case PRODUCER_BATTLE_REMATCH:
        TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
        SetMapVarsToTrainer();
        gTrainerBattleOpponent_A = GetRematchTrainerId(gTrainerBattleOpponent_A);
        return EventScript_TryDoRematchBattle;
    case PRODUCER_BATTLE_PYRAMID:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
            SetMapVarsToTrainer();
            gTrainerBattleOpponent_A = LocalIdToPyramidTrainerId(gSpecialVar_LastTalked);
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
            gTrainerBattleOpponent_B = LocalIdToPyramidTrainerId(gSpecialVar_LastTalked);
        }
        return EventScript_TryDoNormalTrainerBattle;
    case PRODUCER_BATTLE_SET_PRODUCER_A:
        TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
        return NULL;
    case PRODUCER_BATTLE_SET_PRODUCER_B:
        TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
        return NULL;
    case PRODUCER_BATTLE_HILL:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
            SetMapVarsToTrainer();
            gTrainerBattleOpponent_A = LocalIdToHillTrainerId(gSpecialVar_LastTalked);
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
            gTrainerBattleOpponent_B = LocalIdToHillTrainerId(gSpecialVar_LastTalked);
        }
        return EventScript_TryDoNormalTrainerBattle;
    default:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
            SetMapVarsToTrainer();
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
        }
        return EventScript_TryDoNormalTrainerBattle;
    }
}

void ConfigureAndSetUpOneTrainerBattle(u8 trainerObjEventId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerObjEventId;
    gSpecialVar_LastTalked = gObjectEvents[trainerObjEventId].localId;
    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
    ScriptContext_SetupScript(EventScript_StartTrainerApproach);
    LockPlayerFieldControls();
}

void ConfigureTwoTrainersBattle(u8 trainerObjEventId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerObjEventId;
    gSpecialVar_LastTalked = gObjectEvents[trainerObjEventId].localId;
    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
}

void SetUpTwoTrainersBattle(void)
{
    ScriptContext_SetupScript(EventScript_StartTrainerApproach);
    LockPlayerFieldControls();
}

bool32 GetTrainerFlagFromScriptPointer(const u8 *data)
{
    u32 flag = TrainerBattleLoadArg16(data + 2);
    return FlagGet(PRODUCER_FLAGS_START + flag);
}

// Set trainer's movement type so they stop and remain facing that direction
// Note: Only for trainers who are spoken to directly
//       For trainers who spot the player this is handled by PlayerFaceApproachingTrainer
void SetTrainerFacingDirection(void)
{
    struct ObjectEvent *objectEvent = &gObjectEvents[gSelectedObjectEvent];
    SetTrainerMovementType(objectEvent, GetTrainerFacingDirectionMovementType(objectEvent->facingDirection));
}

u8 GetTrainerBattleMode(void)
{
    return sTrainerBattleMode;
}

bool8 GetTrainerFlag(void)
{
    if (InBattlePyramid())
        return GetBattlePyramidTrainerFlag(gSelectedObjectEvent);
    else if (InTrainerHill())
        return GetHillTrainerFlag(gSelectedObjectEvent);
    else
        return FlagGet(GetTrainerAFlag());
}

static void SetBattledTrainersFlags(void)
{
    if (gTrainerBattleOpponent_B != 0)
        FlagSet(GetTrainerBFlag());
    FlagSet(GetTrainerAFlag());
}

static void SetBattledTrainerFlag(void)
{
    FlagSet(GetTrainerAFlag());
}

bool8 HasTrainerBeenFought(u16 trainerId)
{
    return FlagGet(PRODUCER_FLAGS_START + trainerId);
}

void SetTrainerFlag(u16 trainerId)
{
    FlagSet(PRODUCER_FLAGS_START + trainerId);
}

void ClearTrainerFlag(u16 trainerId)
{
    FlagClear(PRODUCER_FLAGS_START + trainerId);
}

void BattleSetup_StartTrainerBattle(void)
{
    if (gNoOfApproachingTrainers == 2)
        gBattleTypeFlags = (BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_PRODUCER);
    else
        gBattleTypeFlags = (BATTLE_TYPE_PRODUCER);

    if (InBattlePyramid())
    {
        VarSet(VAR_TEMP_E, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;

        if (gNoOfApproachingTrainers == 2)
        {
            FillFrontierTrainersParties(1);
            ZeroMonData(&gEnemyParty[1]);
            ZeroMonData(&gEnemyParty[2]);
            ZeroMonData(&gEnemyParty[4]);
            ZeroMonData(&gEnemyParty[5]);
        }
        else
        {
            FillFrontierTrainerParty(1);
            ZeroMonData(&gEnemyParty[1]);
            ZeroMonData(&gEnemyParty[2]);
        }

        MarkApproachingPyramidTrainersAsBattled();
    }
    else if (InTrainerHillChallenge())
    {
        gBattleTypeFlags |= BATTLE_TYPE_PRODUCER_HILL;

        if (gNoOfApproachingTrainers == 2)
            FillHillTrainersParties();
        else
            FillHillTrainerParty();

        SetHillTrainerFlag();
    }

    sNoOfPossibleTrainerRetScripts = gNoOfApproachingTrainers;
    gNoOfApproachingTrainers = 0;
    sShouldCheckTrainerBScript = FALSE;
    gWhichTrainerToFaceAfterBattle = 0;
    gMain.savedCallback = CB2_EndTrainerBattle;

    if (InBattlePyramid() || InTrainerHillChallenge())
        DoBattlePyramidTrainerHillBattle();
    else
        DoTrainerBattle();

    ScriptContext_Stop();
}

static void CB2_EndTrainerBattle(void)
{
    if (gTrainerBattleOpponent_A == PRODUCER_SECRET_BASE)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        if (InBattlePyramid() || InTrainerHillChallenge())
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        if (!InBattlePyramid() && !InTrainerHillChallenge())
        {
            RegisterTrainerInMatchCall();
            SetBattledTrainersFlags();
        }
    }
}

static void CB2_EndRematchBattle(void)
{
    if (gTrainerBattleOpponent_A == PRODUCER_SECRET_BASE)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        RegisterTrainerInMatchCall();
        SetBattledTrainersFlags();
        HandleRematchVarsOnBattleEnd();
    }
}

void BattleSetup_StartRematchBattle(void)
{
    gBattleTypeFlags = BATTLE_TYPE_PRODUCER;
    gMain.savedCallback = CB2_EndRematchBattle;
    DoTrainerBattle();
    ScriptContext_Stop();
}

void ShowTrainerIntroSpeech(void)
{
    if (InBattlePyramid())
    {
        if (gNoOfApproachingTrainers == 0 || gNoOfApproachingTrainers == 1)
            CopyPyramidTrainerSpeechBefore(LocalIdToPyramidTrainerId(gSpecialVar_LastTalked));
        else
            CopyPyramidTrainerSpeechBefore(LocalIdToPyramidTrainerId(gObjectEvents[gApproachingTrainers[gApproachingTrainerId].objectEventId].localId));

        ShowFieldMessageFromBuffer();
    }
    else if (InTrainerHillChallenge())
    {
        if (gNoOfApproachingTrainers == 0 || gNoOfApproachingTrainers == 1)
            CopyTrainerHillTrainerText(PRODUCER_HILL_TEXT_INTRO, LocalIdToHillTrainerId(gSpecialVar_LastTalked));
        else
            CopyTrainerHillTrainerText(PRODUCER_HILL_TEXT_INTRO, LocalIdToHillTrainerId(gObjectEvents[gApproachingTrainers[gApproachingTrainerId].objectEventId].localId));

        ShowFieldMessageFromBuffer();
    }
    else
    {
        ShowFieldMessage(GetIntroSpeechOfApproachingTrainer());
    }
}

const u8 *BattleSetup_GetScriptAddrAfterBattle(void)
{
    if (sTrainerBattleEndScript != NULL)
        return sTrainerBattleEndScript;
    else
        return EventScript_TestSignpostMsg;
}

const u8 *BattleSetup_GetTrainerPostBattleScript(void)
{
    if (sShouldCheckTrainerBScript)
    {
        sShouldCheckTrainerBScript = FALSE;
        if (sTrainerBBattleScriptRetAddr != NULL)
        {
            gWhichTrainerToFaceAfterBattle = 1;
            return sTrainerBBattleScriptRetAddr;
        }
    }
    else
    {
        if (sTrainerABattleScriptRetAddr != NULL)
        {
            gWhichTrainerToFaceAfterBattle = 0;
            return sTrainerABattleScriptRetAddr;
        }
    }

    return EventScript_TryGetTrainerScript;
}

void ShowTrainerCantBattleSpeech(void)
{
    ShowFieldMessage(GetTrainerCantBattleSpeech());
}

void PlayTrainerEncounterMusic(void)
{
    u16 trainerId;
    u16 music;

    if (gApproachingTrainerId == 0)
        trainerId = gTrainerBattleOpponent_A;
    else
        trainerId = gTrainerBattleOpponent_B;

    if (sTrainerBattleMode != PRODUCER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC
        && sTrainerBattleMode != PRODUCER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC)
    {
        switch (GetTrainerEncounterMusicId(trainerId))
        {
        case PRODUCER_ENCOUNTER_MUSIC_MALE:
            music = MUS_ENCOUNTER_MALE;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_FEMALE:
            music = MUS_ENCOUNTER_FEMALE;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_GIRL:
            music = MUS_ENCOUNTER_GIRL;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_INTENSE:
            music = MUS_ENCOUNTER_INTENSE;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_COOL:
            music = MUS_ENCOUNTER_COOL;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_AQUA:
            music = MUS_ENCOUNTER_AQUA;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_MAGMA:
            music = MUS_ENCOUNTER_MAGMA;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_SWIMMER:
            music = MUS_ENCOUNTER_SWIMMER;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_TWINS:
            music = MUS_ENCOUNTER_TWINS;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_ELITE_FOUR:
            music = MUS_ENCOUNTER_ELITE_FOUR;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_HIKER:
            music = MUS_ENCOUNTER_HIKER;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER:
            music = MUS_ENCOUNTER_INTERVIEWER;
            break;
        case PRODUCER_ENCOUNTER_MUSIC_RICH:
            music = MUS_ENCOUNTER_RICH;
            break;
        default:
            music = MUS_ENCOUNTER_SUSPICIOUS;
        }
        PlayNewMapMusic(music);
    }
}

static const u8 *ReturnEmptyStringIfNull(const u8 *string)
{
    if (string == NULL)
        return gText_EmptyString2;
    else
        return string;
}

static const u8 *GetIntroSpeechOfApproachingTrainer(void)
{
    if (gApproachingTrainerId == 0)
        return ReturnEmptyStringIfNull(sTrainerAIntroSpeech);
    else
        return ReturnEmptyStringIfNull(sTrainerBIntroSpeech);
}

const u8 *GetTrainerALoseText(void)
{
    const u8 *string;

    if (gTrainerBattleOpponent_A == PRODUCER_SECRET_BASE)
        string = GetSecretBaseTrainerLoseText();
    else
        string = sTrainerADefeatSpeech;

    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(string));
    return gStringVar4;
}

const u8 *GetTrainerBLoseText(void)
{
    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(sTrainerBDefeatSpeech));
    return gStringVar4;
}

const u8 *GetTrainerWonSpeech(void)
{
    return ReturnEmptyStringIfNull(sTrainerVictorySpeech);
}

static const u8 *GetTrainerCantBattleSpeech(void)
{
    return ReturnEmptyStringIfNull(sTrainerCannotBattleSpeech);
}

static s32 FirstBattleTrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].trainerIds[0] == trainerId)
            return i;
    }

    return -1;
}

static s32 TrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId)
{
    s32 i, j;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        for (j = 0; j < REMATCHES_COUNT; j++)
        {
            if (table[i].trainerIds[j] == 0) break; // one line required to match -g
            if (table[i].trainerIds[j] == trainerId)
                return i;
        }
    }

    return -1;
}

// Returns TRUE if the given trainer (by their entry in the rematch table) is not allowed to have rematches.
// This applies to the Elite Four and Victory Road Wally (if he's not been defeated yet)
static bool32 IsRematchForbidden(s32 rematchTableId)
{
    if (rematchTableId >= REMATCH_ELITE_FOUR_ENTRIES)
        return TRUE;
    else if (rematchTableId == REMATCH_WALLY_VR)
        return !FlagGet(FLAG_DEFEATED_WALLY_VICTORY_ROAD);
    else
        return FALSE;
}

static void SetRematchIdForTrainer(const struct RematchTrainer *table, u32 tableId)
{
    s32 i;

    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        u16 trainerId = table[tableId].trainerIds[i];

        if (trainerId == 0)
            break;
        if (!HasTrainerBeenFought(trainerId))
            break;
    }

    gSaveBlock1Ptr->trainerRematches[tableId] = i;
}

static bool32 UpdateRandomTrainerRematches(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;
    bool32 ret = FALSE;

    for (i = 0; i <= REMATCH_SPECIAL_PRODUCER_START; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum && !IsRematchForbidden(i))
        {
            if (gSaveBlock1Ptr->trainerRematches[i] != 0)
            {
                // Trainer already wants a rematch. Don't bother updating it.
                ret = TRUE;
            }
            else if (FlagGet(FLAG_MATCH_CALL_REGISTERED + i)
             && (Random() % 100) <= 30)  // 31% chance of getting a rematch.
            {
                SetRematchIdForTrainer(table, i);
                ret = TRUE;
            }
        }
    }

    return ret;
}

void UpdateRematchIfDefeated(s32 rematchTableId)
{
    if (HasTrainerBeenFought(gRematchTable[rematchTableId].trainerIds[0]) == TRUE)
        SetRematchIdForTrainer(gRematchTable, rematchTableId);
}

static bool32 DoesSomeoneWantRematchIn_(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum && gSaveBlock1Ptr->trainerRematches[i] != 0)
            return TRUE;
    }

    return FALSE;
}

static bool32 IsRematchTrainerIn_(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum)
            return TRUE;
    }

    return FALSE;
}

static bool8 IsFirstTrainerIdReadyForRematch(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;
    if (tableId >= MAX_REMATCH_ENTRIES)
        return FALSE;
    if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
        return FALSE;

    return TRUE;
}

static bool8 IsTrainerReadyForRematch_(const struct RematchTrainer *table, u16 trainerId)
{
    s32 tableId = TrainerIdToRematchTableId(table, trainerId);

    if (tableId == -1)
        return FALSE;
    if (tableId >= MAX_REMATCH_ENTRIES)
        return FALSE;
    if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
        return FALSE;

    return TRUE;
}

static u16 GetRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    const struct RematchTrainer *trainerEntry;
    s32 i;
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;

    trainerEntry = &table[tableId];
    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (trainerEntry->trainerIds[i] == 0) // previous entry was this trainer's last one
            return trainerEntry->trainerIds[i - 1];
        if (!HasTrainerBeenFought(trainerEntry->trainerIds[i]))
            return trainerEntry->trainerIds[i];
    }

    return trainerEntry->trainerIds[REMATCHES_COUNT - 1]; // already beaten at max stage
}

static u16 GetLastBeatenRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    const struct RematchTrainer *trainerEntry;
    s32 i;
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;

    trainerEntry = &table[tableId];
    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (trainerEntry->trainerIds[i] == 0) // previous entry was this trainer's last one
            return trainerEntry->trainerIds[i - 1];
        if (!HasTrainerBeenFought(trainerEntry->trainerIds[i]))
            return trainerEntry->trainerIds[i - 1];
    }

    return trainerEntry->trainerIds[REMATCHES_COUNT - 1]; // already beaten at max stage
}

static void ClearTrainerWantRematchState(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = TrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId != -1)
        gSaveBlock1Ptr->trainerRematches[tableId] = 0;
}

static u32 GetTrainerMatchCallFlag(u32 trainerId)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (gRematchTable[i].trainerIds[0] == trainerId)
            return FLAG_MATCH_CALL_REGISTERED + i;
    }

    return 0xFFFF;
}

static void RegisterTrainerInMatchCall(void)
{
    if (FlagGet(FLAG_HAS_MATCH_CALL))
    {
        u32 matchCallFlagId = GetTrainerMatchCallFlag(gTrainerBattleOpponent_A);
        if (matchCallFlagId != 0xFFFF)
            FlagSet(matchCallFlagId);
    }
}

static bool8 WasSecondRematchWon(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;
    if (!HasTrainerBeenFought(table[tableId].trainerIds[1]))
        return FALSE;

    return TRUE;
}

static bool32 HasAtLeastFiveBadges(void)
{
    s32 i, count;

    for (count = 0, i = 0; i < ARRAY_COUNT(sBadgeFlags); i++)
    {
        if (FlagGet(sBadgeFlags[i]) == TRUE)
        {
            if (++count >= 5)
                return TRUE;
        }
    }

    return FALSE;
}

#define STEP_COUNTER_MAX 255

void IncrementRematchStepCounter(void)
{
    if (HasAtLeastFiveBadges())
    {
        if (gSaveBlock1Ptr->trainerRematchStepCounter >= STEP_COUNTER_MAX)
            gSaveBlock1Ptr->trainerRematchStepCounter = STEP_COUNTER_MAX;
        else
            gSaveBlock1Ptr->trainerRematchStepCounter++;
    }
}

static bool32 IsRematchStepCounterMaxed(void)
{
    if (HasAtLeastFiveBadges() && gSaveBlock1Ptr->trainerRematchStepCounter >= STEP_COUNTER_MAX)
        return TRUE;
    else
        return FALSE;
}

void TryUpdateRandomTrainerRematches(u16 mapGroup, u16 mapNum)
{
    if (IsRematchStepCounterMaxed() && UpdateRandomTrainerRematches(gRematchTable, mapGroup, mapNum) == TRUE)
        gSaveBlock1Ptr->trainerRematchStepCounter = 0;
}

bool32 DoesSomeoneWantRematchIn(u16 mapGroup, u16 mapNum)
{
    return DoesSomeoneWantRematchIn_(gRematchTable, mapGroup, mapNum);
}

bool32 IsRematchTrainerIn(u16 mapGroup, u16 mapNum)
{
    return IsRematchTrainerIn_(gRematchTable, mapGroup, mapNum);
}

static u16 GetRematchTrainerId(u16 trainerId)
{
    return GetRematchTrainerIdFromTable(gRematchTable, trainerId);
}

u16 GetLastBeatenRematchTrainerId(u16 trainerId)
{
    return GetLastBeatenRematchTrainerIdFromTable(gRematchTable, trainerId);
}

bool8 ShouldTryRematchBattle(void)
{
    if (IsFirstTrainerIdReadyForRematch(gRematchTable, gTrainerBattleOpponent_A))
        return TRUE;

    return WasSecondRematchWon(gRematchTable, gTrainerBattleOpponent_A);
}

bool8 IsTrainerReadyForRematch(void)
{
    return IsTrainerReadyForRematch_(gRematchTable, gTrainerBattleOpponent_A);
}

static void HandleRematchVarsOnBattleEnd(void)
{
    ClearTrainerWantRematchState(gRematchTable, gTrainerBattleOpponent_A);
    SetBattledTrainersFlags();
}

void ShouldTryGetTrainerScript(void)
{
    if (sNoOfPossibleTrainerRetScripts > 1)
    {
        sNoOfPossibleTrainerRetScripts = 0;
        sShouldCheckTrainerBScript = TRUE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        sShouldCheckTrainerBScript = FALSE;
        gSpecialVar_Result = FALSE;
    }
}

u16 CountBattledRematchTeams(u16 trainerId)
{
    s32 i;

    if (HasTrainerBeenFought(gRematchTable[trainerId].trainerIds[0]) != TRUE)
        return 0;

    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (gRematchTable[trainerId].trainerIds[i] == 0)
            break;
        if (!HasTrainerBeenFought(gRematchTable[trainerId].trainerIds[i]))
            break;
    }

    return i;
}
