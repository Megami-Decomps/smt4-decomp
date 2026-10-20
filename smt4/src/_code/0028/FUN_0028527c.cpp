#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

void FUN_0028527c(int value)
{
    SaveWork *work = gameGetMapBlock();

    work->unk1C = value != 0;
}

} /* extern "C" */
