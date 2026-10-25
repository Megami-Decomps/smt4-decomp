/* NON_MATCHING: register allocation only: retail keeps the low bits in r1 and the 0x1000 flag in r0 before the final ORs. */
#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
u32 FUN_002c5d80(u32 value, bool enabled)
{
    u32 notOne = 1;
    if (value == 1) {
        notOne = 0;
    }
    u32 low = notOne | (value << 4);
    u32 flag = enabled ? 0x1000 : 0;
    return flag | low | 0xf00;
}
}
