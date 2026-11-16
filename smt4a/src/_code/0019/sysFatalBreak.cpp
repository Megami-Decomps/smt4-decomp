/* NON_MATCHING: retail loads DAT_00589280 into r2 before the push (r0 and r1 stay live, so r0 holds the zero and `strd r0, [sp]` stores the two stack arguments); the build loads it into r0 and stores the stack arguments separately. */
#include "common.h"

typedef void (*FatalBreakCallback)(u32, u32, u32, u32, u32, u32);

extern "C" {
extern FatalBreakCallback DAT_00589280;
void FUN_0019a2f8(u32 reason, u32 address, u32 size);

// Runs the one-shot fatal callback with the reason, then invokes the break trampoline.
static void fatalBreak(u32 reason, u32 detail)
{
    FatalBreakCallback callback = DAT_00589280;
    if (callback != NULL) {
        DAT_00589280 = NULL;
        callback(reason, 0, 0, 0, 0, detail);
    }
    FUN_0019a2f8(reason, 0, 0);
}

// Runs the one-shot fatal callback, then invokes the named break trampoline.
void sysFatalBreak(u32 unused, u32 information)
{
    fatalBreak(0, information);
}
}
