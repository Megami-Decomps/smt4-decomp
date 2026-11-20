#include "common.h"

extern "C" {
extern void (*DAT_00589280)(u32, u32, u32, u32, u32, u32);
u32 svcBreakTrap(u32 reason, u32 first, u32 second);

// Consume the one-shot break callback before issuing the break request.
u32 sysBreakWithCallback(u32 reason, u32, u32 detail)
{
    void (*callback)(u32, u32, u32, u32, u32, u32) = DAT_00589280;
    if (callback != NULL) {
        DAT_00589280 = NULL;
        callback(reason, 0, 0, 0, 0, detail);
    }
    return svcBreakTrap(reason, 0, 0);
}
}
