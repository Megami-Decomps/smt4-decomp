#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x0000 */ u8 unk0000[0x14F8];
    /* 0x14F8 */ u32 words[1];  /* one bit per flag */
} FlagBlock;

FlagBlock *gameFlagsGetBlock(void);

/* Returns whether flag `flag` is set (0 for flag numbers below 1). */
u32 gameFlagIsSetByBlockAt14f8(s32 flag)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 index;
    s32 bit;

    if (flag <= 0) {
        return 0;
    }
    index = flag / 32;
    bit = flag % 32;
    return (block->words[index] & (1 << bit)) != 0;
}

} /* extern "C" */
