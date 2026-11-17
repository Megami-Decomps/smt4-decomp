#include "gamedata/MapSaveBlock.h"

extern "C" {


void mapSetDepartureIndex(u8 value)
{
    MapSaveBlock *work = gameGetMapBlock();

    work->departureIndex = value;
}

} /* extern "C" */
