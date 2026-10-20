/* NON_MATCHING: instruction scheduling: retail issues `cmp r5, #0` right after the first asr and `mov r3, #1` later; here the compare sits just before the orr/bic. */
#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x0000 */ u8 unk0000[0x14A8];
    /* 0x14A8 */ u32 words[1]; /* one bit per flag */
} FlagBlock;

extern FlagBlock *gameFlagsGetBlock(void);

/* Sets or clears flag bit `index`. */
void FUN_0033ab1c(s32 index, s32 set)
{
    u32 *word = &gameFlagsGetBlock()->words[index / 32];
    u32 value = *word;
    u32 mask = 1 << (index % 32);

    if (set != 0) {
        value |= mask;
    } else {
        value &= ~mask;
    }
    *word = value;
}

}
