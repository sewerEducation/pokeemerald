const struct Trainer gTrainers[] = {
    [PRODUCER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = PRODUCER_CLASS_PKMN_PRODUCER_1,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
    },

    [PRODUCER_SAWYER_1] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer1),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout1),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout2),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_3] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout3),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout4),
    },

    [PRODUCER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern1),
    },

    [PRODUCER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern2),
    },

    [PRODUCER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern3),
    },

    [PRODUCER_GABRIELLE_1] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle1),
    },

    [PRODUCER_GRUNT_PETALBURG_WOODS] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntPetalburgWoods),
    },

    [PRODUCER_MARCEL] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("MARCEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marcel),
    },

    [PRODUCER_ALBERTO] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ALBERTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alberto),
    },

    [PRODUCER_ED] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("ED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ed),
    },

    [PRODUCER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern4),
    },

    [PRODUCER_DECLAN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DECLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Declan),
    },

    [PRODUCER_GRUNT_RUSTURF_TUNNEL] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntRusturfTunnel),
    },

    [PRODUCER_GRUNT_WEATHER_INST_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst1),
    },

    [PRODUCER_GRUNT_WEATHER_INST_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst2),
    },

    [PRODUCER_GRUNT_WEATHER_INST_3] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst3),
    },

    [PRODUCER_GRUNT_MUSEUM_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMuseum1),
    },

    [PRODUCER_GRUNT_MUSEUM_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMuseum2),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter1),
    },

    [PRODUCER_GRUNT_MT_PYRE_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre1),
    },

    [PRODUCER_GRUNT_MT_PYRE_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre2),
    },

    [PRODUCER_GRUNT_MT_PYRE_3] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre3),
    },

    [PRODUCER_GRUNT_WEATHER_INST_4] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst4),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_5] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout5),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_6] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout6),
    },

    [PRODUCER_FREDRICK] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("FREDRICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fredrick),
    },

    [PRODUCER_MATT] =
    {
        .trainerClass = PRODUCER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_ADMIN_M,
        .trainerName = _("MATT"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Matt),
    },

    [PRODUCER_ZANDER] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("ZANDER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zander),
    },

    [PRODUCER_SHELLY_WEATHER_INSTITUTE] =
    {
        .trainerClass = PRODUCER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_ADMIN_F,
        .trainerName = _("SHELLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ShellyWeatherInstitute),
    },

    [PRODUCER_SHELLY_SEAFLOOR_CAVERN] =
    {
        .trainerClass = PRODUCER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_ADMIN_F,
        .trainerName = _("SHELLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ShellySeafloorCavern),
    },

    [PRODUCER_ARCHIE] =
    {
        .trainerClass = PRODUCER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("ARCHIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Archie),
    },

    [PRODUCER_LEAH] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("LEAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leah),
    },

    [PRODUCER_DAISY] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("DAISY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daisy),
    },

    [PRODUCER_ROSE_1] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose1),
    },

    [PRODUCER_FELIX] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("FELIX"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Felix),
    },

    [PRODUCER_VIOLET] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("VIOLET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Violet),
    },

    [PRODUCER_ROSE_2] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose2),
    },

    [PRODUCER_ROSE_3] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose3),
    },

    [PRODUCER_ROSE_4] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose4),
    },

    [PRODUCER_ROSE_5] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose5),
    },

    [PRODUCER_DUSTY_1] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty1),
    },

    [PRODUCER_CHIP] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("CHIP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Chip),
    },

    [PRODUCER_FOSTER] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("FOSTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Foster),
    },

    [PRODUCER_DUSTY_2] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty2),
    },

    [PRODUCER_DUSTY_3] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty3),
    },

    [PRODUCER_DUSTY_4] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty4),
    },

    [PRODUCER_DUSTY_5] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty5),
    },

    [PRODUCER_GABBY_AND_TY_1] =
    {
        .trainerClass = PRODUCER_CLASS_INTERVIEWER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = PRODUCER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy1),
    },

    [PRODUCER_GABBY_AND_TY_2] =
    {
        .trainerClass = PRODUCER_CLASS_INTERVIEWER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = PRODUCER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy2),
    },

    [PRODUCER_GABBY_AND_TY_3] =
    {
        .trainerClass = PRODUCER_CLASS_INTERVIEWER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = PRODUCER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy3),
    },

    [PRODUCER_GABBY_AND_TY_4] =
    {
        .trainerClass = PRODUCER_CLASS_INTERVIEWER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = PRODUCER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy4),
    },

    [PRODUCER_GABBY_AND_TY_5] =
    {
        .trainerClass = PRODUCER_CLASS_INTERVIEWER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = PRODUCER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy5),
    },

    [PRODUCER_GABBY_AND_TY_6] =
    {
        .trainerClass = PRODUCER_CLASS_INTERVIEWER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = PRODUCER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_GabbyAndTy6),
    },

    [PRODUCER_LOLA_1] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola1),
    },

    [PRODUCER_AUSTINA] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("AUSTINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Austina),
    },

    [PRODUCER_GWEN] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("GWEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gwen),
    },

    [PRODUCER_LOLA_2] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola2),
    },

    [PRODUCER_LOLA_3] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola3),
    },

    [PRODUCER_LOLA_4] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola4),
    },

    [PRODUCER_LOLA_5] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola5),
    },

    [PRODUCER_RICKY_1] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky1),
    },

    [PRODUCER_SIMON] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("SIMON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon),
    },

    [PRODUCER_CHARLIE] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("CHARLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charlie),
    },

    [PRODUCER_RICKY_2] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky2),
    },

    [PRODUCER_RICKY_3] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky3),
    },

    [PRODUCER_RICKY_4] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky4),
    },

    [PRODUCER_RICKY_5] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky5),
    },

    [PRODUCER_RANDALL] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("RANDALL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Randall),
    },

    [PRODUCER_PARKER] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("PARKER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Parker),
    },

    [PRODUCER_GEORGE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("GEORGE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_George),
    },

    [PRODUCER_BERKE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("BERKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Berke),
    },

    [PRODUCER_BRAXTON] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("BRAXTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Braxton),
    },

    [PRODUCER_VINCENT] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("VINCENT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vincent),
    },

    [PRODUCER_LEROY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("LEROY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leroy),
    },

    [PRODUCER_WILTON_1] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton1),
    },

    [PRODUCER_EDGAR] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("EDGAR"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edgar),
    },

    [PRODUCER_ALBERT] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("ALBERT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Albert),
    },

    [PRODUCER_SAMUEL] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("SAMUEL"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samuel),
    },

    [PRODUCER_VITO] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("VITO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vito),
    },

    [PRODUCER_OWEN] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("OWEN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Owen),
    },

    [PRODUCER_WILTON_2] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton2),
    },

    [PRODUCER_WILTON_3] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton3),
    },

    [PRODUCER_WILTON_4] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton4),
    },

    [PRODUCER_WILTON_5] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton5),
    },

    [PRODUCER_WARREN] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("WARREN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren),
    },

    [PRODUCER_MARY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("MARY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Mary),
    },

    [PRODUCER_ALEXIA] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("ALEXIA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Alexia),
    },

    [PRODUCER_JODY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("JODY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES(sParty_Jody),
    },

    [PRODUCER_WENDY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("WENDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Wendy),
    },

    [PRODUCER_KEIRA] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("KEIRA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Keira),
    },

    [PRODUCER_BROOKE_1] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke1),
    },

    [PRODUCER_JENNIFER] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("JENNIFER"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jennifer),
    },

    [PRODUCER_HOPE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("HOPE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hope),
    },

    [PRODUCER_SHANNON] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("SHANNON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shannon),
    },

    [PRODUCER_MICHELLE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("MICHELLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Michelle),
    },

    [PRODUCER_CAROLINE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CAROLINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Caroline),
    },

    [PRODUCER_JULIE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("JULIE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julie),
    },

    [PRODUCER_BROOKE_2] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke2),
    },

    [PRODUCER_BROOKE_3] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke3),
    },

    [PRODUCER_BROOKE_4] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke4),
    },

    [PRODUCER_BROOKE_5] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke5),
    },

    [PRODUCER_PATRICIA] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("PATRICIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Patricia),
    },

    [PRODUCER_KINDRA] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("KINDRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kindra),
    },

    [PRODUCER_TAMMY] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("TAMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tammy),
    },

    [PRODUCER_VALERIE_1] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie1),
    },

    [PRODUCER_TASHA] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("TASHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tasha),
    },

    [PRODUCER_VALERIE_2] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie2),
    },

    [PRODUCER_VALERIE_3] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie3),
    },

    [PRODUCER_VALERIE_4] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie4),
    },

    [PRODUCER_VALERIE_5] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie5),
    },

    [PRODUCER_CINDY_1] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy1),
    },

    [PRODUCER_DAPHNE] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("DAPHNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Daphne),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter2),
    },

    [PRODUCER_CINDY_2] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Cindy2),
    },

    [PRODUCER_BRIANNA] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("BRIANNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Brianna),
    },

    [PRODUCER_NAOMI] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("NAOMI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Naomi),
    },

    [PRODUCER_CINDY_3] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy3),
    },

    [PRODUCER_CINDY_4] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy4),
    },

    [PRODUCER_CINDY_5] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy5),
    },

    [PRODUCER_CINDY_6] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Cindy6),
    },

    [PRODUCER_MELISSA] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("MELISSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Melissa),
    },

    [PRODUCER_SHEILA] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("SHEILA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sheila),
    },

    [PRODUCER_SHIRLEY] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("SHIRLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shirley),
    },

    [PRODUCER_JESSICA_1] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica1),
    },

    [PRODUCER_CONNIE] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("CONNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Connie),
    },

    [PRODUCER_BRIDGET] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("BRIDGET"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bridget),
    },

    [PRODUCER_OLIVIA] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("OLIVIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Olivia),
    },

    [PRODUCER_TIFFANY] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("TIFFANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tiffany),
    },

    [PRODUCER_JESSICA_2] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica2),
    },

    [PRODUCER_JESSICA_3] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica3),
    },

    [PRODUCER_JESSICA_4] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica4),
    },

    [PRODUCER_JESSICA_5] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica5),
    },

    [PRODUCER_WINSTON_1] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston1),
    },

    [PRODUCER_MOLLIE] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("MOLLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mollie),
    },

    [PRODUCER_GARRET] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("GARRET"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Garret),
    },

    [PRODUCER_WINSTON_2] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston2),
    },

    [PRODUCER_WINSTON_3] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston3),
    },

    [PRODUCER_WINSTON_4] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston4),
    },

    [PRODUCER_WINSTON_5] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Winston5),
    },

    [PRODUCER_STEVE_1] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve1),
    },

    [PRODUCER_THALIA_1] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia1),
    },

    [PRODUCER_MARK] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("MARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mark),
    },

    [PRODUCER_GRUNT_MT_CHIMNEY_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtChimney1),
    },

    [PRODUCER_STEVE_2] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve2),
    },

    [PRODUCER_STEVE_3] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve3),
    },

    [PRODUCER_STEVE_4] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve4),
    },

    [PRODUCER_STEVE_5] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve5),
    },

    [PRODUCER_LUIS] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("LUIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Luis),
    },

    [PRODUCER_DOMINIK] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DOMINIK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dominik),
    },

    [PRODUCER_DOUGLAS] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DOUGLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Douglas),
    },

    [PRODUCER_DARRIN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DARRIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darrin),
    },

    [PRODUCER_TONY_1] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony1),
    },

    [PRODUCER_JEROME] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("JEROME"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerome),
    },

    [PRODUCER_MATTHEW] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("MATTHEW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Matthew),
    },

    [PRODUCER_DAVID] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_David),
    },

    [PRODUCER_SPENCER] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("SPENCER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spencer),
    },

    [PRODUCER_ROLAND] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("ROLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roland),
    },

    [PRODUCER_NOLEN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("NOLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nolen),
    },

    [PRODUCER_STAN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("STAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stan),
    },

    [PRODUCER_BARRY] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("BARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barry),
    },

    [PRODUCER_DEAN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DEAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dean),
    },

    [PRODUCER_RODNEY] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("RODNEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rodney),
    },

    [PRODUCER_RICHARD] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("RICHARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Richard),
    },

    [PRODUCER_HERMAN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("HERMAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Herman),
    },

    [PRODUCER_SANTIAGO] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("SANTIAGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Santiago),
    },

    [PRODUCER_GILBERT] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("GILBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gilbert),
    },

    [PRODUCER_FRANKLIN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("FRANKLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Franklin),
    },

    [PRODUCER_KEVIN] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("KEVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kevin),
    },

    [PRODUCER_JACK] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("JACK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jack),
    },

    [PRODUCER_DUDLEY] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("DUDLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dudley),
    },

    [PRODUCER_CHAD] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("CHAD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chad),
    },

    [PRODUCER_TONY_2] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony2),
    },

    [PRODUCER_TONY_3] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony3),
    },

    [PRODUCER_TONY_4] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony4),
    },

    [PRODUCER_TONY_5] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony5),
    },

    [PRODUCER_TAKAO] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("TAKAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Takao),
    },

    [PRODUCER_HITOSHI] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("HITOSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hitoshi),
    },

    [PRODUCER_KIYO] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KIYO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kiyo),
    },

    [PRODUCER_KOICHI] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KOICHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koichi),
    },

    [PRODUCER_NOB_1] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob1),
    },

    [PRODUCER_NOB_2] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob2),
    },

    [PRODUCER_NOB_3] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob3),
    },

    [PRODUCER_NOB_4] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob4),
    },

    [PRODUCER_NOB_5] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Nob5),
    },

    [PRODUCER_YUJI] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("YUJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Yuji),
    },

    [PRODUCER_DAISUKE] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("DAISUKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daisuke),
    },

    [PRODUCER_ATSUSHI] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("ATSUSHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Atsushi),
    },

    [PRODUCER_KIRK] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("KIRK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Kirk),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_7] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout7),
    },

    [PRODUCER_GRUNT_AQUA_HIDEOUT_8] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout8),
    },

    [PRODUCER_SHAWN] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("SHAWN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shawn),
    },

    [PRODUCER_FERNANDO_1] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando1),
    },

    [PRODUCER_DALTON_1] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton1),
    },

    [PRODUCER_DALTON_2] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton2),
    },

    [PRODUCER_DALTON_3] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton3),
    },

    [PRODUCER_DALTON_4] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton4),
    },

    [PRODUCER_DALTON_5] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton5),
    },

    [PRODUCER_COLE] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("COLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cole),
    },

    [PRODUCER_JEFF] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("JEFF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeff),
    },

    [PRODUCER_AXLE] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("AXLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Axle),
    },

    [PRODUCER_JACE] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("JACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jace),
    },

    [PRODUCER_KEEGAN] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("KEEGAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Keegan),
    },

    [PRODUCER_BERNIE_1] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie1),
    },

    [PRODUCER_BERNIE_2] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie2),
    },

    [PRODUCER_BERNIE_3] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie3),
    },

    [PRODUCER_BERNIE_4] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie4),
    },

    [PRODUCER_BERNIE_5] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie5),
    },

    [PRODUCER_DREW] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("DREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Drew),
    },

    [PRODUCER_BEAU] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("BEAU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Beau),
    },

    [PRODUCER_LARRY] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("LARRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Larry),
    },

    [PRODUCER_SHANE] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("SHANE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane),
    },

    [PRODUCER_JUSTIN] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("JUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Justin),
    },

    [PRODUCER_ETHAN_1] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan1),
    },

    [PRODUCER_AUTUMN] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("AUTUMN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Autumn),
    },

    [PRODUCER_TRAVIS] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Travis),
    },

    [PRODUCER_ETHAN_2] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan2),
    },

    [PRODUCER_ETHAN_3] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan3),
    },

    [PRODUCER_ETHAN_4] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan4),
    },

    [PRODUCER_ETHAN_5] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan5),
    },

    [PRODUCER_BRENT] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("BRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent),
    },

    [PRODUCER_DONALD] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("DONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Donald),
    },

    [PRODUCER_TAYLOR] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("TAYLOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Taylor),
    },

    [PRODUCER_JEFFREY_1] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey1),
    },

    [PRODUCER_DEREK] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("DEREK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Derek),
    },

    [PRODUCER_JEFFREY_2] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey2),
    },

    [PRODUCER_JEFFREY_3] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey3),
    },

    [PRODUCER_JEFFREY_4] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey4),
    },

    [PRODUCER_JEFFREY_5] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Jeffrey5),
    },

    [PRODUCER_EDWARD] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Edward),
    },

    [PRODUCER_PRESTON] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("PRESTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Preston),
    },

    [PRODUCER_VIRGIL] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("VIRGIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Virgil),
    },

    [PRODUCER_BLAKE] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("BLAKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Blake),
    },

    [PRODUCER_WILLIAM] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("WILLIAM"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_William),
    },

    [PRODUCER_JOSHUA] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("JOSHUA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joshua),
    },

    [PRODUCER_CAMERON_1] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron1),
    },

    [PRODUCER_CAMERON_2] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron2),
    },

    [PRODUCER_CAMERON_3] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron3),
    },

    [PRODUCER_CAMERON_4] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron4),
    },

    [PRODUCER_CAMERON_5] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron5),
    },

    [PRODUCER_JACLYN] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("JACLYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jaclyn),
    },

    [PRODUCER_HANNAH] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("HANNAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hannah),
    },

    [PRODUCER_SAMANTHA] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("SAMANTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samantha),
    },

    [PRODUCER_MAURA] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("MAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maura),
    },

    [PRODUCER_KAYLA] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("KAYLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kayla),
    },

    [PRODUCER_ALEXIS] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("ALEXIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alexis),
    },

    [PRODUCER_JACKI_1] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki1),
    },

    [PRODUCER_JACKI_2] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki2),
    },

    [PRODUCER_JACKI_3] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki3),
    },

    [PRODUCER_JACKI_4] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki4),
    },

    [PRODUCER_JACKI_5] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki5),
    },

    [PRODUCER_WALTER_1] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walter1),
    },

    [PRODUCER_MICAH] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("MICAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Micah),
    },

    [PRODUCER_THOMAS] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("THOMAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thomas),
    },

    [PRODUCER_WALTER_2] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walter2),
    },

    [PRODUCER_WALTER_3] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Walter3),
    },

    [PRODUCER_WALTER_4] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Walter4),
    },

    [PRODUCER_WALTER_5] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Walter5),
    },

    [PRODUCER_SIDNEY] =
    {
        .trainerClass = PRODUCER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = PRODUCER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("SIDNEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES(sParty_Sidney),
    },

    [PRODUCER_PHOEBE] =
    {
        .trainerClass = PRODUCER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = PRODUCER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("PHOEBE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Phoebe),
    },

    [PRODUCER_GLACIA] =
    {
        .trainerClass = PRODUCER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = PRODUCER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("GLACIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Glacia),
    },

    [PRODUCER_DRAKE] =
    {
        .trainerClass = PRODUCER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = PRODUCER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("DRAKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Drake),
    },

    [PRODUCER_ROXANNE_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne1),
    },

    [PRODUCER_BRAWLY_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly1),
    },

    [PRODUCER_WATTSON_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson1),
    },

    [PRODUCER_FLANNERY_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery1),
    },

    [PRODUCER_NORMAN_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman1),
    },

    [PRODUCER_WINONA_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona1),
    },

    [PRODUCER_TATE_AND_LIZA_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza1),
    },

    [PRODUCER_JUAN_1] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan1),
    },

    [PRODUCER_JERRY_1] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry1),
    },

    [PRODUCER_TED] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("TED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ted),
    },

    [PRODUCER_PAUL] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("PAUL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paul),
    },

    [PRODUCER_JERRY_2] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry2),
    },

    [PRODUCER_JERRY_3] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry3),
    },

    [PRODUCER_JERRY_4] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry4),
    },

    [PRODUCER_JERRY_5] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry5),
    },

    [PRODUCER_KAREN_1] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen1),
    },

    [PRODUCER_GEORGIA] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_F,
        .trainerName = _("GEORGIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Georgia),
    },

    [PRODUCER_KAREN_2] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen2),
    },

    [PRODUCER_KAREN_3] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen3),
    },

    [PRODUCER_KAREN_4] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen4),
    },

    [PRODUCER_KAREN_5] =
    {
        .trainerClass = PRODUCER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen5),
    },

    [PRODUCER_KATE_AND_JOY] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("KATE & JOY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_KateAndJoy),
    },

    [PRODUCER_ANNA_AND_MEG_1] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg1),
    },

    [PRODUCER_ANNA_AND_MEG_2] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg2),
    },

    [PRODUCER_ANNA_AND_MEG_3] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg3),
    },

    [PRODUCER_ANNA_AND_MEG_4] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg4),
    },

    [PRODUCER_ANNA_AND_MEG_5] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg5),
    },

    [PRODUCER_VICTOR] =
    {
        .trainerClass = PRODUCER_CLASS_WINSTRATE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("VICTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Victor),
    },

    [PRODUCER_MIGUEL_1] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel1),
    },

    [PRODUCER_COLTON] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("COLTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Colton),
    },

    [PRODUCER_MIGUEL_2] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel2),
    },

    [PRODUCER_MIGUEL_3] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel3),
    },

    [PRODUCER_MIGUEL_4] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel4),
    },

    [PRODUCER_MIGUEL_5] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel5),
    },

    [PRODUCER_VICTORIA] =
    {
        .trainerClass = PRODUCER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("VICTORIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = ITEM_DEFAULT_MOVES(sParty_Victoria),
    },

    [PRODUCER_VANESSA] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("VANESSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Vanessa),
    },

    [PRODUCER_BETHANY] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("BETHANY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Bethany),
    },

    [PRODUCER_ISABEL_1] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel1),
    },

    [PRODUCER_ISABEL_2] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel2),
    },

    [PRODUCER_ISABEL_3] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel3),
    },

    [PRODUCER_ISABEL_4] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel4),
    },

    [PRODUCER_ISABEL_5] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel5),
    },

    [PRODUCER_TIMOTHY_1] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Timothy1),
    },

    [PRODUCER_TIMOTHY_2] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy2),
    },

    [PRODUCER_TIMOTHY_3] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy3),
    },

    [PRODUCER_TIMOTHY_4] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy4),
    },

    [PRODUCER_TIMOTHY_5] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy5),
    },

    [PRODUCER_VICKY] =
    {
        .trainerClass = PRODUCER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("VICKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Vicky),
    },

    [PRODUCER_SHELBY_1] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby1),
    },

    [PRODUCER_SHELBY_2] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby2),
    },

    [PRODUCER_SHELBY_3] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby3),
    },

    [PRODUCER_SHELBY_4] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby4),
    },

    [PRODUCER_SHELBY_5] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby5),
    },

    [PRODUCER_CALVIN_1] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin1),
    },

    [PRODUCER_BILLY] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Billy),
    },

    [PRODUCER_JOSH] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("JOSH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Josh),
    },

    [PRODUCER_TOMMY] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("TOMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tommy),
    },

    [PRODUCER_JOEY] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("JOEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey),
    },

    [PRODUCER_BEN] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("BEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ben),
    },

    [PRODUCER_QUINCY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("QUINCY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Quincy),
    },

    [PRODUCER_KATELYNN] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("KATELYNN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Katelynn),
    },

    [PRODUCER_JAYLEN] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("JAYLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaylen),
    },

    [PRODUCER_DILLON] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("DILLON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dillon),
    },

    [PRODUCER_CALVIN_2] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin2),
    },

    [PRODUCER_CALVIN_3] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin3),
    },

    [PRODUCER_CALVIN_4] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin4),
    },

    [PRODUCER_CALVIN_5] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin5),
    },

    [PRODUCER_EDDIE] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("EDDIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eddie),
    },

    [PRODUCER_ALLEN] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("ALLEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allen),
    },

    [PRODUCER_TIMMY] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("TIMMY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Timmy),
    },

    [PRODUCER_WALLACE] =
    {
        .trainerClass = PRODUCER_CLASS_CHAMPION,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CHAMPION_WALLACE,
        .trainerName = _("WALLACE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wallace),
    },

    [PRODUCER_ANDREW] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ANDREW"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andrew),
    },

    [PRODUCER_IVAN] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("IVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ivan),
    },

    [PRODUCER_CLAUDE] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("CLAUDE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Claude),
    },

    [PRODUCER_ELLIOT_1] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot1),
    },

    [PRODUCER_NED] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("NED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ned),
    },

    [PRODUCER_DALE] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("DALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dale),
    },

    [PRODUCER_NOLAN] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("NOLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nolan),
    },

    [PRODUCER_BARNY] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("BARNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barny),
    },

    [PRODUCER_WADE] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("WADE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wade),
    },

    [PRODUCER_CARTER] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("CARTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carter),
    },

    [PRODUCER_ELLIOT_2] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot2),
    },

    [PRODUCER_ELLIOT_3] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot3),
    },

    [PRODUCER_ELLIOT_4] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot4),
    },

    [PRODUCER_ELLIOT_5] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot5),
    },

    [PRODUCER_RONALD] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("RONALD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ronald),
    },

    [PRODUCER_JACOB] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JACOB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacob),
    },

    [PRODUCER_ANTHONY] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ANTHONY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony),
    },

    [PRODUCER_BENJAMIN_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin1),
    },

    [PRODUCER_BENJAMIN_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin2),
    },

    [PRODUCER_BENJAMIN_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin3),
    },

    [PRODUCER_BENJAMIN_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin4),
    },

    [PRODUCER_BENJAMIN_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin5),
    },

    [PRODUCER_ABIGAIL_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail1),
    },

    [PRODUCER_JASMINE] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("JASMINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jasmine),
    },

    [PRODUCER_ABIGAIL_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail2),
    },

    [PRODUCER_ABIGAIL_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail3),
    },

    [PRODUCER_ABIGAIL_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail4),
    },

    [PRODUCER_ABIGAIL_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail5),
    },

    [PRODUCER_DYLAN_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan1),
    },

    [PRODUCER_DYLAN_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan2),
    },

    [PRODUCER_DYLAN_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan3),
    },

    [PRODUCER_DYLAN_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan4),
    },

    [PRODUCER_DYLAN_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan5),
    },

    [PRODUCER_MARIA_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria1),
    },

    [PRODUCER_MARIA_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria2),
    },

    [PRODUCER_MARIA_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria3),
    },

    [PRODUCER_MARIA_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria4),
    },

    [PRODUCER_MARIA_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria5),
    },

    [PRODUCER_CAMDEN] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Camden),
    },

    [PRODUCER_DEMETRIUS] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("DEMETRIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Demetrius),
    },

    [PRODUCER_ISAIAH_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah1),
    },

    [PRODUCER_PABLO_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo1),
    },

    [PRODUCER_CHASE] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CHASE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chase),
    },

    [PRODUCER_ISAIAH_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah2),
    },

    [PRODUCER_ISAIAH_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah3),
    },

    [PRODUCER_ISAIAH_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah4),
    },

    [PRODUCER_ISAIAH_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah5),
    },

    [PRODUCER_ISOBEL] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISOBEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isobel),
    },

    [PRODUCER_DONNY] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("DONNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Donny),
    },

    [PRODUCER_TALIA] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("TALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Talia),
    },

    [PRODUCER_KATELYN_1] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn1),
    },

    [PRODUCER_ALLISON] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALLISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allison),
    },

    [PRODUCER_KATELYN_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn2),
    },

    [PRODUCER_KATELYN_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn3),
    },

    [PRODUCER_KATELYN_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn4),
    },

    [PRODUCER_KATELYN_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn5),
    },

    [PRODUCER_NICOLAS_1] =
    {
        .trainerClass = PRODUCER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas1),
    },

    [PRODUCER_NICOLAS_2] =
    {
        .trainerClass = PRODUCER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas2),
    },

    [PRODUCER_NICOLAS_3] =
    {
        .trainerClass = PRODUCER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas3),
    },

    [PRODUCER_NICOLAS_4] =
    {
        .trainerClass = PRODUCER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas4),
    },

    [PRODUCER_NICOLAS_5] =
    {
        .trainerClass = PRODUCER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Nicolas5),
    },

    [PRODUCER_AARON] =
    {
        .trainerClass = PRODUCER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_DRAGON_TAMER,
        .trainerName = _("AARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Aaron),
    },

    [PRODUCER_PERRY] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("PERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Perry),
    },

    [PRODUCER_HUGH] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("HUGH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hugh),
    },

    [PRODUCER_PHIL] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("PHIL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil),
    },

    [PRODUCER_JARED] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("JARED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jared),
    },

    [PRODUCER_HUMBERTO] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("HUMBERTO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Humberto),
    },

    [PRODUCER_PRESLEY] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("PRESLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Presley),
    },

    [PRODUCER_EDWARDO] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("EDWARDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwardo),
    },

    [PRODUCER_COLIN] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("COLIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colin),
    },

    [PRODUCER_ROBERT_1] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert1),
    },

    [PRODUCER_BENNY] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("BENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benny),
    },

    [PRODUCER_CHESTER] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("CHESTER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chester),
    },

    [PRODUCER_ROBERT_2] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert2),
    },

    [PRODUCER_ROBERT_3] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert3),
    },

    [PRODUCER_ROBERT_4] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert4),
    },

    [PRODUCER_ROBERT_5] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert5),
    },

    [PRODUCER_ALEX] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ALEX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alex),
    },

    [PRODUCER_BECK] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("BECK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beck),
    },

    [PRODUCER_YASU] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("YASU"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Yasu),
    },

    [PRODUCER_TAKASHI] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("TAKASHI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Takashi),
    },

    [PRODUCER_DIANNE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("DIANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = ITEM_CUSTOM_MOVES(sParty_Dianne),
    },

    [PRODUCER_JANI] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("JANI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jani),
    },

    [PRODUCER_LAO_1] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao1),
    },

    [PRODUCER_LUNG] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("LUNG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lung),
    },

    [PRODUCER_LAO_2] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao2),
    },

    [PRODUCER_LAO_3] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao3),
    },

    [PRODUCER_LAO_4] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao4),
    },

    [PRODUCER_LAO_5] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = ITEM_CUSTOM_MOVES(sParty_Lao5),
    },

    [PRODUCER_JOCELYN] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("JOCELYN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jocelyn),
    },

    [PRODUCER_LAURA] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Laura),
    },

    [PRODUCER_CYNDY_1] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy1),
    },

    [PRODUCER_CORA] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CORA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cora),
    },

    [PRODUCER_PAULA] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("PAULA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paula),
    },

    [PRODUCER_CYNDY_2] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy2),
    },

    [PRODUCER_CYNDY_3] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy3),
    },

    [PRODUCER_CYNDY_4] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy4),
    },

    [PRODUCER_CYNDY_5] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy5),
    },

    [PRODUCER_MADELINE_1] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline1),
    },

    [PRODUCER_CLARISSA] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("CLARISSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clarissa),
    },

    [PRODUCER_ANGELICA] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("ANGELICA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Angelica),
    },

    [PRODUCER_MADELINE_2] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline2),
    },

    [PRODUCER_MADELINE_3] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline3),
    },

    [PRODUCER_MADELINE_4] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline4),
    },

    [PRODUCER_MADELINE_5] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline5),
    },

    [PRODUCER_BEVERLY] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("BEVERLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beverly),
    },

    [PRODUCER_IMANI] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("IMANI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Imani),
    },

    [PRODUCER_KYLA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("KYLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kyla),
    },

    [PRODUCER_DENISE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("DENISE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Denise),
    },

    [PRODUCER_BETH] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("BETH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth),
    },

    [PRODUCER_TARA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("TARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tara),
    },

    [PRODUCER_MISSY] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("MISSY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Missy),
    },

    [PRODUCER_ALICE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("ALICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alice),
    },

    [PRODUCER_JENNY_1] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny1),
    },

    [PRODUCER_GRACE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("GRACE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grace),
    },

    [PRODUCER_TANYA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("TANYA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tanya),
    },

    [PRODUCER_SHARON] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("SHARON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sharon),
    },

    [PRODUCER_NIKKI] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("NIKKI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nikki),
    },

    [PRODUCER_BRENDA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("BRENDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brenda),
    },

    [PRODUCER_KATIE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("KATIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katie),
    },

    [PRODUCER_SUSIE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Susie),
    },

    [PRODUCER_KARA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("KARA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kara),
    },

    [PRODUCER_DANA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("DANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dana),
    },

    [PRODUCER_SIENNA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("SIENNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sienna),
    },

    [PRODUCER_DEBRA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("DEBRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Debra),
    },

    [PRODUCER_LINDA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("LINDA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Linda),
    },

    [PRODUCER_KAYLEE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("KAYLEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kaylee),
    },

    [PRODUCER_LAUREL] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("LAUREL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Laurel),
    },

    [PRODUCER_CARLEE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("CARLEE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carlee),
    },

    [PRODUCER_JENNY_2] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny2),
    },

    [PRODUCER_JENNY_3] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny3),
    },

    [PRODUCER_JENNY_4] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny4),
    },

    [PRODUCER_JENNY_5] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny5),
    },

    [PRODUCER_HEIDI] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Heidi),
    },

    [PRODUCER_BECKY] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("BECKY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Becky),
    },

    [PRODUCER_CAROL] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("CAROL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carol),
    },

    [PRODUCER_NANCY] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("NANCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nancy),
    },

    [PRODUCER_MARTHA] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("MARTHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Martha),
    },

    [PRODUCER_DIANA_1] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana1),
    },

    [PRODUCER_CEDRIC] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("CEDRIC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Cedric),
    },

    [PRODUCER_IRENE] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("IRENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Irene),
    },

    [PRODUCER_DIANA_2] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana2),
    },

    [PRODUCER_DIANA_3] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana3),
    },

    [PRODUCER_DIANA_4] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana4),
    },

    [PRODUCER_DIANA_5] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana5),
    },

    [PRODUCER_AMY_AND_LIV_1] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv1),
    },

    [PRODUCER_AMY_AND_LIV_2] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv2),
    },

    [PRODUCER_GINA_AND_MIA_1] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GinaAndMia1),
    },

    [PRODUCER_MIU_AND_YUKI] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("MIU & YUKI"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MiuAndYuki),
    },

    [PRODUCER_AMY_AND_LIV_3] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv3),
    },

    [PRODUCER_GINA_AND_MIA_2] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_GinaAndMia2),
    },

    [PRODUCER_AMY_AND_LIV_4] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv4),
    },

    [PRODUCER_AMY_AND_LIV_5] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AmyAndLiv5),
    },

    [PRODUCER_AMY_AND_LIV_6] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AmyAndLiv6),
    },

    [PRODUCER_HUEY] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("HUEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Huey),
    },

    [PRODUCER_EDMOND] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("EDMOND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edmond),
    },

    [PRODUCER_ERNEST_1] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest1),
    },

    [PRODUCER_DWAYNE] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("DWAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dwayne),
    },

    [PRODUCER_PHILLIP] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("PHILLIP"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phillip),
    },

    [PRODUCER_LEONARD] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("LEONARD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leonard),
    },

    [PRODUCER_DUNCAN] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("DUNCAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Duncan),
    },

    [PRODUCER_ERNEST_2] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest2),
    },

    [PRODUCER_ERNEST_3] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest3),
    },

    [PRODUCER_ERNEST_4] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest4),
    },

    [PRODUCER_ERNEST_5] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest5),
    },

    [PRODUCER_ELI] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("ELI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eli),
    },

    [PRODUCER_ANNIKA] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_F,
        .trainerName = _("ANNIKA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Annika),
    },

    [PRODUCER_JAZMYN] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER_2,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("JAZMYN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jazmyn),
    },

    [PRODUCER_JONAS] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("JONAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jonas),
    },

    [PRODUCER_KAYLEY] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("KAYLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Kayley),
    },

    [PRODUCER_AURON] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("AURON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Auron),
    },

    [PRODUCER_KELVIN] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("KELVIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelvin),
    },

    [PRODUCER_MARLEY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("MARLEY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Marley),
    },

    [PRODUCER_REYNA] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("REYNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Reyna),
    },

    [PRODUCER_HUDSON] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("HUDSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hudson),
    },

    [PRODUCER_CONOR] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("CONOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Conor),
    },

    [PRODUCER_EDWIN_1] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin1),
    },

    [PRODUCER_HECTOR] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("HECTOR"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hector),
    },

    [PRODUCER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = PRODUCER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TabithaMossdeep),
    },

    [PRODUCER_EDWIN_2] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin2),
    },

    [PRODUCER_EDWIN_3] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin3),
    },

    [PRODUCER_EDWIN_4] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin4),
    },

    [PRODUCER_EDWIN_5] =
    {
        .trainerClass = PRODUCER_CLASS_COLLECTOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin5),
    },

    [PRODUCER_WALLY_VR_1] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR1),
    },

    [PRODUCER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute103Mudkip),
    },

    [PRODUCER_BRENDAN_ROUTE_110_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute110Mudkip),
    },

    [PRODUCER_BRENDAN_ROUTE_119_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute119Mudkip),
    },

    [PRODUCER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute103Treecko),
    },

    [PRODUCER_BRENDAN_ROUTE_110_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute110Treecko),
    },

    [PRODUCER_BRENDAN_ROUTE_119_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute119Treecko),
    },

    [PRODUCER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute103Torchic),
    },

    [PRODUCER_BRENDAN_ROUTE_110_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute110Torchic),
    },

    [PRODUCER_BRENDAN_ROUTE_119_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute119Torchic),
    },

    [PRODUCER_MAY_ROUTE_103_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute103Mudkip),
    },

    [PRODUCER_MAY_ROUTE_110_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute110Mudkip),
    },

    [PRODUCER_MAY_ROUTE_119_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute119Mudkip),
    },

    [PRODUCER_MAY_ROUTE_103_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute103Treecko),
    },

    [PRODUCER_MAY_ROUTE_110_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute110Treecko),
    },

    [PRODUCER_MAY_ROUTE_119_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute119Treecko),
    },

    [PRODUCER_MAY_ROUTE_103_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute103Torchic),
    },

    [PRODUCER_MAY_ROUTE_110_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute110Torchic),
    },

    [PRODUCER_MAY_ROUTE_119_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute119Torchic),
    },

    [PRODUCER_ISAAC_1] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac1),
    },

    [PRODUCER_DAVIS] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("DAVIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Davis),
    },

    [PRODUCER_MITCHELL] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("MITCHELL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Mitchell),
    },

    [PRODUCER_ISAAC_2] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac2),
    },

    [PRODUCER_ISAAC_3] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac3),
    },

    [PRODUCER_ISAAC_4] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac4),
    },

    [PRODUCER_ISAAC_5] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac5),
    },

    [PRODUCER_LYDIA_1] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia1),
    },

    [PRODUCER_HALLE] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("HALLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Halle),
    },

    [PRODUCER_GARRISON] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("GARRISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Garrison),
    },

    [PRODUCER_LYDIA_2] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia2),
    },

    [PRODUCER_LYDIA_3] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia3),
    },

    [PRODUCER_LYDIA_4] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia4),
    },

    [PRODUCER_LYDIA_5] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia5),
    },

    [PRODUCER_JACKSON_1] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson1),
    },

    [PRODUCER_LORENZO] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("LORENZO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lorenzo),
    },

    [PRODUCER_SEBASTIAN] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("SEBASTIAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sebastian),
    },

    [PRODUCER_JACKSON_2] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson2),
    },

    [PRODUCER_JACKSON_3] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson3),
    },

    [PRODUCER_JACKSON_4] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson4),
    },

    [PRODUCER_JACKSON_5] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson5),
    },

    [PRODUCER_CATHERINE_1] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine1),
    },

    [PRODUCER_JENNA] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("JENNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenna),
    },

    [PRODUCER_SOPHIA] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("SOPHIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sophia),
    },

    [PRODUCER_CATHERINE_2] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine2),
    },

    [PRODUCER_CATHERINE_3] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine3),
    },

    [PRODUCER_CATHERINE_4] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine4),
    },

    [PRODUCER_CATHERINE_5] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine5),
    },

    [PRODUCER_JULIO] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JULIO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julio),
    },

    [PRODUCER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern5),
    },

    [PRODUCER_GRUNT_UNUSED] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntUnused),
    },

    [PRODUCER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre4),
    },

    [PRODUCER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntJaggedPass),
    },

    [PRODUCER_MARC] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("MARC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marc),
    },

    [PRODUCER_BRENDEN] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("BRENDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brenden),
    },

    [PRODUCER_LILITH] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("LILITH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lilith),
    },

    [PRODUCER_CRISTIAN] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("CRISTIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristian),
    },

    [PRODUCER_SYLVIA] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("SYLVIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sylvia),
    },

    [PRODUCER_LEONARDO] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("LEONARDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leonardo),
    },

    [PRODUCER_ATHENA] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("ATHENA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Athena),
    },

    [PRODUCER_HARRISON] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("HARRISON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harrison),
    },

    [PRODUCER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtChimney2),
    },

    [PRODUCER_CLARENCE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("CLARENCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clarence),
    },

    [PRODUCER_TERRY] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("TERRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Terry),
    },

    [PRODUCER_NATE] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("NATE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nate),
    },

    [PRODUCER_KATHLEEN] =
    {
        .trainerClass = PRODUCER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_HEX_MANIAC,
        .trainerName = _("KATHLEEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kathleen),
    },

    [PRODUCER_CLIFFORD] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("CLIFFORD"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clifford),
    },

    [PRODUCER_NICHOLAS] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("NICHOLAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicholas),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter3),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter4),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter5),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter6),
    },

    [PRODUCER_GRUNT_SPACE_CENTER_7] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter7),
    },

    [PRODUCER_MACEY] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("MACEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Macey),
    },

    [PRODUCER_BRENDAN_RUSTBORO_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRustboroTreecko),
    },

    [PRODUCER_BRENDAN_RUSTBORO_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRustboroMudkip),
    },

    [PRODUCER_PAXTON] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_M,
        .trainerName = _("PAXTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paxton),
    },

    [PRODUCER_ISABELLA] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISABELLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isabella),
    },

    [PRODUCER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = PRODUCER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst5),
    },

    [PRODUCER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = PRODUCER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TabithaMtChimney),
    },

    [PRODUCER_JONATHAN] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("JONATHAN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jonathan),
    },

    [PRODUCER_BRENDAN_RUSTBORO_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRustboroTorchic),
    },

    [PRODUCER_MAY_RUSTBORO_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRustboroMudkip),
    },

    [PRODUCER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = PRODUCER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MaxieMagmaHideout),
    },

    [PRODUCER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = PRODUCER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MaxieMtChimney),
    },

    [PRODUCER_TIANA] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("TIANA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tiana),
    },

    [PRODUCER_HALEY_1] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley1),
    },

    [PRODUCER_JANICE] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("JANICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Janice),
    },

    [PRODUCER_VIVI] =
    {
        .trainerClass = PRODUCER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("VIVI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vivi),
    },

    [PRODUCER_HALEY_2] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley2),
    },

    [PRODUCER_HALEY_3] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley3),
    },

    [PRODUCER_HALEY_4] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley4),
    },

    [PRODUCER_HALEY_5] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley5),
    },

    [PRODUCER_SALLY] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("SALLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sally),
    },

    [PRODUCER_ROBIN] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("ROBIN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robin),
    },

    [PRODUCER_ANDREA] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("ANDREA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andrea),
    },

    [PRODUCER_CRISSY] =
    {
        .trainerClass = PRODUCER_CLASS_LASS,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LASS,
        .trainerName = _("CRISSY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Crissy),
    },

    [PRODUCER_RICK] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("RICK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rick),
    },

    [PRODUCER_LYLE] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("LYLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lyle),
    },

    [PRODUCER_JOSE] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("JOSE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jose),
    },

    [PRODUCER_DOUG] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Doug),
    },

    [PRODUCER_GREG] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("GREG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greg),
    },

    [PRODUCER_KENT] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("KENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kent),
    },

    [PRODUCER_JAMES_1] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James1),
    },

    [PRODUCER_JAMES_2] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James2),
    },

    [PRODUCER_JAMES_3] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James3),
    },

    [PRODUCER_JAMES_4] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James4),
    },

    [PRODUCER_JAMES_5] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James5),
    },

    [PRODUCER_BRICE] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("BRICE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brice),
    },

    [PRODUCER_TRENT_1] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent1),
    },

    [PRODUCER_LENNY] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("LENNY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lenny),
    },

    [PRODUCER_LUCAS_1] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lucas1),
    },

    [PRODUCER_ALAN] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("ALAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alan),
    },

    [PRODUCER_CLARK] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("CLARK"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clark),
    },

    [PRODUCER_ERIC] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("ERIC"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eric),
    },

    [PRODUCER_LUCAS_2] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lucas2),
    },

    [PRODUCER_MIKE_1] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Mike1),
    },

    [PRODUCER_MIKE_2] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mike2),
    },

    [PRODUCER_TRENT_2] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent2),
    },

    [PRODUCER_TRENT_3] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent3),
    },

    [PRODUCER_TRENT_4] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent4),
    },

    [PRODUCER_TRENT_5] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent5),
    },

    [PRODUCER_DEZ_AND_LUKE] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("DEZ & LUKE"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_DezAndLuke),
    },

    [PRODUCER_LEA_AND_JED] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("LEA & JED"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaAndJed),
    },

    [PRODUCER_KIRA_AND_DAN_1] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan1),
    },

    [PRODUCER_KIRA_AND_DAN_2] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan2),
    },

    [PRODUCER_KIRA_AND_DAN_3] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan3),
    },

    [PRODUCER_KIRA_AND_DAN_4] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan4),
    },

    [PRODUCER_KIRA_AND_DAN_5] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan5),
    },

    [PRODUCER_JOHANNA] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("JOHANNA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Johanna),
    },

    [PRODUCER_GERALD] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("GERALD"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Gerald),
    },

    [PRODUCER_VIVIAN] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("VIVIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Vivian),
    },

    [PRODUCER_DANIELLE] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("DANIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Danielle),
    },

    [PRODUCER_HIDEO] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("HIDEO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Hideo),
    },

    [PRODUCER_KEIGO] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("KEIGO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Keigo),
    },

    [PRODUCER_RILEY] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("RILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Riley),
    },

    [PRODUCER_FLINT] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("FLINT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Flint),
    },

    [PRODUCER_ASHLEY] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("ASHLEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ashley),
    },

    [PRODUCER_WALLY_MAUVILLE] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_WallyMauville),
    },

    [PRODUCER_WALLY_VR_2] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR2),
    },

    [PRODUCER_WALLY_VR_3] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR3),
    },

    [PRODUCER_WALLY_VR_4] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR4),
    },

    [PRODUCER_WALLY_VR_5] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR5),
    },

    [PRODUCER_BRENDAN_LILYCOVE_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLilycoveMudkip),
    },

    [PRODUCER_BRENDAN_LILYCOVE_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLilycoveTreecko),
    },

    [PRODUCER_BRENDAN_LILYCOVE_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLilycoveTorchic),
    },

    [PRODUCER_MAY_LILYCOVE_MUDKIP] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLilycoveMudkip),
    },

    [PRODUCER_MAY_LILYCOVE_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLilycoveTreecko),
    },

    [PRODUCER_MAY_LILYCOVE_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLilycoveTorchic),
    },

    [PRODUCER_JONAH] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("JONAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jonah),
    },

    [PRODUCER_HENRY] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("HENRY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry),
    },

    [PRODUCER_ROGER] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("ROGER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roger),
    },

    [PRODUCER_ALEXA] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("ALEXA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alexa),
    },

    [PRODUCER_RUBEN] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("RUBEN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ruben),
    },

    [PRODUCER_KOJI_1] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji1),
    },

    [PRODUCER_WAYNE] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("WAYNE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wayne),
    },

    [PRODUCER_AIDAN] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("AIDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Aidan),
    },

    [PRODUCER_REED] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("REED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Reed),
    },

    [PRODUCER_TISHA] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("TISHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tisha),
    },

    [PRODUCER_TORI_AND_TIA] =
    {
        .trainerClass = PRODUCER_CLASS_TWINS,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_TWINS,
        .trainerName = _("TORI & TIA"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ToriAndTia),
    },

    [PRODUCER_KIM_AND_IRIS] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("KIM & IRIS"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_KimAndIris),
    },

    [PRODUCER_TYRA_AND_IVY] =
    {
        .trainerClass = PRODUCER_CLASS_SR_AND_JR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_SR_AND_JR,
        .trainerName = _("TYRA & IVY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TyraAndIvy),
    },

    [PRODUCER_MEL_AND_PAUL] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_YOUNG_COUPLE,
        .trainerName = _("MEL & PAUL"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_MelAndPaul),
    },

    [PRODUCER_JOHN_AND_JAY_1] =
    {
        .trainerClass = PRODUCER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay1),
    },

    [PRODUCER_JOHN_AND_JAY_2] =
    {
        .trainerClass = PRODUCER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay2),
    },

    [PRODUCER_JOHN_AND_JAY_3] =
    {
        .trainerClass = PRODUCER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay3),
    },

    [PRODUCER_JOHN_AND_JAY_4] =
    {
        .trainerClass = PRODUCER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay4),
    },

    [PRODUCER_JOHN_AND_JAY_5] =
    {
        .trainerClass = PRODUCER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay5),
    },

    [PRODUCER_RELI_AND_IAN] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("RELI & IAN"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ReliAndIan),
    },

    [PRODUCER_LILA_AND_ROY_1] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy1),
    },

    [PRODUCER_LILA_AND_ROY_2] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy2),
    },

    [PRODUCER_LILA_AND_ROY_3] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy3),
    },

    [PRODUCER_LILA_AND_ROY_4] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy4),
    },

    [PRODUCER_LILA_AND_ROY_5] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy5),
    },

    [PRODUCER_LISA_AND_RAY] =
    {
        .trainerClass = PRODUCER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SIS_AND_BRO,
        .trainerName = _("LISA & RAY"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LisaAndRay),
    },

    [PRODUCER_CHRIS] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("CHRIS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chris),
    },

    [PRODUCER_DAWSON] =
    {
        .trainerClass = PRODUCER_CLASS_RICH_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_RICH_BOY,
        .trainerName = _("DAWSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Dawson),
    },

    [PRODUCER_SARAH] =
    {
        .trainerClass = PRODUCER_CLASS_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LADY,
        .trainerName = _("SARAH"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Sarah),
    },

    [PRODUCER_DARIAN] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("DARIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darian),
    },

    [PRODUCER_HAILEY] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_F,
        .trainerName = _("HAILEY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hailey),
    },

    [PRODUCER_CHANDLER] =
    {
        .trainerClass = PRODUCER_CLASS_TUBER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_TUBER_M,
        .trainerName = _("CHANDLER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chandler),
    },

    [PRODUCER_KALEB] =
    {
        .trainerClass = PRODUCER_CLASS_POKEFAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = PRODUCER_PIC_POKEFAN_M,
        .trainerName = _("KALEB"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Kaleb),
    },

    [PRODUCER_JOSEPH] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("JOSEPH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joseph),
    },

    [PRODUCER_ALYSSA] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALYSSA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alyssa),
    },

    [PRODUCER_MARCOS] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marcos),
    },

    [PRODUCER_RHETT] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("RHETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rhett),
    },

    [PRODUCER_TYRON] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("TYRON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tyron),
    },

    [PRODUCER_CELINA] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("CELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Celina),
    },

    [PRODUCER_BIANCA] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("BIANCA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bianca),
    },

    [PRODUCER_HAYDEN] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("HAYDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hayden),
    },

    [PRODUCER_SOPHIE] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("SOPHIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sophie),
    },

    [PRODUCER_COBY] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("COBY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Coby),
    },

    [PRODUCER_LAWRENCE] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("LAWRENCE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lawrence),
    },

    [PRODUCER_WYATT] =
    {
        .trainerClass = PRODUCER_CLASS_POKEMANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_POKEMANIAC,
        .trainerName = _("WYATT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wyatt),
    },

    [PRODUCER_ANGELINA] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("ANGELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Angelina),
    },

    [PRODUCER_KAI] =
    {
        .trainerClass = PRODUCER_CLASS_FISHERMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_FISHERMAN,
        .trainerName = _("KAI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kai),
    },

    [PRODUCER_CHARLOTTE] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("CHARLOTTE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charlotte),
    },

    [PRODUCER_DEANDRE] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("DEANDRE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Deandre),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout1),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout2),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout3),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout4),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout5),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout6),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout7),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout8),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout9),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout10),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout11),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout12),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout13),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout14),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout15),
    },

    [PRODUCER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = PRODUCER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout16),
    },

    [PRODUCER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = PRODUCER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TabithaMagmaHideout),
    },

    [PRODUCER_DARCY] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("DARCY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darcy),
    },

    [PRODUCER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = PRODUCER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = PRODUCER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MaxieMossdeep),
    },

    [PRODUCER_PETE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_M,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_M,
        .trainerName = _("PETE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pete),
    },

    [PRODUCER_ISABELLE] =
    {
        .trainerClass = PRODUCER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMER_F,
        .trainerName = _("ISABELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isabelle),
    },

    [PRODUCER_ANDRES_1] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres1),
    },

    [PRODUCER_JOSUE] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("JOSUE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Josue),
    },

    [PRODUCER_CAMRON] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMRON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Camron),
    },

    [PRODUCER_CORY_1] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory1),
    },

    [PRODUCER_CAROLINA] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CAROLINA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carolina),
    },

    [PRODUCER_ELIJAH] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("ELIJAH"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elijah),
    },

    [PRODUCER_CELIA] =
    {
        .trainerClass = PRODUCER_CLASS_PICNICKER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = PRODUCER_PIC_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Celia),
    },

    [PRODUCER_BRYAN] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("BRYAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bryan),
    },

    [PRODUCER_BRANDEN] =
    {
        .trainerClass = PRODUCER_CLASS_CAMPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_CAMPER,
        .trainerName = _("BRANDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Branden),
    },

    [PRODUCER_BRYANT] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("BRYANT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bryant),
    },

    [PRODUCER_SHAYLA] =
    {
        .trainerClass = PRODUCER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_AROMA_LADY,
        .trainerName = _("SHAYLA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shayla),
    },

    [PRODUCER_KYRA] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("KYRA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kyra),
    },

    [PRODUCER_JAIDEN] =
    {
        .trainerClass = PRODUCER_CLASS_NINJA_BOY,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_NINJA_BOY,
        .trainerName = _("JAIDEN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaiden),
    },

    [PRODUCER_ALIX] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("ALIX"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alix),
    },

    [PRODUCER_HELENE] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("HELENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Helene),
    },

    [PRODUCER_MARLENE] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("MARLENE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marlene),
    },

    [PRODUCER_DEVAN] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("DEVAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Devan),
    },

    [PRODUCER_JOHNSON] =
    {
        .trainerClass = PRODUCER_CLASS_YOUNGSTER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_YOUNGSTER,
        .trainerName = _("JOHNSON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Johnson),
    },

    [PRODUCER_MELINA] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MELINA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Melina),
    },

    [PRODUCER_BRANDI] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("BRANDI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandi),
    },

    [PRODUCER_AISHA] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("AISHA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Aisha),
    },

    [PRODUCER_MAKAYLA] =
    {
        .trainerClass = PRODUCER_CLASS_EXPERT,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_EXPERT_F,
        .trainerName = _("MAKAYLA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Makayla),
    },

    [PRODUCER_FABIAN] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("FABIAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fabian),
    },

    [PRODUCER_DAYTON] =
    {
        .trainerClass = PRODUCER_CLASS_KINDLER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_KINDLER,
        .trainerName = _("DAYTON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dayton),
    },

    [PRODUCER_RACHEL] =
    {
        .trainerClass = PRODUCER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_PARASOL_LADY,
        .trainerName = _("RACHEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rachel),
    },

    [PRODUCER_LEONEL] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_M,
        .trainerName = _("LEONEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Leonel),
    },

    [PRODUCER_CALLIE] =
    {
        .trainerClass = PRODUCER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BATTLE_GIRL,
        .trainerName = _("CALLIE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Callie),
    },

    [PRODUCER_CALE] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("CALE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cale),
    },

    [PRODUCER_MYLES] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("MYLES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Myles),
    },

    [PRODUCER_PAT] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("PAT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pat),
    },

    [PRODUCER_CRISTIN_1] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin1),
    },

    [PRODUCER_MAY_RUSTBORO_TREECKO] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRustboroTreecko),
    },

    [PRODUCER_MAY_RUSTBORO_TORCHIC] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRustboroTorchic),
    },

    [PRODUCER_ROXANNE_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne2),
    },

    [PRODUCER_ROXANNE_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne3),
    },

    [PRODUCER_ROXANNE_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne4),
    },

    [PRODUCER_ROXANNE_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne5),
    },

    [PRODUCER_BRAWLY_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly2),
    },

    [PRODUCER_BRAWLY_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly3),
    },

    [PRODUCER_BRAWLY_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly4),
    },

    [PRODUCER_BRAWLY_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly5),
    },

    [PRODUCER_WATTSON_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson2),
    },

    [PRODUCER_WATTSON_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson3),
    },

    [PRODUCER_WATTSON_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson4),
    },

    [PRODUCER_WATTSON_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson5),
    },

    [PRODUCER_FLANNERY_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery2),
    },

    [PRODUCER_FLANNERY_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery3),
    },

    [PRODUCER_FLANNERY_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery4),
    },

    [PRODUCER_FLANNERY_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery5),
    },

    [PRODUCER_NORMAN_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman2),
    },

    [PRODUCER_NORMAN_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman3),
    },

    [PRODUCER_NORMAN_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman4),
    },

    [PRODUCER_NORMAN_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman5),
    },

    [PRODUCER_WINONA_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona2),
    },

    [PRODUCER_WINONA_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona3),
    },

    [PRODUCER_WINONA_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona4),
    },

    [PRODUCER_WINONA_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona5),
    },

    [PRODUCER_TATE_AND_LIZA_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza2),
    },

    [PRODUCER_TATE_AND_LIZA_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza3),
    },

    [PRODUCER_TATE_AND_LIZA_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza4),
    },

    [PRODUCER_TATE_AND_LIZA_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza5),
    },

    [PRODUCER_JUAN_2] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan2),
    },

    [PRODUCER_JUAN_3] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan3),
    },

    [PRODUCER_JUAN_4] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan4),
    },

    [PRODUCER_JUAN_5] =
    {
        .trainerClass = PRODUCER_CLASS_LEADER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan5),
    },

    [PRODUCER_ANGELO] =
    {
        .trainerClass = PRODUCER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = PRODUCER_PIC_BUG_MANIAC,
        .trainerName = _("ANGELO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Angelo),
    },

    [PRODUCER_DARIUS] =
    {
        .trainerClass = PRODUCER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_BIRD_KEEPER,
        .trainerName = _("DARIUS"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darius),
    },

    [PRODUCER_STEVEN] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_STEVEN,
        .trainerName = _("STEVEN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Steven),
    },

    [PRODUCER_ANABEL] =
    {
        .trainerClass = PRODUCER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("ANABEL"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anabel),
    },

    [PRODUCER_TUCKER] =
    {
        .trainerClass = PRODUCER_CLASS_DOME_ACE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("TUCKER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tucker),
    },

    [PRODUCER_SPENSER] =
    {
        .trainerClass = PRODUCER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("SPENSER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spenser),
    },

    [PRODUCER_GRETA] =
    {
        .trainerClass = PRODUCER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("GRETA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greta),
    },

    [PRODUCER_NOLAND] =
    {
        .trainerClass = PRODUCER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("NOLAND"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Noland),
    },

    [PRODUCER_LUCY] =
    {
        .trainerClass = PRODUCER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("LUCY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lucy),
    },

    [PRODUCER_BRANDON] =
    {
        .trainerClass = PRODUCER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon),
    },

    [PRODUCER_ANDRES_2] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres2),
    },

    [PRODUCER_ANDRES_3] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres3),
    },

    [PRODUCER_ANDRES_4] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres4),
    },

    [PRODUCER_ANDRES_5] =
    {
        .trainerClass = PRODUCER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres5),
    },

    [PRODUCER_CORY_2] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory2),
    },

    [PRODUCER_CORY_3] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory3),
    },

    [PRODUCER_CORY_4] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory4),
    },

    [PRODUCER_CORY_5] =
    {
        .trainerClass = PRODUCER_CLASS_SAILOR,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory5),
    },

    [PRODUCER_PABLO_2] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo2),
    },

    [PRODUCER_PABLO_3] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo3),
    },

    [PRODUCER_PABLO_4] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo4),
    },

    [PRODUCER_PABLO_5] =
    {
        .trainerClass = PRODUCER_CLASS_TRIATHLETE,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = PRODUCER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo5),
    },

    [PRODUCER_KOJI_2] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji2),
    },

    [PRODUCER_KOJI_3] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji3),
    },

    [PRODUCER_KOJI_4] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji4),
    },

    [PRODUCER_KOJI_5] =
    {
        .trainerClass = PRODUCER_CLASS_BLACK_BELT,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji5),
    },

    [PRODUCER_CRISTIN_2] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin2),
    },

    [PRODUCER_CRISTIN_3] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin3),
    },

    [PRODUCER_CRISTIN_4] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin4),
    },

    [PRODUCER_CRISTIN_5] =
    {
        .trainerClass = PRODUCER_CLASS_COOLPRODUCER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = PRODUCER_PIC_COOLPRODUCER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin5),
    },

    [PRODUCER_FERNANDO_2] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando2),
    },

    [PRODUCER_FERNANDO_3] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando3),
    },

    [PRODUCER_FERNANDO_4] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando4),
    },

    [PRODUCER_FERNANDO_5] =
    {
        .trainerClass = PRODUCER_CLASS_GUITARIST,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando5),
    },

    [PRODUCER_SAWYER_2] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer2),
    },

    [PRODUCER_SAWYER_3] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer3),
    },

    [PRODUCER_SAWYER_4] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer4),
    },

    [PRODUCER_SAWYER_5] =
    {
        .trainerClass = PRODUCER_CLASS_HIKER,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = PRODUCER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer5),
    },

    [PRODUCER_GABRIELLE_2] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle2),
    },

    [PRODUCER_GABRIELLE_3] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle3),
    },

    [PRODUCER_GABRIELLE_4] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle4),
    },

    [PRODUCER_GABRIELLE_5] =
    {
        .trainerClass = PRODUCER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle5),
    },

    [PRODUCER_THALIA_2] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia2),
    },

    [PRODUCER_THALIA_3] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia3),
    },

    [PRODUCER_THALIA_4] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia4),
    },

    [PRODUCER_THALIA_5] =
    {
        .trainerClass = PRODUCER_CLASS_BEAUTY,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = PRODUCER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia5),
    },

    [PRODUCER_MARIELA] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_F,
        .trainerName = _("MARIELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mariela),
    },

    [PRODUCER_ALVARO] =
    {
        .trainerClass = PRODUCER_CLASS_PSYCHIC,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = PRODUCER_PIC_PSYCHIC_M,
        .trainerName = _("ALVARO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alvaro),
    },

    [PRODUCER_EVERETT] =
    {
        .trainerClass = PRODUCER_CLASS_GENTLEMAN,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = PRODUCER_PIC_GENTLEMAN,
        .trainerName = _("EVERETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Everett),
    },

    [PRODUCER_RED] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RED,
        .trainerName = _("RED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Red),
    },

    [PRODUCER_LEAF] =
    {
        .trainerClass = PRODUCER_CLASS_RIVAL,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_LEAF,
        .trainerName = _("LEAF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leaf),
    },

    [PRODUCER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = PRODUCER_CLASS_RS_PROTAG,
        .encounterMusic_gender = PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RS_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLinkPlaceholder),
    },

    [PRODUCER_MAY_PLACEHOLDER] =
    {
        .trainerClass = PRODUCER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_PRODUCER_FEMALE | PRODUCER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = PRODUCER_PIC_RS_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLinkPlaceholder),
    },
};
