#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0033.h"

extern "C" {

void gameFlagsSet(s32 index, s32 value)
{
    MapSaveBlockA *obj = gameFlagsGetBlock();

    if (index < 0x40) {
        obj->timedFlags[index] = value;
    }
}

} /* extern "C" */
