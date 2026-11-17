#include "gamedata/MapSaveBlock.h"

extern "C" {
s32 scrGetArg(s32 index);
/* Stores a script value in the map block's indexed field. */
s32 FUN_0031c1fc()
{
    MapSaveBlock *map = gameGetMapBlock();
    map->timedValues[scrGetArg(0)] = scrGetArg(1);
    return 1;
}
}
