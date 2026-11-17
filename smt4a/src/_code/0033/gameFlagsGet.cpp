#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0033.h"

extern "C" {


u8 gameFlagsGet(s32 index)
{
    return gameFlagsGetBlock()->timedFlags[index];
}

} /* extern "C" */
