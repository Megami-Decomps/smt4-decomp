#include "gamedata/MapSaveBlock.h"

extern "C" {


void FUN_0028527c(int value)
{
    MapSaveBlock *work = gameGetMapBlock();

    work->unk01C = value != 0;
}

} /* extern "C" */
