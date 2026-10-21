/* NON_MATCHING: compiler schedules seed-address loads before range arithmetic and uses r1 directly for the range. */
#include "common.h"

extern "C" u32 g_randState;

// Draw an inclusive random integer, accepting the endpoints in either order.
extern "C" s32 FUN_00184964(s32 minimum, s32 maximum)
{
    s32 upper = maximum;
    if (minimum > maximum) {
        upper = minimum;
        minimum = maximum;
    }
    s32 range = upper - minimum + 1;
    g_randState = g_randState * 0x41c64e6d + 0x3039;
    return (s32)(g_randState >> 16) % range + minimum;
}
