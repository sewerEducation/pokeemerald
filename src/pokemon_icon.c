#include "global.h"
#include "graphics.h"
#include "mail.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "sprite.h"

#define POKE_ICON_BASE_PAL_TAG 56000

#define INVALID_ICON_SPECIES SPECIES_OLD_UNOWN_J // Oddly specific, used when an icon should be a ?. Any of the 'old unown' would work

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u8 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);
static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite);

const u8 *const gMonIconTable[] =
{
    [SPECIES_NONE] = gMonIcon_UzukiBase,
    [SPECIES_UZUKIBASE] = gMonIcon_UzukiBase,
    [SPECIES_UZUKIBLUE] = gMonIcon_UzukiBlue,
    [SPECIES_UZUKIGOLD] = gMonIcon_UzukiGold,
    [SPECIES_UZUKIPINK] = gMonIcon_UzukiPink,
    [SPECIES_RINBASE] = gMonIcon_RinBase,
    [SPECIES_RINBLUE] = gMonIcon_RinBlue,
    [SPECIES_RINGOLD] = gMonIcon_RinGold,
    [SPECIES_RINPINK] = gMonIcon_RinPink,
    [SPECIES_MIOBASE] = gMonIcon_MioBase,
    [SPECIES_MIOBLUE] = gMonIcon_MioBlue,
    [SPECIES_MIOGOLD] = gMonIcon_MioGold,
    [SPECIES_MIOPINK] = gMonIcon_MioPink,
    [SPECIES_MIRIABASE] = gMonIcon_MiriaBase,
    [SPECIES_MIRIABLUE] = gMonIcon_MiriaBlue,
    [SPECIES_MIRIAGOLD] = gMonIcon_MiriaGold,
    [SPECIES_MIRIAPINK] = gMonIcon_MiriaPink,
    [SPECIES_KAORUBASE] = gMonIcon_KaoruBase,
    [SPECIES_KAORUBLUE] = gMonIcon_KaoruBlue,
    [SPECIES_KAORUGOLD] = gMonIcon_KaoruGold,
    [SPECIES_KAORUPINK] = gMonIcon_KaoruPink,
    [SPECIES_RIINABASE] = gMonIcon_RiinaBase,
    [SPECIES_RIINABLUE] = gMonIcon_RiinaBlue,
    [SPECIES_RIINAGOLD] = gMonIcon_RiinaGold,
    [SPECIES_RIINAPINK] = gMonIcon_RiinaPink,
    [SPECIES_NANAMIBASE] = gMonIcon_NanamiBase,
    [SPECIES_NANAMIBLUE] = gMonIcon_NanamiBlue,
    [SPECIES_NANAMIGOLD] = gMonIcon_NanamiGold,
    [SPECIES_NANAMIPINK] = gMonIcon_NanamiPink,
    [SPECIES_ATSUMIBASE] = gMonIcon_AtsumiBase,
    [SPECIES_ATSUMIBLUE] = gMonIcon_AtsumiBlue,
    [SPECIES_ATSUMIGOLD] = gMonIcon_AtsumiGold,
    [SPECIES_ATSUMIPINK] = gMonIcon_AtsumiPink,
    [SPECIES_KOZUEBASE] = gMonIcon_KozueBase,
    [SPECIES_KOZUEBLUE] = gMonIcon_KozueBlue,
    [SPECIES_KOZUEGOLD] = gMonIcon_KozueGold,
    [SPECIES_KOZUEPINK] = gMonIcon_KozuePink,
    [SPECIES_NINABASE] = gMonIcon_NinaBase,
    [SPECIES_NINABLUE] = gMonIcon_NinaBlue,
    [SPECIES_NINAGOLD] = gMonIcon_NinaGold,
    [SPECIES_NINAPINK] = gMonIcon_NinaPink,
    [SPECIES_SACHIKOBASE] = gMonIcon_SachikoBase,
    [SPECIES_SACHIKOBLUE] = gMonIcon_SachikoBlue,
    [SPECIES_SACHIKOGOLD] = gMonIcon_SachikoGold,
    [SPECIES_SACHIKOPINK] = gMonIcon_SachikoPink,
    [SPECIES_LAYLABASE] = gMonIcon_LaylaBase,
    [SPECIES_LAYLABLUE] = gMonIcon_LaylaBlue,
    [SPECIES_LAYLAGOLD] = gMonIcon_LaylaGold,
    [SPECIES_LAYLAPINK] = gMonIcon_LaylaPink,
    [SPECIES_REINABASE] = gMonIcon_ReinaBase,
    [SPECIES_REINABLUE] = gMonIcon_ReinaBlue,
    [SPECIES_REINAGOLD] = gMonIcon_ReinaGold,
    [SPECIES_REINAPINK] = gMonIcon_ReinaPink,
    [SPECIES_MOMOKABASE] = gMonIcon_MomokaBase,
    [SPECIES_MOMOKABLUE] = gMonIcon_MomokaBlue,
    [SPECIES_MOMOKAGOLD] = gMonIcon_MomokaGold,
    [SPECIES_MOMOKAPINK] = gMonIcon_MomokaPink,
    [SPECIES_ARISUBASE] = gMonIcon_ArisuBase,
    [SPECIES_ARISUBLUE] = gMonIcon_ArisuBlue,
    [SPECIES_ARISUGOLD] = gMonIcon_ArisuGold,
    [SPECIES_ARISUPINK] = gMonIcon_ArisuPink,
    [SPECIES_AIRIBASE] = gMonIcon_AiriBase,
    [SPECIES_AIRIBLUE] = gMonIcon_AiriBlue,
    [SPECIES_AIRIGOLD] = gMonIcon_AiriGold,
    [SPECIES_AIRIPINK] = gMonIcon_AiriPink,
    [SPECIES_MINAMIBASE] = gMonIcon_MinamiBase,
    [SPECIES_MINAMIBLUE] = gMonIcon_MinamiBlue,
    [SPECIES_MINAMIGOLD] = gMonIcon_MinamiGold,
    [SPECIES_MINAMIPINK] = gMonIcon_MinamiPink,
    [SPECIES_ANASTASIABASE] = gMonIcon_AnastasiaBase,
    [SPECIES_ANASTASIABLUE] = gMonIcon_AnastasiaBlue,
    [SPECIES_ANASTASIAGOLD] = gMonIcon_AnastasiaGold,
    [SPECIES_ANASTASIAPINK] = gMonIcon_AnastasiaPink,
    [SPECIES_HIJIRIBASE] = gMonIcon_HijiriBase,
    [SPECIES_HIJIRIBLUE] = gMonIcon_HijiriBlue,
    [SPECIES_HIJIRIGOLD] = gMonIcon_HijiriGold,
    [SPECIES_HIJIRIPINK] = gMonIcon_HijiriPink,
    [SPECIES_RISABASE] = gMonIcon_RisaBase,
    [SPECIES_RISABLUE] = gMonIcon_RisaBlue,
    [SPECIES_RISAGOLD] = gMonIcon_RisaGold,
    [SPECIES_RISAPINK] = gMonIcon_RisaPink,
    [SPECIES_SANABASE] = gMonIcon_SanaBase,
    [SPECIES_SANABLUE] = gMonIcon_SanaBlue,
    [SPECIES_SANAGOLD] = gMonIcon_SanaGold,
    [SPECIES_SANAPINK] = gMonIcon_SanaPink,
    [SPECIES_DODRIO] = gMonIcon_Dodrio,
    [SPECIES_SEEL] = gMonIcon_Seel,
    [SPECIES_DEWGONG] = gMonIcon_Dewgong,
    [SPECIES_GRIMER] = gMonIcon_Grimer,
    [SPECIES_MUK] = gMonIcon_Muk,
    [SPECIES_SHELLDER] = gMonIcon_Shellder,
    [SPECIES_CLOYSTER] = gMonIcon_Cloyster,
    [SPECIES_GASTLY] = gMonIcon_Gastly,
    [SPECIES_HAUNTER] = gMonIcon_Haunter,
    [SPECIES_GENGAR] = gMonIcon_Gengar,
    [SPECIES_ONIX] = gMonIcon_Onix,
    [SPECIES_DROWZEE] = gMonIcon_Drowzee,
    [SPECIES_HYPNO] = gMonIcon_Hypno,
    [SPECIES_KRABBY] = gMonIcon_Krabby,
    [SPECIES_KINGLER] = gMonIcon_Kingler,
    [SPECIES_VOLTORB] = gMonIcon_Voltorb,
    [SPECIES_ELECTRODE] = gMonIcon_Electrode,
    [SPECIES_EXEGGCUTE] = gMonIcon_Exeggcute,
    [SPECIES_EXEGGUTOR] = gMonIcon_Exeggutor,
    [SPECIES_CUBONE] = gMonIcon_Cubone,
    [SPECIES_MAROWAK] = gMonIcon_Marowak,
    [SPECIES_HITMONLEE] = gMonIcon_Hitmonlee,
    [SPECIES_HITMONCHAN] = gMonIcon_Hitmonchan,
    [SPECIES_LICKITUNG] = gMonIcon_Lickitung,
    [SPECIES_KOFFING] = gMonIcon_Koffing,
    [SPECIES_WEEZING] = gMonIcon_Weezing,
    [SPECIES_RHYHORN] = gMonIcon_Rhyhorn,
    [SPECIES_RHYDON] = gMonIcon_Rhydon,
    [SPECIES_CHANSEY] = gMonIcon_Chansey,
    [SPECIES_TANGELA] = gMonIcon_Tangela,
    [SPECIES_KANGASKHAN] = gMonIcon_Kangaskhan,
    [SPECIES_HORSEA] = gMonIcon_Horsea,
    [SPECIES_SEADRA] = gMonIcon_Seadra,
    [SPECIES_GOLDEEN] = gMonIcon_Goldeen,
    [SPECIES_SEAKING] = gMonIcon_Seaking,
    [SPECIES_STARYU] = gMonIcon_Staryu,
    [SPECIES_STARMIE] = gMonIcon_Starmie,
    [SPECIES_MR_MIME] = gMonIcon_Mrmime,
    [SPECIES_SCYTHER] = gMonIcon_Scyther,
    [SPECIES_JYNX] = gMonIcon_Jynx,
    [SPECIES_ELECTABUZZ] = gMonIcon_Electabuzz,
    [SPECIES_MAGMAR] = gMonIcon_Magmar,
    [SPECIES_PINSIR] = gMonIcon_Pinsir,
    [SPECIES_TAUROS] = gMonIcon_Tauros,
    [SPECIES_MAGIKARP] = gMonIcon_Magikarp,
    [SPECIES_GYARADOS] = gMonIcon_Gyarados,
    [SPECIES_LAPRAS] = gMonIcon_Lapras,
    [SPECIES_DITTO] = gMonIcon_Ditto,
    [SPECIES_EEVEE] = gMonIcon_Eevee,
    [SPECIES_VAPOREON] = gMonIcon_Vaporeon,
    [SPECIES_JOLTEON] = gMonIcon_Jolteon,
    [SPECIES_FLAREON] = gMonIcon_Flareon,
    [SPECIES_PORYGON] = gMonIcon_Porygon,
    [SPECIES_OMANYTE] = gMonIcon_Omanyte,
    [SPECIES_OMASTAR] = gMonIcon_Omastar,
    [SPECIES_KABUTO] = gMonIcon_Kabuto,
    [SPECIES_KABUTOPS] = gMonIcon_Kabutops,
    [SPECIES_AERODACTYL] = gMonIcon_Aerodactyl,
    [SPECIES_SNORLAX] = gMonIcon_Snorlax,
    [SPECIES_ARTICUNO] = gMonIcon_Articuno,
    [SPECIES_ZAPDOS] = gMonIcon_Zapdos,
    [SPECIES_MOLTRES] = gMonIcon_Moltres,
    [SPECIES_DRATINI] = gMonIcon_Dratini,
    [SPECIES_DRAGONAIR] = gMonIcon_Dragonair,
    [SPECIES_DRAGONITE] = gMonIcon_Dragonite,
    [SPECIES_MEWTWO] = gMonIcon_Mewtwo,
    [SPECIES_MEW] = gMonIcon_Mew,
    [SPECIES_CHIKORITA] = gMonIcon_Chikorita,
    [SPECIES_BAYLEEF] = gMonIcon_Bayleef,
    [SPECIES_MEGANIUM] = gMonIcon_Meganium,
    [SPECIES_CYNDAQUIL] = gMonIcon_Cyndaquil,
    [SPECIES_QUILAVA] = gMonIcon_Quilava,
    [SPECIES_TYPHLOSION] = gMonIcon_Typhlosion,
    [SPECIES_TOTODILE] = gMonIcon_Totodile,
    [SPECIES_CROCONAW] = gMonIcon_Croconaw,
    [SPECIES_FERALIGATR] = gMonIcon_Feraligatr,
    [SPECIES_SENTRET] = gMonIcon_Sentret,
    [SPECIES_FURRET] = gMonIcon_Furret,
    [SPECIES_HOOTHOOT] = gMonIcon_Hoothoot,
    [SPECIES_NOCTOWL] = gMonIcon_Noctowl,
    [SPECIES_LEDYBA] = gMonIcon_Ledyba,
    [SPECIES_LEDIAN] = gMonIcon_Ledian,
    [SPECIES_SPINARAK] = gMonIcon_Spinarak,
    [SPECIES_ARIADOS] = gMonIcon_Ariados,
    [SPECIES_CROBAT] = gMonIcon_Crobat,
    [SPECIES_CHINCHOU] = gMonIcon_Chinchou,
    [SPECIES_LANTURN] = gMonIcon_Lanturn,
    [SPECIES_PICHU] = gMonIcon_Pichu,
    [SPECIES_CLEFFA] = gMonIcon_Cleffa,
    [SPECIES_IGGLYBUFF] = gMonIcon_Igglybuff,
    [SPECIES_TOGEPI] = gMonIcon_Togepi,
    [SPECIES_TOGETIC] = gMonIcon_Togetic,
    [SPECIES_NATU] = gMonIcon_Natu,
    [SPECIES_XATU] = gMonIcon_Xatu,
    [SPECIES_MAREEP] = gMonIcon_Mareep,
    [SPECIES_FLAAFFY] = gMonIcon_Flaaffy,
    [SPECIES_AMPHAROS] = gMonIcon_Ampharos,
    [SPECIES_BELLOSSOM] = gMonIcon_Bellossom,
    [SPECIES_MARILL] = gMonIcon_Marill,
    [SPECIES_AZUMARILL] = gMonIcon_Azumarill,
    [SPECIES_SUDOWOODO] = gMonIcon_Sudowoodo,
    [SPECIES_POLITOED] = gMonIcon_Politoed,
    [SPECIES_HOPPIP] = gMonIcon_Hoppip,
    [SPECIES_SKIPLOOM] = gMonIcon_Skiploom,
    [SPECIES_JUMPLUFF] = gMonIcon_Jumpluff,
    [SPECIES_AIPOM] = gMonIcon_Aipom,
    [SPECIES_SUNKERN] = gMonIcon_Sunkern,
    [SPECIES_SUNFLORA] = gMonIcon_Sunflora,
    [SPECIES_YANMA] = gMonIcon_Yanma,
    [SPECIES_WOOPER] = gMonIcon_Wooper,
    [SPECIES_QUAGSIRE] = gMonIcon_Quagsire,
    [SPECIES_ESPEON] = gMonIcon_Espeon,
    [SPECIES_UMBREON] = gMonIcon_Umbreon,
    [SPECIES_MURKROW] = gMonIcon_Murkrow,
    [SPECIES_SLOWKING] = gMonIcon_Slowking,
    [SPECIES_MISDREAVUS] = gMonIcon_Misdreavus,
    [SPECIES_UNOWN] = gMonIcon_UnownA,
    [SPECIES_WOBBUFFET] = gMonIcon_Wobbuffet,
    [SPECIES_GIRAFARIG] = gMonIcon_Girafarig,
    [SPECIES_PINECO] = gMonIcon_Pineco,
    [SPECIES_FORRETRESS] = gMonIcon_Forretress,
    [SPECIES_DUNSPARCE] = gMonIcon_Dunsparce,
    [SPECIES_GLIGAR] = gMonIcon_Gligar,
    [SPECIES_STEELIX] = gMonIcon_Steelix,
    [SPECIES_SNUBBULL] = gMonIcon_Snubbull,
    [SPECIES_GRANBULL] = gMonIcon_Granbull,
    [SPECIES_QWILFISH] = gMonIcon_Qwilfish,
    [SPECIES_SCIZOR] = gMonIcon_Scizor,
    [SPECIES_SHUCKLE] = gMonIcon_Shuckle,
    [SPECIES_HERACROSS] = gMonIcon_Heracross,
    [SPECIES_SNEASEL] = gMonIcon_Sneasel,
    [SPECIES_TEDDIURSA] = gMonIcon_Teddiursa,
    [SPECIES_URSARING] = gMonIcon_Ursaring,
    [SPECIES_SLUGMA] = gMonIcon_Slugma,
    [SPECIES_MAGCARGO] = gMonIcon_Magcargo,
    [SPECIES_SWINUB] = gMonIcon_Swinub,
    [SPECIES_PILOSWINE] = gMonIcon_Piloswine,
    [SPECIES_CORSOLA] = gMonIcon_Corsola,
    [SPECIES_REMORAID] = gMonIcon_Remoraid,
    [SPECIES_OCTILLERY] = gMonIcon_Octillery,
    [SPECIES_DELIBIRD] = gMonIcon_Delibird,
    [SPECIES_MANTINE] = gMonIcon_Mantine,
    [SPECIES_SKARMORY] = gMonIcon_Skarmory,
    [SPECIES_HOUNDOUR] = gMonIcon_Houndour,
    [SPECIES_HOUNDOOM] = gMonIcon_Houndoom,
    [SPECIES_KINGDRA] = gMonIcon_Kingdra,
    [SPECIES_PHANPY] = gMonIcon_Phanpy,
    [SPECIES_DONPHAN] = gMonIcon_Donphan,
    [SPECIES_PORYGON2] = gMonIcon_Porygon2,
    [SPECIES_STANTLER] = gMonIcon_Stantler,
    [SPECIES_SMEARGLE] = gMonIcon_Smeargle,
    [SPECIES_TYROGUE] = gMonIcon_Tyrogue,
    [SPECIES_HITMONTOP] = gMonIcon_Hitmontop,
    [SPECIES_SMOOCHUM] = gMonIcon_Smoochum,
    [SPECIES_ELEKID] = gMonIcon_Elekid,
    [SPECIES_MAGBY] = gMonIcon_Magby,
    [SPECIES_MILTANK] = gMonIcon_Miltank,
    [SPECIES_BLISSEY] = gMonIcon_Blissey,
    [SPECIES_RAIKOU] = gMonIcon_Raikou,
    [SPECIES_ENTEI] = gMonIcon_Entei,
    [SPECIES_SUICUNE] = gMonIcon_Suicune,
    [SPECIES_LARVITAR] = gMonIcon_Larvitar,
    [SPECIES_PUPITAR] = gMonIcon_Pupitar,
    [SPECIES_TYRANITAR] = gMonIcon_Tyranitar,
    [SPECIES_LUGIA] = gMonIcon_Lugia,
    [SPECIES_HO_OH] = gMonIcon_HoOh,
    [SPECIES_CELEBI] = gMonIcon_Celebi,
    [SPECIES_OLD_UNOWN_B] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_C] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_D] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_E] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_F] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_G] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_H] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_I] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_J] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_K] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_L] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_M] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_N] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_O] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_P] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Q] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_R] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_S] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_T] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_U] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_V] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_W] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_X] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Y] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Z] = gMonIcon_QuestionMark,
    [SPECIES_TREECKO] = gMonIcon_Treecko,
    [SPECIES_GROVYLE] = gMonIcon_Grovyle,
    [SPECIES_SCEPTILE] = gMonIcon_Sceptile,
    [SPECIES_TORCHIC] = gMonIcon_Torchic,
    [SPECIES_COMBUSKEN] = gMonIcon_Combusken,
    [SPECIES_BLAZIKEN] = gMonIcon_Blaziken,
    [SPECIES_MUDKIP] = gMonIcon_Mudkip,
    [SPECIES_MARSHTOMP] = gMonIcon_Marshtomp,
    [SPECIES_SWAMPERT] = gMonIcon_Swampert,
    [SPECIES_POOCHYENA] = gMonIcon_Poochyena,
    [SPECIES_MIGHTYENA] = gMonIcon_Mightyena,
    [SPECIES_ZIGZAGOON] = gMonIcon_Zigzagoon,
    [SPECIES_LINOONE] = gMonIcon_Linoone,
    [SPECIES_WURMPLE] = gMonIcon_Wurmple,
    [SPECIES_SILCOON] = gMonIcon_Silcoon,
    [SPECIES_BEAUTIFLY] = gMonIcon_Beautifly,
    [SPECIES_CASCOON] = gMonIcon_Cascoon,
    [SPECIES_DUSTOX] = gMonIcon_Dustox,
    [SPECIES_LOTAD] = gMonIcon_Lotad,
    [SPECIES_LOMBRE] = gMonIcon_Lombre,
    [SPECIES_LUDICOLO] = gMonIcon_Ludicolo,
    [SPECIES_SEEDOT] = gMonIcon_Seedot,
    [SPECIES_NUZLEAF] = gMonIcon_Nuzleaf,
    [SPECIES_SHIFTRY] = gMonIcon_Shiftry,
    [SPECIES_NINCADA] = gMonIcon_Nincada,
    [SPECIES_NINJASK] = gMonIcon_Ninjask,
    [SPECIES_SHEDINJA] = gMonIcon_Shedinja,
    [SPECIES_TAILLOW] = gMonIcon_Taillow,
    [SPECIES_SWELLOW] = gMonIcon_Swellow,
    [SPECIES_SHROOMISH] = gMonIcon_Shroomish,
    [SPECIES_BRELOOM] = gMonIcon_Breloom,
    [SPECIES_SPINDA] = gMonIcon_Spinda,
    [SPECIES_WINGULL] = gMonIcon_Wingull,
    [SPECIES_PELIPPER] = gMonIcon_Pelipper,
    [SPECIES_SURSKIT] = gMonIcon_Surskit,
    [SPECIES_MASQUERAIN] = gMonIcon_Masquerain,
    [SPECIES_WAILMER] = gMonIcon_Wailmer,
    [SPECIES_WAILORD] = gMonIcon_Wailord,
    [SPECIES_SKITTY] = gMonIcon_Skitty,
    [SPECIES_DELCATTY] = gMonIcon_Delcatty,
    [SPECIES_KECLEON] = gMonIcon_Kecleon,
    [SPECIES_BALTOY] = gMonIcon_Baltoy,
    [SPECIES_CLAYDOL] = gMonIcon_Claydol,
    [SPECIES_NOSEPASS] = gMonIcon_Nosepass,
    [SPECIES_TORKOAL] = gMonIcon_Torkoal,
    [SPECIES_SABLEYE] = gMonIcon_Sableye,
    [SPECIES_BARBOACH] = gMonIcon_Barboach,
    [SPECIES_WHISCASH] = gMonIcon_Whiscash,
    [SPECIES_LUVDISC] = gMonIcon_Luvdisc,
    [SPECIES_CORPHISH] = gMonIcon_Corphish,
    [SPECIES_CRAWDAUNT] = gMonIcon_Crawdaunt,
    [SPECIES_FEEBAS] = gMonIcon_Feebas,
    [SPECIES_MILOTIC] = gMonIcon_Milotic,
    [SPECIES_CARVANHA] = gMonIcon_Carvanha,
    [SPECIES_SHARPEDO] = gMonIcon_Sharpedo,
    [SPECIES_TRAPINCH] = gMonIcon_Trapinch,
    [SPECIES_VIBRAVA] = gMonIcon_Vibrava,
    [SPECIES_FLYGON] = gMonIcon_Flygon,
    [SPECIES_MAKUHITA] = gMonIcon_Makuhita,
    [SPECIES_HARIYAMA] = gMonIcon_Hariyama,
    [SPECIES_ELECTRIKE] = gMonIcon_Electrike,
    [SPECIES_MANECTRIC] = gMonIcon_Manectric,
    [SPECIES_NUMEL] = gMonIcon_Numel,
    [SPECIES_CAMERUPT] = gMonIcon_Camerupt,
    [SPECIES_SPHEAL] = gMonIcon_Spheal,
    [SPECIES_SEALEO] = gMonIcon_Sealeo,
    [SPECIES_WALREIN] = gMonIcon_Walrein,
    [SPECIES_CACNEA] = gMonIcon_Cacnea,
    [SPECIES_CACTURNE] = gMonIcon_Cacturne,
    [SPECIES_SNORUNT] = gMonIcon_Snorunt,
    [SPECIES_GLALIE] = gMonIcon_Glalie,
    [SPECIES_LUNATONE] = gMonIcon_Lunatone,
    [SPECIES_SOLROCK] = gMonIcon_Solrock,
    [SPECIES_AZURILL] = gMonIcon_Azurill,
    [SPECIES_SPOINK] = gMonIcon_Spoink,
    [SPECIES_GRUMPIG] = gMonIcon_Grumpig,
    [SPECIES_PLUSLE] = gMonIcon_Plusle,
    [SPECIES_MINUN] = gMonIcon_Minun,
    [SPECIES_MAWILE] = gMonIcon_Mawile,
    [SPECIES_MEDITITE] = gMonIcon_Meditite,
    [SPECIES_MEDICHAM] = gMonIcon_Medicham,
    [SPECIES_SWABLU] = gMonIcon_Swablu,
    [SPECIES_ALTARIA] = gMonIcon_Altaria,
    [SPECIES_WYNAUT] = gMonIcon_Wynaut,
    [SPECIES_DUSKULL] = gMonIcon_Duskull,
    [SPECIES_DUSCLOPS] = gMonIcon_Dusclops,
    [SPECIES_ROSELIA] = gMonIcon_Roselia,
    [SPECIES_SLAKOTH] = gMonIcon_Slakoth,
    [SPECIES_VIGOROTH] = gMonIcon_Vigoroth,
    [SPECIES_SLAKING] = gMonIcon_Slaking,
    [SPECIES_GULPIN] = gMonIcon_Gulpin,
    [SPECIES_SWALOT] = gMonIcon_Swalot,
    [SPECIES_TROPIUS] = gMonIcon_Tropius,
    [SPECIES_WHISMUR] = gMonIcon_Whismur,
    [SPECIES_LOUDRED] = gMonIcon_Loudred,
    [SPECIES_EXPLOUD] = gMonIcon_Exploud,
    [SPECIES_CLAMPERL] = gMonIcon_Clamperl,
    [SPECIES_HUNTAIL] = gMonIcon_Huntail,
    [SPECIES_GOREBYSS] = gMonIcon_Gorebyss,
    [SPECIES_ABSOL] = gMonIcon_Absol,
    [SPECIES_SHUPPET] = gMonIcon_Shuppet,
    [SPECIES_BANETTE] = gMonIcon_Banette,
    [SPECIES_SEVIPER] = gMonIcon_Seviper,
    [SPECIES_ZANGOOSE] = gMonIcon_Zangoose,
    [SPECIES_RELICANTH] = gMonIcon_Relicanth,
    [SPECIES_ARON] = gMonIcon_Aron,
    [SPECIES_LAIRON] = gMonIcon_Lairon,
    [SPECIES_AGGRON] = gMonIcon_Aggron,
    [SPECIES_CASTFORM] = gMonIcon_Castform,
    [SPECIES_VOLBEAT] = gMonIcon_Volbeat,
    [SPECIES_ILLUMISE] = gMonIcon_Illumise,
    [SPECIES_LILEEP] = gMonIcon_Lileep,
    [SPECIES_CRADILY] = gMonIcon_Cradily,
    [SPECIES_ANORITH] = gMonIcon_Anorith,
    [SPECIES_ARMALDO] = gMonIcon_Armaldo,
    [SPECIES_RALTS] = gMonIcon_Ralts,
    [SPECIES_KIRLIA] = gMonIcon_Kirlia,
    [SPECIES_GARDEVOIR] = gMonIcon_Gardevoir,
    [SPECIES_BAGON] = gMonIcon_Bagon,
    [SPECIES_SHELGON] = gMonIcon_Shelgon,
    [SPECIES_SALAMENCE] = gMonIcon_Salamence,
    [SPECIES_BELDUM] = gMonIcon_Beldum,
    [SPECIES_METANG] = gMonIcon_Metang,
    [SPECIES_METAGROSS] = gMonIcon_Metagross,
    [SPECIES_REGIROCK] = gMonIcon_Regirock,
    [SPECIES_REGICE] = gMonIcon_Regice,
    [SPECIES_REGISTEEL] = gMonIcon_Registeel,
    [SPECIES_KYOGRE] = gMonIcon_Kyogre,
    [SPECIES_GROUDON] = gMonIcon_Groudon,
    [SPECIES_RAYQUAZA] = gMonIcon_Rayquaza,
    [SPECIES_LATIAS] = gMonIcon_Latias,
    [SPECIES_LATIOS] = gMonIcon_Latios,
    [SPECIES_JIRACHI] = gMonIcon_Jirachi,
    [SPECIES_DEOXYS] = gMonIcon_Deoxys,
    [SPECIES_CHIMECHO] = gMonIcon_Chimecho,
    [SPECIES_EGG] = gMonIcon_Egg,
    [SPECIES_UNOWN_B] = gMonIcon_UnownB,
    [SPECIES_UNOWN_C] = gMonIcon_UnownC,
    [SPECIES_UNOWN_D] = gMonIcon_UnownD,
    [SPECIES_UNOWN_E] = gMonIcon_UnownE,
    [SPECIES_UNOWN_F] = gMonIcon_UnownF,
    [SPECIES_UNOWN_G] = gMonIcon_UnownG,
    [SPECIES_UNOWN_H] = gMonIcon_UnownH,
    [SPECIES_UNOWN_I] = gMonIcon_UnownI,
    [SPECIES_UNOWN_J] = gMonIcon_UnownJ,
    [SPECIES_UNOWN_K] = gMonIcon_UnownK,
    [SPECIES_UNOWN_L] = gMonIcon_UnownL,
    [SPECIES_UNOWN_M] = gMonIcon_UnownM,
    [SPECIES_UNOWN_N] = gMonIcon_UnownN,
    [SPECIES_UNOWN_O] = gMonIcon_UnownO,
    [SPECIES_UNOWN_P] = gMonIcon_UnownP,
    [SPECIES_UNOWN_Q] = gMonIcon_UnownQ,
    [SPECIES_UNOWN_R] = gMonIcon_UnownR,
    [SPECIES_UNOWN_S] = gMonIcon_UnownS,
    [SPECIES_UNOWN_T] = gMonIcon_UnownT,
    [SPECIES_UNOWN_U] = gMonIcon_UnownU,
    [SPECIES_UNOWN_V] = gMonIcon_UnownV,
    [SPECIES_UNOWN_W] = gMonIcon_UnownW,
    [SPECIES_UNOWN_X] = gMonIcon_UnownX,
    [SPECIES_UNOWN_Y] = gMonIcon_UnownY,
    [SPECIES_UNOWN_Z] = gMonIcon_UnownZ,
    [SPECIES_UNOWN_EMARK] = gMonIcon_UnownExclamationMark,
    [SPECIES_UNOWN_QMARK] = gMonIcon_UnownQuestionMark,
};

const u8 gMonIconPaletteIndices[] =
{
    [SPECIES_NONE] = 0,
    [SPECIES_UZUKIBASE] = 0,
    [SPECIES_UZUKIBLUE] = 0,
    [SPECIES_UZUKIGOLD] = 0,
    [SPECIES_UZUKIPINK] = 0,
    [SPECIES_RINBASE] = 0,
    [SPECIES_RINBLUE] = 0,
    [SPECIES_RINGOLD] = 0,
    [SPECIES_RINPINK] = 0,
    [SPECIES_MIOBASE] = 0,
    [SPECIES_MIOBLUE] = 0,
    [SPECIES_MIOGOLD] = 0,
    [SPECIES_MIOPINK] = 0,
    [SPECIES_MIRIABASE] = 0,
    [SPECIES_MIRIABLUE] = 0,
    [SPECIES_MIRIAGOLD] = 0,
    [SPECIES_MIRIAPINK] = 0,
    [SPECIES_KAORUBASE] = 0,
    [SPECIES_KAORUBLUE] = 0,
    [SPECIES_KAORUGOLD] = 0,
    [SPECIES_KAORUPINK] = 0,
    [SPECIES_RIINABASE] = 0,
    [SPECIES_RIINABLUE] = 0,
    [SPECIES_RIINAGOLD] = 0,
    [SPECIES_RIINAPINK] = 0,
    [SPECIES_NANAMIBASE] = 0,
    [SPECIES_NANAMIBLUE] = 0,
    [SPECIES_NANAMIGOLD] = 0,
    [SPECIES_NANAMIPINK] = 0,
    [SPECIES_ATSUMIBASE] = 0,
    [SPECIES_ATSUMIBLUE] = 0,
    [SPECIES_ATSUMIGOLD] = 0,
    [SPECIES_ATSUMIPINK] = 0,
    [SPECIES_KOZUEBASE] = 0,
    [SPECIES_KOZUEBLUE] = 0,
    [SPECIES_KOZUEGOLD] = 0,
    [SPECIES_KOZUEPINK] = 0,
    [SPECIES_NINABASE] = 0,
    [SPECIES_NINABLUE] = 0,
    [SPECIES_NINAGOLD] = 0,
    [SPECIES_NINAPINK] = 0,
    [SPECIES_SACHIKOBASE] = 0,
    [SPECIES_SACHIKOBLUE] = 0,
    [SPECIES_SACHIKOGOLD] = 0,
    [SPECIES_SACHIKOPINK] = 0,
    [SPECIES_LAYLABASE] = 0,
    [SPECIES_LAYLABLUE] = 0,
    [SPECIES_LAYLAGOLD] = 0,
    [SPECIES_LAYLAPINK] = 0,
    [SPECIES_REINABASE] = 0,
    [SPECIES_REINABLUE] = 0,
    [SPECIES_REINAGOLD] = 0,
    [SPECIES_REINAPINK] = 0,
    [SPECIES_MOMOKABASE] = 0,
    [SPECIES_MOMOKABLUE] = 0,
    [SPECIES_MOMOKAGOLD] = 0,
    [SPECIES_MOMOKAPINK] = 0,
    [SPECIES_ARISUBASE] = 0,
    [SPECIES_ARISUBLUE] = 0,
    [SPECIES_ARISUGOLD] = 0,
    [SPECIES_ARISUPINK] = 0,
    [SPECIES_AIRIBASE] = 0,
    [SPECIES_AIRIBLUE] = 0,
    [SPECIES_AIRIGOLD] = 0,
    [SPECIES_AIRIPINK] = 0,
    [SPECIES_MINAMIBASE] = 0,
    [SPECIES_MINAMIBLUE] = 0,
    [SPECIES_MINAMIGOLD] = 0,
    [SPECIES_MINAMIPINK] = 0,
    [SPECIES_ANASTASIABASE] = 0,
    [SPECIES_ANASTASIABLUE] = 0,
    [SPECIES_ANASTASIAGOLD] = 0,
    [SPECIES_ANASTASIAPINK] = 0,
    [SPECIES_HIJIRIBASE] = 0,
    [SPECIES_HIJIRIBLUE] = 0,
    [SPECIES_HIJIRIGOLD] = 0,
    [SPECIES_HIJIRIPINK] = 0,
    [SPECIES_RISABASE] = 0,
    [SPECIES_RISABLUE] = 0,
    [SPECIES_RISAGOLD] = 0,
    [SPECIES_RISAPINK] = 0,
    [SPECIES_SANABASE] = 0,
    [SPECIES_SANABLUE] = 0,
    [SPECIES_SANAGOLD] = 0,
    [SPECIES_SANAPINK] = 0,
    [SPECIES_DODRIO] = 0,
    [SPECIES_SEEL] = 0,
    [SPECIES_DEWGONG] = 0,
    [SPECIES_GRIMER] = 0,
    [SPECIES_MUK] = 0,
    [SPECIES_SHELLDER] = 0,
    [SPECIES_CLOYSTER] = 0,
    [SPECIES_GASTLY] = 0,
    [SPECIES_HAUNTER] = 0,
    [SPECIES_GENGAR] = 0,
    [SPECIES_ONIX] = 0,
    [SPECIES_DROWZEE] = 0,
    [SPECIES_HYPNO] = 0,
    [SPECIES_KRABBY] = 0,
    [SPECIES_KINGLER] = 0,
    [SPECIES_VOLTORB] = 0,
    [SPECIES_ELECTRODE] = 0,
    [SPECIES_EXEGGCUTE] = 0,
    [SPECIES_EXEGGUTOR] = 0,
    [SPECIES_CUBONE] = 0,
    [SPECIES_MAROWAK] = 0,
    [SPECIES_HITMONLEE] = 0,
    [SPECIES_HITMONCHAN] = 0,
    [SPECIES_LICKITUNG] = 0,
    [SPECIES_KOFFING] = 0,
    [SPECIES_WEEZING] = 0,
    [SPECIES_RHYHORN] = 0,
    [SPECIES_RHYDON] = 0,
    [SPECIES_CHANSEY] = 0,
    [SPECIES_TANGELA] = 0,
    [SPECIES_KANGASKHAN] = 0,
    [SPECIES_HORSEA] = 0,
    [SPECIES_SEADRA] = 0,
    [SPECIES_GOLDEEN] = 0,
    [SPECIES_SEAKING] = 0,
    [SPECIES_STARYU] = 0,
    [SPECIES_STARMIE] = 0,
    [SPECIES_MR_MIME] = 0,
    [SPECIES_SCYTHER] = 0,
    [SPECIES_JYNX] = 0,
    [SPECIES_ELECTABUZZ] = 0,
    [SPECIES_MAGMAR] = 0,
    [SPECIES_PINSIR] = 0,
    [SPECIES_TAUROS] = 0,
    [SPECIES_MAGIKARP] = 0,
    [SPECIES_GYARADOS] = 0,
    [SPECIES_LAPRAS] = 0,
    [SPECIES_DITTO] = 0,
    [SPECIES_EEVEE] = 0,
    [SPECIES_VAPOREON] = 0,
    [SPECIES_JOLTEON] = 0,
    [SPECIES_FLAREON] = 0,
    [SPECIES_PORYGON] = 0,
    [SPECIES_OMANYTE] = 0,
    [SPECIES_OMASTAR] = 0,
    [SPECIES_KABUTO] = 0,
    [SPECIES_KABUTOPS] = 0,
    [SPECIES_AERODACTYL] = 0,
    [SPECIES_SNORLAX] = 0,
    [SPECIES_ARTICUNO] = 0,
    [SPECIES_ZAPDOS] = 0,
    [SPECIES_MOLTRES] = 0,
    [SPECIES_DRATINI] = 0,
    [SPECIES_DRAGONAIR] = 0,
    [SPECIES_DRAGONITE] = 0,
    [SPECIES_MEWTWO] = 0,
    [SPECIES_MEW] = 0,
    [SPECIES_CHIKORITA] = 0,
    [SPECIES_BAYLEEF] = 0,
    [SPECIES_MEGANIUM] = 0,
    [SPECIES_CYNDAQUIL] = 0,
    [SPECIES_QUILAVA] = 0,
    [SPECIES_TYPHLOSION] = 0,
    [SPECIES_TOTODILE] = 0,
    [SPECIES_CROCONAW] = 0,
    [SPECIES_FERALIGATR] = 0,
    [SPECIES_SENTRET] = 0,
    [SPECIES_FURRET] = 0,
    [SPECIES_HOOTHOOT] = 0,
    [SPECIES_NOCTOWL] = 0,
    [SPECIES_LEDYBA] = 0,
    [SPECIES_LEDIAN] = 0,
    [SPECIES_SPINARAK] = 0,
    [SPECIES_ARIADOS] = 0,
    [SPECIES_CROBAT] = 0,
    [SPECIES_CHINCHOU] = 0,
    [SPECIES_LANTURN] = 0,
    [SPECIES_PICHU] = 0,
    [SPECIES_CLEFFA] = 0,
    [SPECIES_IGGLYBUFF] = 0,
    [SPECIES_TOGEPI] = 0,
    [SPECIES_TOGETIC] = 0,
    [SPECIES_NATU] = 0,
    [SPECIES_XATU] = 0,
    [SPECIES_MAREEP] = 0,
    [SPECIES_FLAAFFY] = 0,
    [SPECIES_AMPHAROS] = 0,
    [SPECIES_BELLOSSOM] = 0,
    [SPECIES_MARILL] = 0,
    [SPECIES_AZUMARILL] = 0,
    [SPECIES_SUDOWOODO] = 0,
    [SPECIES_POLITOED] = 0,
    [SPECIES_HOPPIP] = 0,
    [SPECIES_SKIPLOOM] = 0,
    [SPECIES_JUMPLUFF] = 0,
    [SPECIES_AIPOM] = 0,
    [SPECIES_SUNKERN] = 0,
    [SPECIES_SUNFLORA] = 0,
    [SPECIES_YANMA] = 0,
    [SPECIES_WOOPER] = 0,
    [SPECIES_QUAGSIRE] = 0,
    [SPECIES_ESPEON] = 0,
    [SPECIES_UMBREON] = 0,
    [SPECIES_MURKROW] = 0,
    [SPECIES_SLOWKING] = 0,
    [SPECIES_MISDREAVUS] = 0,
    [SPECIES_UNOWN] = 0,
    [SPECIES_WOBBUFFET] = 0,
    [SPECIES_GIRAFARIG] = 0,
    [SPECIES_PINECO] = 0,
    [SPECIES_FORRETRESS] = 0,
    [SPECIES_DUNSPARCE] = 0,
    [SPECIES_GLIGAR] = 0,
    [SPECIES_STEELIX] = 0,
    [SPECIES_SNUBBULL] = 0,
    [SPECIES_GRANBULL] = 0,
    [SPECIES_QWILFISH] = 0,
    [SPECIES_SCIZOR] = 0,
    [SPECIES_SHUCKLE] = 0,
    [SPECIES_HERACROSS] = 0,
    [SPECIES_SNEASEL] = 0,
    [SPECIES_TEDDIURSA] = 0,
    [SPECIES_URSARING] = 0,
    [SPECIES_SLUGMA] = 0,
    [SPECIES_MAGCARGO] = 0,
    [SPECIES_SWINUB] = 0,
    [SPECIES_PILOSWINE] = 0,
    [SPECIES_CORSOLA] = 0,
    [SPECIES_REMORAID] = 0,
    [SPECIES_OCTILLERY] = 0,
    [SPECIES_DELIBIRD] = 0,
    [SPECIES_MANTINE] = 0,
    [SPECIES_SKARMORY] = 0,
    [SPECIES_HOUNDOUR] = 0,
    [SPECIES_HOUNDOOM] = 0,
    [SPECIES_KINGDRA] = 0,
    [SPECIES_PHANPY] = 0,
    [SPECIES_DONPHAN] = 0,
    [SPECIES_PORYGON2] = 0,
    [SPECIES_STANTLER] = 0,
    [SPECIES_SMEARGLE] = 0,
    [SPECIES_TYROGUE] = 0,
    [SPECIES_HITMONTOP] = 0,
    [SPECIES_SMOOCHUM] = 0,
    [SPECIES_ELEKID] = 0,
    [SPECIES_MAGBY] = 0,
    [SPECIES_MILTANK] = 0,
    [SPECIES_BLISSEY] = 0,
    [SPECIES_RAIKOU] = 0,
    [SPECIES_ENTEI] = 0,
    [SPECIES_SUICUNE] = 0,
    [SPECIES_LARVITAR] = 0,
    [SPECIES_PUPITAR] = 0,
    [SPECIES_TYRANITAR] = 0,
    [SPECIES_LUGIA] = 0,
    [SPECIES_HO_OH] = 0,
    [SPECIES_CELEBI] = 0,
    [SPECIES_OLD_UNOWN_B] = 0,
    [SPECIES_OLD_UNOWN_C] = 0,
    [SPECIES_OLD_UNOWN_D] = 0,
    [SPECIES_OLD_UNOWN_E] = 0,
    [SPECIES_OLD_UNOWN_F] = 0,
    [SPECIES_OLD_UNOWN_G] = 0,
    [SPECIES_OLD_UNOWN_H] = 0,
    [SPECIES_OLD_UNOWN_I] = 0,
    [SPECIES_OLD_UNOWN_J] = 0,
    [SPECIES_OLD_UNOWN_K] = 0,
    [SPECIES_OLD_UNOWN_L] = 0,
    [SPECIES_OLD_UNOWN_M] = 0,
    [SPECIES_OLD_UNOWN_N] = 0,
    [SPECIES_OLD_UNOWN_O] = 0,
    [SPECIES_OLD_UNOWN_P] = 0,
    [SPECIES_OLD_UNOWN_Q] = 0,
    [SPECIES_OLD_UNOWN_R] = 0,
    [SPECIES_OLD_UNOWN_S] = 0,
    [SPECIES_OLD_UNOWN_T] = 0,
    [SPECIES_OLD_UNOWN_U] = 0,
    [SPECIES_OLD_UNOWN_V] = 0,
    [SPECIES_OLD_UNOWN_W] = 0,
    [SPECIES_OLD_UNOWN_X] = 0,
    [SPECIES_OLD_UNOWN_Y] = 0,
    [SPECIES_OLD_UNOWN_Z] = 0,
    [SPECIES_TREECKO] = 0,
    [SPECIES_GROVYLE] = 0,
    [SPECIES_SCEPTILE] = 0,
    [SPECIES_TORCHIC] = 0,
    [SPECIES_COMBUSKEN] = 0,
    [SPECIES_BLAZIKEN] = 0,
    [SPECIES_MUDKIP] = 0,
    [SPECIES_MARSHTOMP] = 0,
    [SPECIES_SWAMPERT] = 0,
    [SPECIES_POOCHYENA] = 0,
    [SPECIES_MIGHTYENA] = 0,
    [SPECIES_ZIGZAGOON] = 0,
    [SPECIES_LINOONE] = 0,
    [SPECIES_WURMPLE] = 0,
    [SPECIES_SILCOON] = 0,
    [SPECIES_BEAUTIFLY] = 0,
    [SPECIES_CASCOON] = 0,
    [SPECIES_DUSTOX] = 0,
    [SPECIES_LOTAD] = 0,
    [SPECIES_LOMBRE] = 0,
    [SPECIES_LUDICOLO] = 0,
    [SPECIES_SEEDOT] = 0,
    [SPECIES_NUZLEAF] = 0,
    [SPECIES_SHIFTRY] = 0,
    [SPECIES_NINCADA] = 0,
    [SPECIES_NINJASK] = 0,
    [SPECIES_SHEDINJA] = 0,
    [SPECIES_TAILLOW] = 0,
    [SPECIES_SWELLOW] = 0,
    [SPECIES_SHROOMISH] = 0,
    [SPECIES_BRELOOM] = 0,
    [SPECIES_SPINDA] = 0,
    [SPECIES_WINGULL] = 0,
    [SPECIES_PELIPPER] = 0,
    [SPECIES_SURSKIT] = 0,
    [SPECIES_MASQUERAIN] = 0,
    [SPECIES_WAILMER] = 0,
    [SPECIES_WAILORD] = 0,
    [SPECIES_SKITTY] = 0,
    [SPECIES_DELCATTY] = 0,
    [SPECIES_KECLEON] = 0,
    [SPECIES_BALTOY] = 0,
    [SPECIES_CLAYDOL] = 0,
    [SPECIES_NOSEPASS] = 0,
    [SPECIES_TORKOAL] = 0,
    [SPECIES_SABLEYE] = 0,
    [SPECIES_BARBOACH] = 0,
    [SPECIES_WHISCASH] = 0,
    [SPECIES_LUVDISC] = 0,
    [SPECIES_CORPHISH] = 0,
    [SPECIES_CRAWDAUNT] = 0,
    [SPECIES_FEEBAS] = 0,
    [SPECIES_MILOTIC] = 0,
    [SPECIES_CARVANHA] = 0,
    [SPECIES_SHARPEDO] = 0,
    [SPECIES_TRAPINCH] = 0,
    [SPECIES_VIBRAVA] = 0,
    [SPECIES_FLYGON] = 0,
    [SPECIES_MAKUHITA] = 0,
    [SPECIES_HARIYAMA] = 0,
    [SPECIES_ELECTRIKE] = 0,
    [SPECIES_MANECTRIC] = 0,
    [SPECIES_NUMEL] = 0,
    [SPECIES_CAMERUPT] = 0,
    [SPECIES_SPHEAL] = 0,
    [SPECIES_SEALEO] = 0,
    [SPECIES_WALREIN] = 0,
    [SPECIES_CACNEA] = 0,
    [SPECIES_CACTURNE] = 0,
    [SPECIES_SNORUNT] = 0,
    [SPECIES_GLALIE] = 0,
    [SPECIES_LUNATONE] = 0,
    [SPECIES_SOLROCK] = 0,
    [SPECIES_AZURILL] = 0,
    [SPECIES_SPOINK] = 0,
    [SPECIES_GRUMPIG] = 0,
    [SPECIES_PLUSLE] = 0,
    [SPECIES_MINUN] = 0,
    [SPECIES_MAWILE] = 0,
    [SPECIES_MEDITITE] = 0,
    [SPECIES_MEDICHAM] = 0,
    [SPECIES_SWABLU] = 0,
    [SPECIES_ALTARIA] = 0,
    [SPECIES_WYNAUT] = 0,
    [SPECIES_DUSKULL] = 0,
    [SPECIES_DUSCLOPS] = 0,
    [SPECIES_ROSELIA] = 0,
    [SPECIES_SLAKOTH] = 0,
    [SPECIES_VIGOROTH] = 0,
    [SPECIES_SLAKING] = 0,
    [SPECIES_GULPIN] = 0,
    [SPECIES_SWALOT] = 0,
    [SPECIES_TROPIUS] = 0,
    [SPECIES_WHISMUR] = 0,
    [SPECIES_LOUDRED] = 0,
    [SPECIES_EXPLOUD] = 0,
    [SPECIES_CLAMPERL] = 0,
    [SPECIES_HUNTAIL] = 0,
    [SPECIES_GOREBYSS] = 0,
    [SPECIES_ABSOL] = 0,
    [SPECIES_SHUPPET] = 0,
    [SPECIES_BANETTE] = 0,
    [SPECIES_SEVIPER] = 0,
    [SPECIES_ZANGOOSE] = 0,
    [SPECIES_RELICANTH] = 0,
    [SPECIES_ARON] = 0,
    [SPECIES_LAIRON] = 0,
    [SPECIES_AGGRON] = 0,
    [SPECIES_CASTFORM] = 0,
    [SPECIES_VOLBEAT] = 0,
    [SPECIES_ILLUMISE] = 0,
    [SPECIES_LILEEP] = 0,
    [SPECIES_CRADILY] = 0,
    [SPECIES_ANORITH] = 0,
    [SPECIES_ARMALDO] = 0,
    [SPECIES_RALTS] = 0,
    [SPECIES_KIRLIA] = 0,
    [SPECIES_GARDEVOIR] = 0,
    [SPECIES_BAGON] = 0,
    [SPECIES_SHELGON] = 0,
    [SPECIES_SALAMENCE] = 0,
    [SPECIES_BELDUM] = 0,
    [SPECIES_METANG] = 0,
    [SPECIES_METAGROSS] = 0,
    [SPECIES_REGIROCK] = 0,
    [SPECIES_REGICE] = 0,
    [SPECIES_REGISTEEL] = 0,
    [SPECIES_KYOGRE] = 0,
    [SPECIES_GROUDON] = 0,
    [SPECIES_RAYQUAZA] = 0,
    [SPECIES_LATIAS] = 0,
    [SPECIES_LATIOS] = 0,
    [SPECIES_JIRACHI] = 0,
    [SPECIES_DEOXYS] = 0,
    [SPECIES_CHIMECHO] = 0,
    [SPECIES_EGG] = 0,
    [SPECIES_UNOWN_B] = 0,
    [SPECIES_UNOWN_C] = 0,
    [SPECIES_UNOWN_D] = 0,
    [SPECIES_UNOWN_E] = 0,
    [SPECIES_UNOWN_F] = 0,
    [SPECIES_UNOWN_G] = 0,
    [SPECIES_UNOWN_H] = 0,
    [SPECIES_UNOWN_I] = 0,
    [SPECIES_UNOWN_J] = 0,
    [SPECIES_UNOWN_K] = 0,
    [SPECIES_UNOWN_L] = 0,
    [SPECIES_UNOWN_M] = 0,
    [SPECIES_UNOWN_N] = 0,
    [SPECIES_UNOWN_O] = 0,
    [SPECIES_UNOWN_P] = 0,
    [SPECIES_UNOWN_Q] = 0,
    [SPECIES_UNOWN_R] = 0,
    [SPECIES_UNOWN_S] = 0,
    [SPECIES_UNOWN_T] = 0,
    [SPECIES_UNOWN_U] = 0,
    [SPECIES_UNOWN_V] = 0,
    [SPECIES_UNOWN_W] = 0,
    [SPECIES_UNOWN_X] = 0,
    [SPECIES_UNOWN_Y] = 0,
    [SPECIES_UNOWN_Z] = 0,
    [SPECIES_UNOWN_EMARK] = 0,
    [SPECIES_UNOWN_QMARK] = 0,
};

const struct SpritePalette gMonIconPaletteTable[] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },

// There are only 3 actual palettes. The following are unused
// and don't point to valid data.
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 },
};

static const struct OamData sMonIconOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

static const u16 sSpriteImageSizes[3][4] =
{
    [ST_OAM_SQUARE] =
    {
        [SPRITE_SIZE(8x8)]   =  8 * 8  / 2,
        [SPRITE_SIZE(16x16)] = 16 * 16 / 2,
        [SPRITE_SIZE(32x32)] = 32 * 32 / 2,
        [SPRITE_SIZE(64x64)] = 64 * 64 / 2,
    },
    [ST_OAM_H_RECTANGLE] =
    {
        [SPRITE_SIZE(16x8)]  = 16 * 8  / 2,
        [SPRITE_SIZE(32x8)]  = 32 * 8  / 2,
        [SPRITE_SIZE(32x16)] = 32 * 16 / 2,
        [SPRITE_SIZE(64x32)] = 64 * 32 / 2,
    },
    [ST_OAM_V_RECTANGLE] =
    {
        [SPRITE_SIZE(8x16)]  =  8 * 16 / 2,
        [SPRITE_SIZE(8x32)]  =  8 * 32 / 2,
        [SPRITE_SIZE(16x32)] = 16 * 32 / 2,
        [SPRITE_SIZE(32x64)] = 32 * 64 / 2,
    },
};

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality, bool32 handleDeoxys)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality, handleDeoxys),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, bool32 handleDeoxys)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = NULL,
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    iconTemplate.image = GetMonIconTiles(species, handleDeoxys);
    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    u16 result;

    if (species == SPECIES_UNOWN)
    {
        u16 letter = GetUnownLetterByPersonality(personality);
        if (letter == 0)
            letter = SPECIES_UNOWN;
        else
            letter += (SPECIES_UNOWN_B - 1);
        result = letter;
    }
    else
    {
        if (species > NUM_SPECIES)
            result = INVALID_ICON_SPECIES;
        else
            result = species;
    }

    return result;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    if (!personality)
        return 0;
    else
        return GET_UNOWN_LETTER(personality);
}

u16 GetIconSpeciesNoPersonality(u16 species)
{
    u16 value;

    if (MailSpeciesToSpecies(species, &value) == SPECIES_UNOWN)
    {
        if (value == 0)
            value += SPECIES_UNOWN;
        else
            value += (SPECIES_UNOWN_B - 1);
        return value;
    }
    else
    {
        if (species > NUM_SPECIES)
            species = INVALID_ICON_SPECIES;
        return GetIconSpecies(species, 0);
    }
}

const u8 *GetMonIconPtr(u16 species, u32 personality, bool32 handleDeoxys)
{
    return GetMonIconTiles(GetIconSpecies(species, personality), handleDeoxys);
}

void FreeAndDestroyMonIconSprite(struct Sprite *sprite)
{
    FreeAndDestroyMonIconSprite_(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

// unused
void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalette(u16 species)
{
    u8 palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

// unused
void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void FreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

const u8 *GetMonIconTiles(u16 species, bool32 handleDeoxys)
{
    const u8 *iconSprite = gMonIconTable[species];
    if (species == SPECIES_DEOXYS && handleDeoxys == TRUE)
    {
        iconSprite = (const u8 *)(0x400 + (u32)iconSprite); // use the specific Deoxys form icon (Speed in this case)
    }
    return iconSprite;
}

void TryLoadAllMonIconPalettesAtOffset(u16 offset)
{
    s32 i;
    const struct SpritePalette* monIconPalettePtr;

    if (offset <= 0xA0)
    {
        monIconPalettePtr = gMonIconPaletteTable;
        for(i = ARRAY_COUNT(gMonIconPaletteTable) - 1; i >= 0; i--)
        {
            LoadPalette(monIconPalettePtr->data, offset, 0x20);
            offset += 0x10;
            monIconPalettePtr++;
        }
    }
}

u8 GetValidMonIconPalIndex(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteIndices[species];
}

u8 GetMonIconPaletteIndexFromSpecies(u16 species)
{
    return gMonIconPaletteIndices[species];
}

const u16 *GetValidMonIconPalettePtr(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = TAG_NONE,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
