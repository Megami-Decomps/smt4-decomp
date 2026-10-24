#include "common.h"

extern "C" {
void scrSetResult(s32 result);

/* Script command: sets the result to 0. */
s32 FUN_003b04d0(void)
{
    scrSetResult(0);
    return 1;
}
}
