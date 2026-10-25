#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x50];
} Entry;

typedef struct SaveBlock {
    /* 0x0000 */ u8 unk0000[0x5F0C];
    /* 0x5F0C */ Entry entries[0x501];
} SaveBlock;

typedef struct GameDataBlocks {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SaveBlock *saveBlock;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

void __aeabi_memcpy4(void *dst, void *src, u32 size);

/* Copies entry `index` of the save block's table to `dest`; returns 0 for an out-of-range index. */
u32 gameDataCopySaveEntry(u32 index, void *dest)
{
    SaveBlock *block;
    Entry *entry;

    if (index > 0x500) {
        return 0;
    }
    block = g_gameDataBlocks.saveBlock;
    entry = &block->entries[index];
    __aeabi_memcpy4(dest, entry, 0x50);
    return 1;
}

} /* extern "C" */
