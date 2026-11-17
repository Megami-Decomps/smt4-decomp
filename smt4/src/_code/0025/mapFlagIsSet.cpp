#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Returns whether bit `flag` of the map block's flag bitmap is set. */
bool mapFlagIsSet(s32 flag)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 index = flag / 32;
    s32 bit = flag % 32;

    return (block->clearedGroups[index] & (1 << bit)) != 0;
}

} /* extern "C" */
