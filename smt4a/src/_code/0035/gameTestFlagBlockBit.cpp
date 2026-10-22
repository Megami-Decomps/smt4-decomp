#include "common.h"

extern "C" {

typedef struct FlagBitBlock {
    /* 0x000 */ u8 unk000[0x1670];
    /* 0x1670 */ u32 bits[1];   /* bit set, indexed from 0 */
} FlagBitBlock;

FlagBitBlock *gameFlagsGetBlock(void);

/* Tests bit `index` of the bit set. */
u8 gameTestFlagBlockBit(s32 index)
{
    FlagBitBlock *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 bit = index % 32;

    return (block->bits[word] & (1 << bit)) != 0;
}

} /* extern "C" */
