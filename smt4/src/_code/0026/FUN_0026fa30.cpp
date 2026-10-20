#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

void FUN_0026fa30(u32 value)
{
    SaveWork *work = FUN_002c2950();

    work->unk18 = value;
}

} /* extern "C" */
