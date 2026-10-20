#include "common.h"

extern "C" {

typedef struct FlagBitBlock {
    /* 0x000 */ u8 unk000[0x784];
    /* 0x784 */ u32 bits[1];   /* bit set, indexed from 0 */
} FlagBitBlock;

FlagBitBlock *gameFlagsGetBlock(void);

/* Sets or clears bit `index` of the bit set. */
void gameFlagsBitSet(s32 index, s32 value)
{
    FlagBitBlock *block = gameFlagsGetBlock();
    s32 word = index / 32;

    if (value != 0) {
        block->bits[word] |= 1 << (index % 32);
    } else {
        block->bits[word] &= ~(1 << (index % 32));
    }
}

} /* extern "C" */
