#include "common.h"

extern "C" {

void FUN_003d2158(u32 a, u32 b);
s32 scrGetArg(...);

/* Script command: forwards the script arguments 0 and 1 to FUN_003d2158; always returns 1. */
u32 FUN_002613c0(void)
{
    u32 first;
    u32 second;

    first = scrGetArg();
    second = scrGetArg(1);
    FUN_003d2158(first, second);
    return 1;
}

} /* extern "C" */
