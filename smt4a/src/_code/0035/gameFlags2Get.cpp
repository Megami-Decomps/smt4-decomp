#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0035.h"

extern "C" {


u8 gameFlags2Get(s32 index)
{
    return gameFlagsGetBlock()->timedCounters[index];
}

} /* extern "C" */
