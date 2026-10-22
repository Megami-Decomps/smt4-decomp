#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0xD4C];
    /* 0xD4C */ u32 words[1];
} FlagBlock;

FlagBlock *gameFlagsGetBlock(void);

/* Sets or clears one bit of the flag word array at 0xD4C in the game flag block. */
void gameFlagSetIndexedBit(s32 flag, s32 value)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 index = flag / 32;
    s32 bit = flag % 32;
    u32 mask = 1 << bit;

    if (value != 0) {
        block->words[index] |= mask;
    } else {
        block->words[index] &= ~mask;
    }
}

} /* extern "C" */
