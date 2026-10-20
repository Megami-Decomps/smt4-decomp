#include "common.h"

extern "C" {

typedef struct FlagBits0033aaac {
    /* 0x0000 */ u8 unk0000[0xd4c];
    /* 0xd4c */ u32 bits[1];   /* bit set indexed from 0 */
} FlagBits0033aaac;

FlagBits0033aaac *gameFlagsGetBlock(void);

/* Tests bit `index` of the game flags block's bit set at +0xd4c. */
u8 FUN_0033aaac(s32 index)
{
    FlagBits0033aaac *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (block->bits[word] & (1 << shift)) != 0;
}

} /* extern "C" */
