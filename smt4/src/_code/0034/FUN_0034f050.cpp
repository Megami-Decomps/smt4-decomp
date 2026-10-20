#include "common.h"

extern "C" {

int mwmofilterDeblockerRelease(u32 deblocker);

void FUN_0034f050(u32 *deblocker)
{
    mwmofilterDeblockerRelease(*deblocker);
    *deblocker = 0;
}

} /* extern "C" */
