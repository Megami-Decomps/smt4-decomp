#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0038.h"

extern "C" {

u32 gameFlagsClassify(s32 id)
{
    MapSaveBlockA *first = gameFlagsGetBlock();
    MapSaveBlockA *second = gameFlagsGetBlock();

    if (second->departureIndex != 1) {
        if (id == 0x18) {
            return 2;
        }
    } else if (first->placeStates[0x29] != 3) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
