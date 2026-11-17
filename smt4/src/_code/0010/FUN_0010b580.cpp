#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Counts down the timers of the map's timed slots that are fully armed (flags 1, 2 and 4 set) and marks a slot
 * expired (flag 8) when its timer reaches zero. */
void FUN_0010b580(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    for (s32 i = 0; i < 16; i++) {
        u8 flags = block->markers[i].flags;

        if ((flags & 1) && (flags & 4) && (flags & 2) && !(flags & 8)) {
            if (block->markers[i].timer > 0) {
                block->markers[i].timer--;
            }
            if (block->markers[i].timer == 0) {
                block->markers[i].flags = flags | 8;
            }
        }
    }
}
}
