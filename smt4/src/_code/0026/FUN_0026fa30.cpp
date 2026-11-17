#include "gamedata/MapSaveBlock.h"

extern "C" {


void FUN_0026fa30(u32 value)
{
    MapSaveBlock *work = gameGetMapBlock();

    work->unk018 = value;
}

} /* extern "C" */
