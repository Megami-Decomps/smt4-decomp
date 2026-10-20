/* NON_MATCHING: `mov r3, #1` is scheduled before the divisions and `cmp r5, #0` after the shift; retail has them the other way round. */
#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0xe8c];
    /* 0xe8c */ u32 flags;    /* first of the flag words, one bit per flag */
} FlagBlock;

extern FlagBlock *gameFlagsGetBlock(void);

/* Sets or clears bit `index` of the flag block's flag words. */
void FUN_00384d6c(s32 index, s32 value)
{
    FlagBlock *word = (FlagBlock *)((u8 *)gameFlagsGetBlock() + index / 32 * 4);
    u32 bits = word->flags;
    u32 mask = 1 << (index % 32);

    if (value != 0) {
        bits |= mask;
    } else {
        bits &= ~mask;
    }
    word->flags = bits;
}

}
