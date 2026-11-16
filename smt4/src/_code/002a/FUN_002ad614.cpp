#include "common.h"

extern "C" {

u32 sysBreakWithCallback(u32 value);

/* Calls sysBreakWithCallback with 0 (placed right after, so the call is a linker NOP). */
u32 FUN_002ad614(void)
{
    return sysBreakWithCallback(0);
}

} /* extern "C" */
