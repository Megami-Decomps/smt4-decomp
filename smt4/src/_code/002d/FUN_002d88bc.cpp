#include "common.h"

extern "C" {

s32 padStickDirectionIsDown(s32 direction);
void scrSetResult(s32 result);

/* Script command: reports whether the stick is held in direction 5. */
u32 FUN_002d88bc(void)
{
    scrSetResult(padStickDirectionIsDown(5));
    return 1;
}

} /* extern "C" */
