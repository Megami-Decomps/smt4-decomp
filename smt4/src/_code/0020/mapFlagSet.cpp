#include "gamedata/MapSaveBlock.h"

// Set a map flag when the flag index is nonnegative.
extern "C" void mapFlagSet(s32 flagIndex)
{
    MapSaveBlock *map = gameGetMapBlock();
    if (flagIndex >= 0) {
        s32 word = flagIndex / 32;
        s32 bit = flagIndex % 32;
        map->clearedGroups[word] |= 1 << bit;
    }
}
