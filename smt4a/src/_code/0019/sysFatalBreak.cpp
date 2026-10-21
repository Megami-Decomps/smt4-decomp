/* NON_MATCHING: retail preserves zero in R4 across the callback and stores its final two callback arguments with STRD; compiled code rematerializes zero and reserves a different call frame. */
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
        callback(0, 0, 0, 0, 0, information);
    }
    FUN_0019a2f8(0, 0, 0);
}
}
