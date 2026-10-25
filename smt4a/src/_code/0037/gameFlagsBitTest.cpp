#include "gamedata/FlagBitTests.h"

extern "C" {

typedef struct FlagBits00376fcc {
    /* 0x0000 */ u8 unk0000[0x152c];
    /* 0x152c */ u32 bits[1];   /* bit set indexed from 0 */
} FlagBits00376fcc;

FlagBits00376fcc *gameFlagsGetBlock(void);

/* Tests bit `index` of the game flags block's bit set at +0x152c. */
u8 gameFlagsBitTest(s32 index)
{
    FlagBits00376fcc *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (block->bits[word] & (1 << shift)) != 0;
}

} /* extern "C" */
