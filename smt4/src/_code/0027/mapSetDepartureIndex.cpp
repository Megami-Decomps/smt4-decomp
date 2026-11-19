#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"

extern "C" {


void mapSetDepartureIndex(u32 index)
{
    MapSaveBlock *work = gameGetMapBlock();

    work->departureIndex = index;
}

} /* extern "C" */
