#include "common.h"

extern "C" {

s32 padStickDirectionIsDown(u32 direction);
s32 scrSetResult(s32 value);

/* Script command: returns whether the stick is held in direction four. */
s32 FUN_00222290(void)
{
    scrSetResult(padStickDirectionIsDown(4));
    return 1;
}

} /* extern "C" */
