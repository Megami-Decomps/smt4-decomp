#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

int FUN_0026f950(void)
{
    SaveWork *work = gameGetMapBlock();

    return work->unk20;
}

} /* extern "C" */
