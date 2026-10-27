/* NON_MATCHING: instructions match retail; retail computes the flags into r1 and the 0x1000 extra into r0 (reusing the dead `value` register), ours the reverse. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_001692ac(u32 value, bool enabled)
{
    u32 mismatch = 1;
    if (value == 1) {
        mismatch = 0;
    }
    u32 flags = (value << 4) | mismatch;
    u32 extra = enabled ? 0x1000 : 0;
    return extra | flags | 0xf00;
}
}
