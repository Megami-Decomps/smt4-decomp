#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

void FUN_0028527c(int value)
{
    SaveWork *work = FUN_002c2950();

    work->unk1C = value != 0;
}

} /* extern "C" */
