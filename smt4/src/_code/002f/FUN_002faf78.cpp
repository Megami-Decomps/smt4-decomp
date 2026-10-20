#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

u32 FUN_002faf78(void)
{
    SaveWork *work = gameGetMapBlock();

    return work->unk18;
}

} /* extern "C" */
