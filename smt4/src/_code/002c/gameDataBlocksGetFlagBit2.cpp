/* NON_MATCHING: register allocation only: retail loads the data-blocks pointer into r2 and adds 0x88 into r1; built uses r1 for both. */
#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x00000 */ u8 unk00000[0x1EC10];
    /* 0x1EC10 */ u8 flagsA[0x40];
    /* 0x1EC50 */ u8 unk1EC50[0x5F0C];
    /* 0x24B5C */ u8 flagsB[8];
} FlagBlock;

typedef struct DataBlocks {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ FlagBlock flagBlock;
} DataBlocks;

typedef struct DataBlocksHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ DataBlocks *blocks;
} DataBlocksHolder;

extern DataBlocksHolder g_gameDataBlocks;

static __inline u8 *flagByteGet(FlagBlock *block, s32 index)
{
    if (index >= 0x40) {
        return &block->flagsB[index];
    }
    return &block->flagsA[index];
}

/* Returns bit 2 of flag byte `index` (0..0x47), 0 when out of range. */
u32 gameDataBlocksGetFlagBit2(s32 index)
{
    if (index < 0x48) {
        if (index >= 0) {
            FlagBlock *block = &g_gameDataBlocks.blocks->flagBlock;
            u8 *flag = flagByteGet(block, index);

            if (flag != NULL) {
                return (*flag & 4) >> 2;
            }
        }
    }
    return 0;
}

} /* extern "C" */
