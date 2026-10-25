#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 padStickDirectionIsDown(s32 direction);

/* Script command: reports whether the stick is held in direction 5. */
u32 FUN_002d88bc(void)
{
    scrSetResult(padStickDirectionIsDown(5));
    return 1;
}

} /* extern "C" */
