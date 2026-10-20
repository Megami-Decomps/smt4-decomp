#include "common.h"

extern "C" {

/* Returns whether the referenced word is 5. */
u8 asdFileRequestHasFailed(s32 *valueRef)
{
    return *valueRef == 5;
}

} /* extern "C" */
