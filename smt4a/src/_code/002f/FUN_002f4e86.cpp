#include "common.h"

extern "C" {

/* Returns 1 when the referenced word is not negative, 0 when it is. */
s32 FUN_002f4e86(s32 *valueRef)
{
    return (*valueRef >> 0x1F) + 1;
}

} /* extern "C" */
