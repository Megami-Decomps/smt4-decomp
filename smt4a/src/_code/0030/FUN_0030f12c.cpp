#include "common.h"

extern "C" {

void FUN_002e9854(u32 a, u32 b);

/* Drops the first argument and forwards the other two to FUN_002e9854. */
void FUN_0030f12c(u32 unused, u32 a, u32 b)
{
    FUN_002e9854(a, b);
}

} /* extern "C" */
