#include "common.h"

extern "C" {

u32 FUN_001b15d0(u32 *arg0, int *arg1, u32 *arg2);

/* Forwards to FUN_001b15d0, the function that follows it. */
u32 FUN_001b15cc(u32 *arg0, int *arg1, u32 *arg2)
{
    return FUN_001b15d0(arg0, arg1, arg2);
}

} /* extern "C" */
