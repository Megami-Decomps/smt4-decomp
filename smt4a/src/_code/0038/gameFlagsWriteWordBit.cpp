#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0xe8c];
    /* 0xe8c */ u32 flags;    /* first of the flag words, one bit per flag */
} FlagBlock;

extern FlagBlock *gameFlagsGetBlock(void);

/* Sets or clears bit `index` of the flag block's flag words. */
void gameFlagsWriteWordBit(s32 index, s32 value)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    if (value != 0) {
        (&block->flags)[word] |= 1 << shift;
    } else {
        (&block->flags)[word] &= ~(1 << shift);
    }
}

}
