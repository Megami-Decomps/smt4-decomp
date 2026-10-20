#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

u8 FUN_00285574(void)
{
    SaveWork *work = gameGetMapBlock();

    return work->unk03;
}

} /* extern "C" */
