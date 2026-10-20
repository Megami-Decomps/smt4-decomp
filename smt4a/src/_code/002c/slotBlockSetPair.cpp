#include "common.h"

extern "C" {

typedef struct SlotPair {
    /* 0x0 */ u32 first;
    /* 0x4 */ u32 second;
} SlotPair;

typedef struct SlotBlock {
    /* 0x00000 */ u8 unk00000[0x27E40];
    /* 0x27E40 */ SlotPair pairs[2];
} SlotBlock;

typedef struct DataBlocks {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ SlotBlock slots;
} DataBlocks;

typedef struct DataBlocksHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ DataBlocks *blocks;
} DataBlocksHolder;

extern DataBlocksHolder g_gameDataBlocks;

static __inline SlotBlock *slotBlockGet(void)
{
    return &g_gameDataBlocks.blocks->slots;
}

/* Stores two words into pair `index` (0 or 1) of the slot block. */
void slotBlockSetPair(u32 index, u32 first, u32 second)
{
    if (index == 0 || index == 1) {
        SlotBlock *block = slotBlockGet();

        block->pairs[index].first = first;
        block->pairs[index].second = second;
    }
}

} /* extern "C" */
