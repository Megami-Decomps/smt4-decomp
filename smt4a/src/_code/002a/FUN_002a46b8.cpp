#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00000 */ u8 unk00000[0x27E32];
    /* 0x27E32 */ u8 value;
} Inner;

typedef struct Table {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ Inner inner;
} Table;

typedef struct GameDataBlocksView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Table *table;
} GameDataBlocksView;

extern GameDataBlocksView g_gameDataBlocks;

/* Returns the byte at 0x27E32 of the game data table's block at 0x88. */
u8 FUN_002a46b8(void)
{
    Inner *inner = &g_gameDataBlocks.table->inner;

    return inner->value;
}

} /* extern "C" */
