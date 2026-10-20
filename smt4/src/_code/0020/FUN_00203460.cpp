#include "common.h"

extern "C" {

typedef struct GameBlock04 {
    /* 0x00000 */ u8 unk00000[0x88];
    /* 0x00088 */ u8 table[1];      /* base of the block's tables (offsets below are from here) */
} GameBlock04;

typedef struct GameDataBlockView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ GameBlock04 *block;
} GameDataBlockView;

extern GameDataBlockView g_gameDataBlocks; /* 0x43e2a8 */

/* Stores the two words in slot `index` (0 or 1) of the block's link table; other indices are ignored. */
void FUN_00203460(u32 index, u32 a, u32 b)
{
    u8 *table;
    u8 *slot;

    if (index == 0 || index == 1) {
        table = g_gameDataBlocks.block->table;
        slot = table + index * 8;
        *(u32 *)(slot + 0x24B2C) = a;
        *(u32 *)(slot + 0x24B30) = b;
    }
}

} /* extern "C" */
