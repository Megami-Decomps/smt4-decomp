/* NON_MATCHING: compiler combines flag expressions in a different register and instruction order. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_001692ac(u32 value, bool enabled)
{
    u32 mismatch = 1;
    if (value == 1) {
        mismatch = 0;
    }
    u32 flags = mismatch | (value << 4);
    u32 extra = enabled ? 0x1000 : 0;
    return (extra | flags) | 0xf00;
}
}
