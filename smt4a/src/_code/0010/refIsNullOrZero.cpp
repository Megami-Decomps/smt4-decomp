#include "common.h"

extern "C" {

/* Returns 1 when the reference is NULL or points at 0. */
u32 refIsNullOrZero(s32 *ref)
{
    if (ref != NULL && *ref != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
