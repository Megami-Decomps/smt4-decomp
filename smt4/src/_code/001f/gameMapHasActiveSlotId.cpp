#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Returns 1 when an active slot holds `id`, else 0. */
u32 gameMapHasActiveSlotId(int id)
{
    MapSaveBlock *block = gameGetMapBlock();
    int i = 0;

    if (i < block->slotCount) {
        do {
            if (block->slotActive[i] != 0 && block->slotKey[i] == id) {
                return 1;
            }
            i++;
        } while (i < block->slotCount);
    }
    return 0;
}

} /* extern "C" */
