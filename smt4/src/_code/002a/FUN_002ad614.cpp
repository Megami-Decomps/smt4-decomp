#include "common.h"

extern "C" {

u32 FUN_002ad61c(u32 value);

/* Calls FUN_002ad61c with 0 (placed right after, so the call is a linker NOP). */
u32 FUN_002ad614(void)
{
    return FUN_002ad61c(0);
}

} /* extern "C" */
