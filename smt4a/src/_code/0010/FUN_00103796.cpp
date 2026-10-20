#include "common.h"

extern "C" {

u64 svcGetSystemTick(void);

/* Stores the 64-bit value returned by svcGetSystemTick in `*out`. */
void FUN_00103796(u64 *out)
{
    *out = svcGetSystemTick();
}

} /* extern "C" */
