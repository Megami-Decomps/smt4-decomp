#include "common.h"

extern "C" {

/* Returns whether the referenced word is 4 or 5. */
u8 FUN_00180974(s32 *valueRef)
{
    return *valueRef == 4 || *valueRef == 5;
}

} /* extern "C" */
