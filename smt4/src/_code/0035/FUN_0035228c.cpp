#include "common.h"

extern "C" {

u32 FUN_00352290(u32 arg0, u8 arg1, u32 arg2, int arg3);

/* Forwards to FUN_00352290, the function that follows it. */
u32 FUN_0035228c(u32 arg0, u8 arg1, u32 arg2, int arg3)
{
    return FUN_00352290(arg0, arg1, arg2, arg3);
}

} /* extern "C" */
