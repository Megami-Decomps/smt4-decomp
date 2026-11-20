#include "common.h"

extern "C" {

void soundApplyValueOrStop(u32 a, u32 b);
s32 scrGetArg(...);

/* Script command: forwards the script arguments 0 and 1 to soundApplyValueOrStop; always returns 1. */
u32 FUN_002613bc(void)
{
    u32 first;
    u32 second;

    first = scrGetArg(0);
    second = scrGetArg(1);
    soundApplyValueOrStop(first, second);
    return 1;
}

} /* extern "C" */
