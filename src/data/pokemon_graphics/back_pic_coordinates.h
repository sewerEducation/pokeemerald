// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonBackPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_UZUKIBASE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_UZUKIBLUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_UZUKIGOLD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_UZUKIPINK] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_RINBASE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_RINBLUE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_RINGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_RINPINK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_MIOBASE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_MIOBLUE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_MIOGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MIOPINK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_MIRIABASE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_MIRIABLUE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_MIRIAGOLD] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_MIRIAPINK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_KAORUBASE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_KAORUBLUE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_KAORUGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_KAORUPINK] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_RIINABASE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_RIINABLUE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_RIINAGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_RIINAPINK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_NANAMIBASE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_NANAMIBLUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_NANAMIGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_NANAMIPINK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_ATSUMIBASE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_ATSUMIBLUE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ATSUMIGOLD] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_ATSUMIPINK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_KOZUEBASE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_KOZUEBLUE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_KOZUEGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_KOZUEPINK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_NINABASE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_NINABLUE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_NINAGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_NINAPINK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SACHIKOBASE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_SACHIKOBLUE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SACHIKOGOLD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SACHIKOPINK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_LAYLABASE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_LAYLABLUE] =
    {
        .size = MON_COORDS_SIZE(48, 24),
        .y_offset = 20,
    },
    [SPECIES_LAYLAGOLD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_LAYLAPINK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_REINABASE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_REINABLUE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_REINAGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_REINAPINK] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MOMOKABASE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_MOMOKABLUE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_MOMOKAGOLD] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MOMOKAPINK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_ARISUBASE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ARISUBLUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ARISUGOLD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_ARISUPINK] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_AIRIBASE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_AIRIBLUE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_AIRIGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_AIRIPINK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MINAMIBASE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_MINAMIBLUE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MINAMIGOLD] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_MINAMIPINK] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_ANASTASIABASE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_ANASTASIABLUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_ANASTASIAGOLD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_ANASTASIAPINK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_HIJIRIBASE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_HIJIRIBLUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_HIJIRIGOLD] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_HIJIRIPINK] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_RISABASE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_RISABLUE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_RISAGOLD] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_RISAPINK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SANABASE] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_SANABLUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SANAGOLD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SANAPINK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_DODRIO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SEEL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DEWGONG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_GRIMER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_MUK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SHELLDER] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_GASTLY] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_HAUNTER] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_GENGAR] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_ONIX] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DROWZEE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_HYPNO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_KRABBY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_KINGLER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_VOLTORB] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_EXEGGUTOR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_CUBONE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_MAROWAK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_KOFFING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_WEEZING] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_RHYHORN] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_RHYDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHANSEY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_TANGELA] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_HORSEA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SEADRA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SEAKING] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_STARYU] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_STARMIE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_MR_MIME] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_SCYTHER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_JYNX] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGMAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_PINSIR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_TAUROS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_GYARADOS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_LAPRAS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_DITTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_EEVEE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_VAPOREON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_JOLTEON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_FLAREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_PORYGON] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_OMANYTE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_OMASTAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_KABUTO] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SNORLAX] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_ZAPDOS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_MOLTRES] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_DRATINI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DRAGONITE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_MEWTWO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_MEW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MEGANIUM] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CYNDAQUIL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_QUILAVA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TYPHLOSION] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TOTODILE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_CROCONAW] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SENTRET] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_FURRET] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_LEDYBA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_LEDIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SPINARAK] =
    {
        .size = MON_COORDS_SIZE(56, 24),
        .y_offset = 21,
    },
    [SPECIES_ARIADOS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_CROBAT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_PICHU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_NATU] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_XATU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_MARILL] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_AZUMARILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_POLITOED] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HOPPIP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SKIPLOOM] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_JUMPLUFF] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_AIPOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SUNKERN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_SUNFLORA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_YANMA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_WOOPER] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_QUAGSIRE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_UMBREON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MISDREAVUS] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN] =
    {
        .size = MON_COORDS_SIZE(24, 48),
        .y_offset = 8,
    },
    [SPECIES_WOBBUFFET] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 12,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_GLIGAR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_STEELIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNUBBULL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_GRANBULL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_HERACROSS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SNEASEL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_URSARING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SLUGMA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_SWINUB] =
    {
        .size = MON_COORDS_SIZE(48, 24),
        .y_offset = 21,
    },
    [SPECIES_PILOSWINE] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_REMORAID] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_MANTINE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_KINGDRA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_PHANPY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_DONPHAN] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_PORYGON2] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_TYROGUE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_HITMONTOP] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_ELEKID] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGBY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_BLISSEY] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_RAIKOU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ENTEI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SUICUNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_LARVITAR] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_PUPITAR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_TYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUGIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_HO_OH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CELEBI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_OLD_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_OLD_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TREECKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_GROVYLE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SCEPTILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_TORCHIC] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_COMBUSKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BLAZIKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUDKIP] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_MARSHTOMP] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SWAMPERT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_POOCHYENA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_MIGHTYENA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ZIGZAGOON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_LINOONE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_WURMPLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_SILCOON] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 21,
    },
    [SPECIES_BEAUTIFLY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CASCOON] =
    {
        .size = MON_COORDS_SIZE(56, 24),
        .y_offset = 20,
    },
    [SPECIES_DUSTOX] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 20,
    },
    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SEEDOT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_NINCADA] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 20,
    },
    [SPECIES_NINJASK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SHEDINJA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TAILLOW] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 17,
    },
    [SPECIES_SWELLOW] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_BRELOOM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINDA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_WINGULL] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_PELIPPER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SURSKIT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WAILMER] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 21,
    },
    [SPECIES_WAILORD] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 22,
    },
    [SPECIES_SKITTY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_DELCATTY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_KECLEON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_BALTOY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SABLEYE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_BARBOACH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_WHISCASH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_LUVDISC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_FEEBAS] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_MILOTIC] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_CARVANHA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_SHARPEDO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_MAKUHITA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_NUMEL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 19,
    },
    [SPECIES_SPHEAL] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_SEALEO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WALREIN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_CACNEA] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_SNORUNT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_GLALIE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 12,
    },
    [SPECIES_LUNATONE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_SOLROCK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_AZURILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GRUMPIG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_PLUSLE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MINUN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MAWILE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MEDITITE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 3,
    },
    [SPECIES_SWABLU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_ALTARIA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_WYNAUT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_DUSKULL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_ROSELIA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SLAKING] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_GULPIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SWALOT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_WHISMUR] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_EXPLOUD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_HUNTAIL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },
    [SPECIES_GOREBYSS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_SHUPPET] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_BANETTE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RELICANTH] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_ARON] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_LAIRON] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 17,
    },
    [SPECIES_AGGRON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_CASTFORM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_VOLBEAT] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ILLUMISE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_LILEEP] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CRADILY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_ANORITH] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 23,
    },
    [SPECIES_ARMALDO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_RALTS] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_KIRLIA] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_BAGON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SHELGON] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_SALAMENCE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_BELDUM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_METANG] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 16,
    },
    [SPECIES_METAGROSS] =
    {
        .size = MON_COORDS_SIZE(64, 24),
        .y_offset = 20,
    },
    [SPECIES_REGIROCK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_REGICE] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_REGISTEEL] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },
    [SPECIES_KYOGRE] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 19,
    },
    [SPECIES_GROUDON] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_RAYQUAZA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_LATIOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_DEOXYS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
    },
    [SPECIES_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 7,
    },
    [SPECIES_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 7,
    },
    [SPECIES_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 4,
    },
    [SPECIES_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 10,
    },
    [SPECIES_UNOWN_EMARK] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 6,
    },
    [SPECIES_UNOWN_QMARK] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 6,
    },
};

