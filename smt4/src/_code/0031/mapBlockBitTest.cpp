#include "gamedata/MapSaveBlock.h"
#include "gamedata/FlagBitTests.h"

extern "C" {

/* Tests bit `index` of the bit set. */
u8 mapBlockBitTest(s32 index)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 word = index / 32;
    s32 bit = index % 32;

    return (block->testBits[word] & (1 << bit)) != 0;
}

} /* extern "C" */
