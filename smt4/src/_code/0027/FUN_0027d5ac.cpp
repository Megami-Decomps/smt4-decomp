#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

void FUN_0027d5ac(u8 value)
{
    SaveWork *work = gameGetMapBlock();

    work->unk03 = value;
}

} /* extern "C" */
