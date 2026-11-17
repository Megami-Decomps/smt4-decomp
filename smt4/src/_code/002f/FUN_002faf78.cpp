#include "gamedata/MapSaveBlock.h"

extern "C" {


u32 FUN_002faf78(void)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->unk018;
}

} /* extern "C" */
