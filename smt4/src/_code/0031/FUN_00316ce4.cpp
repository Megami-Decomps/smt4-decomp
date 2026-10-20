#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

u8 FUN_00316ce4(void)
{
    SaveWork *work = gameGetMapBlock();

    return work->unk1C == 1;
}

} /* extern "C" */
