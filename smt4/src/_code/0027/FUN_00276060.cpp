#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

u8 FUN_00276060(int index)
{
    SaveWork *work = FUN_002c2950();

    return work->unkBD8[index];
}

} /* extern "C" */
