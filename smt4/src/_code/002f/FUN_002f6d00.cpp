#include "common.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
/* Reads or updates the requested task state. */
u32 FUN_002f6d00(void)
{
    s32 result;
    if (!(btlGetMainState()->battleFlags & 2))
        result = 1;
    else
        result = 0;
    scrSetResult(result);
    return 1;
}
}
