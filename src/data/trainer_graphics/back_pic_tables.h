const struct MonCoords gTrainerBackPicCoords[] =
{
    [PRODUCER_BACK_PIC_BRENDAN] = {.size = 8, .y_offset = 4},
    [PRODUCER_BACK_PIC_MAY] = {.size = 8, .y_offset = 4},
    [PRODUCER_BACK_PIC_RED] = {.size = 8, .y_offset = 5},
    [PRODUCER_BACK_PIC_LEAF] = {.size = 8, .y_offset = 5},
    [PRODUCER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = {.size = 8, .y_offset = 4},
    [PRODUCER_BACK_PIC_RUBY_SAPPHIRE_MAY] = {.size = 8, .y_offset = 4},
    [PRODUCER_BACK_PIC_WALLY] = {.size = 8, .y_offset = 4},
    [PRODUCER_BACK_PIC_STEVEN] = {.size = 8, .y_offset = 4},
};

// this table goes functionally unused, since none of these pics are compressed
// and the place they would get extracted to gets overwritten later anyway
// the casts are so they'll play nice with the strict struct definition
#define PRODUCER_BACK_SPRITE(trainerPic, sprite, size) [PRODUCER_BACK_PIC_##trainerPic] = {(const u32 *)sprite, size, PRODUCER_BACK_PIC_##trainerPic}

const struct CompressedSpriteSheet gTrainerBackPicTable[] =
{
    PRODUCER_BACK_SPRITE(BRENDAN, gTrainerBackPic_Brendan, 0x2000),
    PRODUCER_BACK_SPRITE(MAY, gTrainerBackPic_May, 0x2000),
    PRODUCER_BACK_SPRITE(RED, gTrainerBackPic_Red, 0x2800),
    PRODUCER_BACK_SPRITE(LEAF, gTrainerBackPic_Leaf, 0x2800),
    PRODUCER_BACK_SPRITE(RUBY_SAPPHIRE_BRENDAN, gTrainerBackPic_RubySapphireBrendan, 0x2000),
    PRODUCER_BACK_SPRITE(RUBY_SAPPHIRE_MAY, gTrainerBackPic_RubySapphireMay, 0x2000),
    PRODUCER_BACK_SPRITE(WALLY, gTrainerBackPic_Wally, 0x2000),
    PRODUCER_BACK_SPRITE(STEVEN, gTrainerBackPic_Steven, 0x2000),
};

#define PRODUCER_BACK_PAL(trainerPic, pal) [PRODUCER_BACK_PIC_##trainerPic] = {pal, PRODUCER_BACK_PIC_##trainerPic}

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
    PRODUCER_BACK_PAL(BRENDAN, gTrainerPalette_Brendan),
    PRODUCER_BACK_PAL(MAY, gTrainerPalette_May),
    PRODUCER_BACK_PAL(RED, gTrainerBackPicPalette_Red),
    PRODUCER_BACK_PAL(LEAF, gTrainerBackPicPalette_Leaf),
    PRODUCER_BACK_PAL(RUBY_SAPPHIRE_BRENDAN, gTrainerPalette_RubySapphireBrendan),
    PRODUCER_BACK_PAL(RUBY_SAPPHIRE_MAY, gTrainerPalette_RubySapphireMay),
    PRODUCER_BACK_PAL(WALLY, gTrainerPalette_Wally),
    PRODUCER_BACK_PAL(STEVEN, gTrainerPalette_Steven),
};
