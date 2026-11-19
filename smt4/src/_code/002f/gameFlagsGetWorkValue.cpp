#include "gamedata/MapSaveBlock.h"

extern "C" {


u32 gameFlagsGetWorkValue(void)
{
    MapSaveBlock *work = gameGetMapBlock();

    return work->unk018;
}

} /* extern "C" */
