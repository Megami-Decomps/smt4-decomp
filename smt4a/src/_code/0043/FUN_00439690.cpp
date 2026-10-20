#include "common.h"

extern "C" {

s32 FUN_00426204(void);
s32 FUN_00439ba8(void *object);

/* Returns FUN_00439ba8's result for the object, or the failure result 0xC8A0D018 when FUN_00426204 reports 0. */
s32 FUN_00439690(void *object)
{
    if (FUN_00426204() == 0) {
        return 0xC8A0D018;
    }
    return FUN_00439ba8(object);
}

} /* extern "C" */
