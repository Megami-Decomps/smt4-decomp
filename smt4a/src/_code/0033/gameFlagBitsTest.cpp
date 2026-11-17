#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Tests bit `index` of the game flags block's bit set at +0xd4c. */
u8 gameFlagBitsTest(s32 index)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (block->blockBits[word] & (1 << shift)) != 0;
}

} /* extern "C" */
