/* NON_MATCHING: range arithmetic order now matches; retail loads the state address into r0 and the multiplier into r2 after it (ours: state address into r2 before the range, multiplier into r0). */
#include "common.h"

extern "C" u32 g_lcgRandomRangeState;

static __inline u32 lcgNext(void)
{
    u32 next = g_lcgRandomRangeState * 0x41c64e6d + 0x3039;
    g_lcgRandomRangeState = next;
    return next;
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
    return (s32)(lcgNext() >> 16) % range + minimum;
}
