#include "common.h"

extern "C" {

int mwmofilterDeblockerRelease(u32 deblocker);

void mobiclipDeblockerRelease(u32 *deblocker)
{
    mwmofilterDeblockerRelease(*deblocker);
    *deblocker = 0;
}

} /* extern "C" */
