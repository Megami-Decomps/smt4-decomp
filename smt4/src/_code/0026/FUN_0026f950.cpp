#include "gamedata/MapSaveBlock.h"

extern "C" {


int FUN_0026f950(void)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->unk020;
}

} /* extern "C" */
