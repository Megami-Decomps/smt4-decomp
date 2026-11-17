#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Whether bit `bit` of the map block's flag array is set. */
u8 mapFlagTest(int bit)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 index = bit / 32;
    s32 shift = bit % 32;

    return (block->markBits[index] & (1 << shift)) != 0;
}

} /* extern "C" */
