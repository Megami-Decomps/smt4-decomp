#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x0000 */ u8 unk0000[0x14A8];
    /* 0x14A8 */ u32 words[1]; /* one bit per flag */
} FlagBlock;

extern FlagBlock *gameFlagsGetBlock(void);

/* Sets or clears flag bit `index`. */
void gameFlagsWriteBlockBit(s32 index, s32 set)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    if (set != 0) {
        block->words[word] |= 1 << shift;
    } else {
        block->words[word] &= ~(1 << shift);
    }
}

}
