#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

u32 FUN_002faf78(void)
{
    SaveWork *work = FUN_002c2950();

    return work->unk18;
}

} /* extern "C" */
