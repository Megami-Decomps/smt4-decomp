/* NON_MATCHING: scrGetArg(0) and the prologue match; retail loads the 64-bit flag pair with ldm (lo r1, hi r2) after `mov r3, #1`, armcc loads the halves singly (hi first) */
#include "common.h"
#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"

extern "C" {
void scrSetResult(s32 result);

// Return whether the selected battle flag is set to the script interpreter.
u32 FUN_002f78dc(void)
{
    u32 bit = scrGetArg(0);
    u64 flags = btlGetMainStateExt()->flags49D0;
    scrSetResult((flags & (s64)(1 << bit)) != 0);
    return 1;
}
}
