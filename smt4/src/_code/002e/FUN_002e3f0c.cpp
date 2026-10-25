#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"


extern "C" {

/* Script command: sets the result to the halfword at 0x1fc6 of the main battle state. */
s32 FUN_002e3f0c(void)
{
    scrSetResult(btlGetMainState()->emergencyAction.gate);
    return 1;
}
}
