#include "common.h"

extern "C" {

u32 FUN_0012a74c(u32 mode, u32 arg);

/* Calls FUN_0012a74c, the function that follows it, with mode 1 and its own argument. */
u32 FUN_0012a740(u32 arg)
{
    return FUN_0012a74c(1, arg);
}

} /* extern "C" */
