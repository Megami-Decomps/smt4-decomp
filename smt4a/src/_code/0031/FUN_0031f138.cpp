#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 bits;  /* bits 2-7: 6-bit value */
    /* 0x38 */ u8 unk38[0x18];
} Entry;

typedef struct Block {
    /* 0x0000 */ u8 unk0000[0x5F0C];
    /* 0x5F0C */ Entry entries[0x501];
} Block;

typedef struct GameDataBlocksView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Block *block;
} GameDataBlocksView;

extern GameDataBlocksView g_gameDataBlocks;

/* Stores a 6-bit value (saturating above 63) in bits 2-7 of entry `index`; returns 0 for an index past the table. */
u32 FUN_0031f138(u32 index, s32 value)
{
    u8 *row;
    Entry *entry;

    if (index > 0x500) {
        return 0;
    }
    row = (u8 *)g_gameDataBlocks.block + index * sizeof(Entry);
    entry = (Entry *)(row + 0x5F0C);
    if (value > 63) {
        entry->bits |= 0xFC;
    } else {
        entry->bits = (entry->bits & ~0xFC) | ((value << 2) & 0xFC);
    }
    return 1;
}

} /* extern "C" */
