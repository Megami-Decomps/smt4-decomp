#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

u8 FUN_00285574(void)
{
    SaveWork *work = FUN_002c2950();

    return work->unk03;
}

} /* extern "C" */
