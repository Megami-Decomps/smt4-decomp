#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

void FUN_0027d5ac(u8 value)
{
    SaveWork *work = FUN_002c2950();

    work->unk03 = value;
}

} /* extern "C" */
