#include "gamedata/MapSaveBlockA.h"
#include "map/mapDepart.h"

extern "C" {


void mapSetDepartureIndex(u32 index)
{
    gameFlagsGetBlock()->departureIndex = index;
}

} /* extern "C" */
