#include "common.h"
#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"

extern "C" {

// Return whether the selected battle flag is set to the script interpreter.
u32 FUN_002f78dc(void)
{
    u32 bit = scrGetArg(0);
    if (btlGetMainState()->flags49D0 & (s64)(1 << bit)) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
