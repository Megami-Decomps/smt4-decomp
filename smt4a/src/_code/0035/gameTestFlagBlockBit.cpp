#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Tests bit `index` of the bit set. */
u8 gameTestFlagBlockBit(s32 index)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 bit = index % 32;

    return (block->bits1670[word] & (1 << bit)) != 0;
}

} /* extern "C" */
