/* NON_MATCHING: retail keeps zero in r4 across the callback (`mov r0, r4` for the trampoline's first argument), stores the two zero stack arguments with strd and reserves 8 bytes; the build rematerializes zero and reserves 12. */
#include "common.h"

typedef void (*FatalBreakCallback)(u32, u32, u32, u32, u32, u32);

extern "C" {
extern FatalBreakCallback DAT_00589280;
void FUN_0019a2f8(u32 reason, u32 address, u32 size);

// Runs the one-shot fatal callback, then invokes the named break trampoline.
void sysFatalBreak(u32 unused, u32 information)
{
    FatalBreakCallback callback = DAT_00589280;
    if (callback != NULL) {
        DAT_00589280 = NULL;
        callback(0, 0, 0, 0, 0, 0);
    }
    FUN_0019a2f8(0, 0, 0);
}
}
