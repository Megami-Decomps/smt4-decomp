#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x0000 */ u8 unk0000[0x167C];
    /* 0x167C */ u32 bits[1];
} FlagBlock;

extern FlagBlock *gameFlagsGetBlock(void);

/* Sets or clears bit `bit` of the flag block's bitmap at 0x167c. */
void gameFlagsWriteBit(s32 bit, s32 on)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 index = bit / 32;

    if (on != 0) {
        block->bits[index] |= 1 << (bit % 32);
    } else {
        block->bits[index] &= ~(1 << (bit % 32));
    }
}

} /* extern "C" */
