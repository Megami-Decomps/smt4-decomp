#include "map/MapSpawn.h"
#include "gamedata/MapSaveBlock.h"

extern "C" {


void mapSetDepartureIndex(s32 value)
{
    MapSaveBlock *work = gameGetMapBlock();

    work->departureIndex = value;
}

} /* extern "C" */
