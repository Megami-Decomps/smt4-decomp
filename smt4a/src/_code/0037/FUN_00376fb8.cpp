#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0037.h"

extern "C" {


void FUN_00376fb8(u8 value)
{
    gameFlagsGetBlock()->departureIndex = value;
}

} /* extern "C" */
