#include "common.h"

extern "C" u32 g_lcgRandomRangeState;

// Advance the linear congruential generator and reduce its high half modulo `range`.
static __inline s32 randModulo(s32 range)
{
    g_lcgRandomRangeState = g_lcgRandomRangeState * 0x41c64e6d + 0x3039;
    return (s32)(g_lcgRandomRangeState >> 16) % range;
}

// Draw an inclusive random integer, accepting the endpoints in either order.
extern "C" s32 FUN_0034ef58(s32 minimum, s32 maximum)
{
    s32 upper = maximum;
    if (minimum > maximum) {
        upper = minimum;
        minimum = maximum;
    }
    s32 range = upper - minimum + 1;
    return randModulo(range) + minimum;
}
