#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Tests bit `index` of the map block's bit set. */
u8 mapBlockBitIsSet(s32 index)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (block->blockBits[word] & (1 << shift)) != 0;
}

} /* extern "C" */
