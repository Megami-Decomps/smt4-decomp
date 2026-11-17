#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Returns whether an active entry with `id` exists. */
u32 FUN_002ba4dc(s32 id)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 i = 0;
    while (i < block->slotCount) {
        if (block->slotActive[i] != 0 && block->slotKey[i] == id) {
            return 1;
        }
        i++;
    }
    return 0;
}

} /* extern "C" */
