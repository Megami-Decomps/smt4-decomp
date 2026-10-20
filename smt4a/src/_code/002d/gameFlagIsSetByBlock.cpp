#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0x808];
    /* 0x808 */ u32 words[1];  /* one bit per flag */
} FlagBlock;

FlagBlock *gameFlagsGetBlock(void);

/* Returns whether flag `flag` is set. */
u8 gameFlagIsSetByBlock(s32 flag)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 index = flag / 32;
    s32 bit = flag % 32;

    return (block->words[index] & (1 << bit)) != 0;
}

} /* extern "C" */
