#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

int FUN_0026f950(void)
{
    SaveWork *work = FUN_002c2950();

    return work->unk20;
}

} /* extern "C" */
