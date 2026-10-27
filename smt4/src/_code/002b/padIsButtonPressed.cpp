/* NON_MATCHING: the poll state is the object itself (one pooled load) and the table has 31 entries now; retail places the shared `return 0` block inline after the flag test and branches back to it, armcc puts it at the end. */
#include "common.h"

namespace { struct Input { u8 padding[8]; u32 enabled; }; }

extern "C" {
extern Input DAT_004650a0;
extern u32 DAT_004e3c58[31];
u32 padIsButtonPressed(u32 button)
{
    if (button < 31 && (DAT_004650a0.enabled & 1) == 0) {
        u32 held = DAT_004e3c58[button];
        if (held == 1) { return held; }
    }
    return 0;
}
}
