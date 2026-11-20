#include "gamedata/MapSaveBlock.h"

extern "C" {

extern int gameFlagIsSet(u32 flag);

/* Classifies `id`: 3 when a required unlock flag is missing, 2 for id 0x18, 0 when its state is 3 or out of range, else 1. */
u32 mapClassifyPlaceState(s32 id)
{
    MapSaveBlock *block = gameGetMapBlock();

    if ((id - 0x19 <= 5U || id == 0x66) && gameFlagIsSet(0x144) == 0) {
        return 3;
    }
    if ((id - 0x1F <= 4U || id == 0x67) && gameFlagIsSet(0x15A) == 0) {
        return 3;
    }
    if (gameGetMapBlock()->departureIndex == 1) {
        if (block->placeStates[0x29] != 3) {
            return 1;
        }
    } else {
        if (id == 0x18) {
            return 2;
        }
        if (id < 0x40 && block->placeStates[id] != 3) {
            return 1;
        }
    }
    return 0;
}

}
