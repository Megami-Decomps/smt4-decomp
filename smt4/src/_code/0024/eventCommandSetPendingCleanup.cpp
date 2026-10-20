#include "common.h"

extern "C" {

extern u32 DAT_00433d10;

void eventCommandSetPendingCleanup(u32 value)
{
    DAT_00433d10 = value;
}

} /* extern "C" */
