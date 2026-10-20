#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

u8 FUN_00276060(int index)
{
    SaveWork *work = gameGetMapBlock();

    return work->unkBD8[index];
}

} /* extern "C" */
