#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0037.h"
#include "map/MapSceneAccess.h"

extern "C" {


u8 lmapGetSpawnIndex(void)
{
    return gameFlagsGetBlock()->departureIndex;
}

} /* extern "C" */
