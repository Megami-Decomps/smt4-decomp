#include "gamedata/MapSaveBlock.h"
#include "gamedata/GameFlags.h"

extern "C" {

/* Retires the pending flag slots keyed `key`: deactivates each and raises its game flag. */
void mapFlagSlotsRetireByKey(s32 key)
{
    MapSaveBlock *block = gameGetMapBlock();

    for (s32 i = 0; i < block->slotCount; i++) {
        if (block->slotActive[i] != 0 && block->slotKey[i] == key) {
            block->slotActive[i] = 0;
            if (block->slotFlag[i] != 0) {
                gameFlagSetValue(block->slotFlag[i], 1, 1);
            }
        }
    }
}

} /* extern "C" */
