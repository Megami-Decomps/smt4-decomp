#include "gamedata/MapSaveBlock.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);

u32 FUN_0031c1c4(void)
{
    MapSaveBlock *work = gameGetMapBlock();
    int index = scrGetArg(0);

    scrSetResult(work->timedValues[index] == 0);
    return 1;
}

} /* extern "C" */
