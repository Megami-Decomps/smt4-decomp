#include "common.h"

extern "C" {
void scrSetResult(s32 result);
s32 gameCountUnits(void);

/* Script command: sets the result to the unit count. */
s32 FUN_00311034(void)
{
    scrSetResult(gameCountUnits());
    return 1;
}
}
