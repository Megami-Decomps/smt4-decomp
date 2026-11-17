#include "gamedata/MapSaveBlock.h"

extern "C" {


u8 FUN_00316ce4(void)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->unk01C == 1;
}

} /* extern "C" */
