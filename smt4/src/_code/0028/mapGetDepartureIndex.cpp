#include "gamedata/MapSaveBlock.h"
#include "map/MapSpawn.h"

extern "C" {


u8 mapGetDepartureIndex(void)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->departureIndex;
}

} /* extern "C" */
