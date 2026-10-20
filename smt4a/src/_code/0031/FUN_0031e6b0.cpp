/* Built with -Ospace (see flags_W4Match4b.txt). */
#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x000 */ u8 unk000[0x1F0];
    /* 0x1F0 */ f32 value;
} Inner;

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x5274];
    /* 0x5274 */ Inner inner;
} Table;

typedef struct GameDataBlocksView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Table *table;
} GameDataBlocksView;

extern GameDataBlocksView g_gameDataBlocks;

/* Resets the float at 0x5464 of the game data table to 0. */
void FUN_0031e6b0(void)
{
    Inner *inner = &g_gameDataBlocks.table->inner;
    f32 zero = 0.0f;

    inner->value = zero;
}

} /* extern "C" */
