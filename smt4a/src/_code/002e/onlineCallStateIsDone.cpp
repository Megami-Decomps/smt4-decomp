#include "common.h"

extern "C" {

/* Returns 1 when `value` is 2, 3 or 4. */
u32 onlineCallStateIsDone(s32 value)
{
    if (((value != 2) && (value != 3)) && (value != 4)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
