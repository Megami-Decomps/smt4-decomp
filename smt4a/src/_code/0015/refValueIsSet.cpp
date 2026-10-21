#include "common.h"

extern "C" {

/* Returns whether the referenced word is nonzero. */
u8 refValueIsSet(s32 *valueRef)
{
    return *valueRef != 0;
}

} /* extern "C" */
