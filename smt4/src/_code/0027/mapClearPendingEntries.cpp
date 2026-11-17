#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Clear all pending map-entry flags and counters. */
void mapClearPendingEntries(void)
{
    MapSaveBlock *work = gameGetMapBlock();
    for (u32 index = 0; index < 16; ++index) {
        work->markers[index].flags = 0;
        work->markers[index].contentIndex = 0;
        work->markers[index].stage = 0;
        work->markers[index].timer = 0;
    }
}

} /* extern "C" */
