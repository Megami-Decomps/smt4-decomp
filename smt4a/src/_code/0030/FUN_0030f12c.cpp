#include "common.h"

extern "C" {

void onlineStringLess(u32 a, u32 b);

/* Drops the first argument and forwards the other two to onlineStringLess. */
void FUN_0030f12c(u32 unused, u32 a, u32 b)
{
    onlineStringLess(a, b);
}

} /* extern "C" */
