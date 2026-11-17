#include "gamedata/MapSaveBlockA.h"

extern "C" {

extern u32 gameObjectKindGetCategory(s32 kind);

/* Whether the flag entry `id` (ids 0x2C-0x2F share entry 0x2B; 0x18 never counts) is both set in its table and marked in the flag block. */
u8 gameObjectKindIsAvailable(int id)
{
    const MapSaveBlockA *block = gameFlagsGetBlock();

    if (id != 0x18) {
        if (id == 0x2C || id == 0x2D || id == 0x2E || id == 0x2F) {
            id = 0x2B;
        }
        u32 lookup = gameObjectKindGetCategory(id);
        if (lookup == 1 && (s8)block->placeStates[id] == 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
