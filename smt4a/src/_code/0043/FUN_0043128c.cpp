/* NON_MATCHING: compiler uses r0 for the callback-global base and reloads reason before the callback; retail uses r3 and retains r0. */
#include "common.h"

extern "C" {
extern void (*DAT_00589280)(u32, u32, u32, u32, u32, u32);
u32 FUN_0019a2f8(u32 reason, u32 first, u32 second);

// Consume the one-shot break callback before issuing the break request.
u32 FUN_0043128c(u32 reason, u32, u32 detail)
{
    if (DAT_00589280 != NULL) {
        void (*callback)(u32, u32, u32, u32, u32, u32) = DAT_00589280;
        DAT_00589280 = NULL;
        callback(reason, 0, 0, 0, 0, detail);
    }
    return FUN_0019a2f8(reason, 0, 0);
}
}
