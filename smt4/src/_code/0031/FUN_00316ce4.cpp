#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

u8 FUN_00316ce4(void)
{
    SaveWork *work = FUN_002c2950();

    return work->unk1C == 1;
}

} /* extern "C" */
