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
