/* NON_MATCHING: the clear-bit result is built with tst plus conditional moves as retail, but armcc orders movne r0, #0 before moveq r0, #1 where retail has moveq first. */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
/* Reads or updates the requested task state. */
u32 FUN_002f6d00(void)
{
    s32 result;
    if (btlGetMainState()->battleFlags & 2)
        result = 0;
    else
        result = 1;
    scrSetResult(result);
    return 1;
}
}
