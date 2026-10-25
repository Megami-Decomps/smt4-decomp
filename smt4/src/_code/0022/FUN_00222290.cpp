#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 padStickDirectionIsDown(u32 direction);

/* Script command: returns whether the stick is held in direction four. */
s32 FUN_00222290(void)
{
    scrSetResult(padStickDirectionIsDown(4));
    return 1;
}

} /* extern "C" */
