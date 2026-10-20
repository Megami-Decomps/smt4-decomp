#include "common.h"

extern "C" {

extern u32 DAT_00433d10;

u32 eventCommandGetPendingCleanup(void)
{
    return DAT_00433d10;
}

} /* extern "C" */
