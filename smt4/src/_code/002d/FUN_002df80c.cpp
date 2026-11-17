#include "gamedata/MapSaveBlock.h"

extern "C" {

u8 FUN_002df80c(int index)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->timedCounters[index];
}

} /* extern "C" */
