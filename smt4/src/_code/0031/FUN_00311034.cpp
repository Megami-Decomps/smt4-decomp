#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 gameCountUnits(void);

/* Script command: sets the result to the unit count. */
s32 FUN_00311034(void)
{
    scrSetResult(gameCountUnits());
    return 1;
}
}
