static const union AnimCmd sAnimCmd_Brendan_1[] =
{
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnimCmd_May_Steven_1[] =
{
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnimCmd_Wally_1[] =
{
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnimCmd_Red_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnimCmd_Leaf_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnimCmd_RubySapphireBrendan_1[] =
{
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnimCmd_RubySapphireMay_1[] =
{
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 24),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(3, 50),
    ANIMCMD_END,
};

static const union AnimCmd *const sBackAnims_Brendan[] =
{
    sAnim_GeneralFrame3,
    sAnimCmd_Brendan_1,
};

static const union AnimCmd *const sBackAnims_May[] =
{
    sAnim_GeneralFrame3,
    sAnimCmd_May_Steven_1,
};

static const union AnimCmd *const sBackAnims_Red[] =
{
    sAnim_GeneralFrame0,
    sAnimCmd_Red_1,
};

static const union AnimCmd *const sBackAnims_Leaf[] =
{
    sAnim_GeneralFrame0,
    sAnimCmd_Leaf_1,
};

static const union AnimCmd *const sBackAnims_RubySapphireBrendan[] =
{
    sAnim_GeneralFrame3,
    sAnimCmd_RubySapphireBrendan_1,
};

static const union AnimCmd *const sBackAnims_RubySapphireMay[] =
{
    sAnim_GeneralFrame3,
    sAnimCmd_RubySapphireMay_1,
};

static const union AnimCmd *const sBackAnims_Wally[] =
{
    sAnim_GeneralFrame3,
    sAnimCmd_Wally_1,
};

static const union AnimCmd *const sBackAnims_Steven[] =
{
    sAnim_GeneralFrame3,
    sAnimCmd_May_Steven_1,
};

const union AnimCmd *const *const gTrainerBackAnimsPtrTable[] =
{
    [PRODUCER_BACK_PIC_BRENDAN] = sBackAnims_Brendan,
    [PRODUCER_BACK_PIC_MAY] = sBackAnims_May,
    [PRODUCER_BACK_PIC_RED] = sBackAnims_Red,
    [PRODUCER_BACK_PIC_LEAF] = sBackAnims_Leaf,
    [PRODUCER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = sBackAnims_RubySapphireBrendan,
    [PRODUCER_BACK_PIC_RUBY_SAPPHIRE_MAY] = sBackAnims_RubySapphireMay,
    [PRODUCER_BACK_PIC_WALLY] = sBackAnims_Wally,
    [PRODUCER_BACK_PIC_STEVEN] = sBackAnims_Steven,
};
