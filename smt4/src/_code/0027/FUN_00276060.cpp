#include "gamedata/MapSaveBlock.h"

extern "C" {


u8 FUN_00276060(int index)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->timedFlags[index];
}

} /* extern "C" */
