#include "gamedata/MapSaveBlockA.h"
#include "gamedata/FlagBitTests.h"

extern "C" {

/* Tests bit `index` of the game flags block's bit set at +0x152c. */
u8 gameFlagsBitTest(s32 index)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (block->bits152C[word] & (1 << shift)) != 0;
}

} /* extern "C" */
