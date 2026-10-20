#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *FUN_002c2950(void);

void FUN_002d2a38(int index, u8 value)
{
    SaveWork *work = FUN_002c2950();

    if (index < 0x40) {
        work->unkBD8[index] = value;
    }
}

} /* extern "C" */
