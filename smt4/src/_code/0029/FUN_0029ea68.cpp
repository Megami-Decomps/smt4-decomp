/* NON_MATCHING: retail splits the 0xC1F8 item-array offset into two immediate adds and loads the halfword at +0x2E; armcc folds it into a literal-pool register offset. */
#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u8 unk00[0x2E];
    /* 0x2E */ u16 flags;        /* bit 1: item flag */
    /* 0x30 */ u8 unk30[4];
} Item; /* 0x34 bytes */

typedef struct DataBlocks {
    /* 0x0000 */ u8 unk0000[0xC1F8];
    /* 0xC1F8 */ Item items[1];
} DataBlocks;

typedef struct DataBlocksHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ DataBlocks *blocks;
} DataBlocksHolder;

extern DataBlocksHolder g_gameDataBlocks;

/* Returns item `index`'s flag bit 1 (0 for indices above 0x500). */
u32 FUN_0029ea68(u32 index)
{
    u32 result;

    if (index > 0x500) {
        result = 0;
    } else {
        Item *item = &g_gameDataBlocks.blocks->items[index];
        result = (item->flags & 2) >> 1;
    }
    return result;
}

} /* extern "C" */
