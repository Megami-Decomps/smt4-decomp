/* NON_MATCHING: the ldm of the 64-bit flag pair now matches; retail folds the mask's sign extension into `and r0, r2, r0, asr #31`, armcc computes it with a separate asr. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"

extern "C" {

// Return whether the selected battle flag is set to the script interpreter.
u32 FUN_002f78dc(void)
{
    u32 bit = scrGetArg(0);
    scrSetResult((btlGetMainState()->flags49D0 & (s64)(1 << bit)) != 0);
    return 1;
}
}
