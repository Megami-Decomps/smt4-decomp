#include "gamedata/MapSaveBlock.h"

extern "C" {

void FUN_0027d8b4(u16 value)
{
    MapSaveBlock *block = gameGetMapBlock();

    block->unk020 = value;
}

} /* extern "C" */
