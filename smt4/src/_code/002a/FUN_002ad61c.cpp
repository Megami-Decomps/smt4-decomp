/* NON_MATCHING: compiler uses r0 for the callback-global base and reloads reason before the callback; retail uses r3 and retains r0. */
#include "common.h"

extern "C" {
extern void (*DAT_0044e450)(u32, u32, u32, u32, u32, u32);
u32 FUN_0014e66c(u32 reason, u32 first, u32 second);

// Consume the one-shot break callback before issuing the break request.
u32 FUN_002ad61c(u32 reason, u32, u32 detail)
{
    void (*callback)(u32, u32, u32, u32, u32, u32) = DAT_0044e450;
    if (callback != NULL) {
        DAT_0044e450 = NULL;
        callback(reason, 0, 0, 0, 0, detail);
    }
    return FUN_0014e66c(reason, 0, 0);
}
}
