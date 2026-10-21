/* NON_MATCHING: compiler predicates the bounds swap and schedules random-state loads differently. */
#include "common.h"

extern "C" u32 g_randState;

// Draw an inclusive random integer, accepting the bounds in either order.
extern "C" s32 FUN_00255de0(s32 minimum, s32 maximum)
{
    if (maximum < minimum) {
        s32 previousMinimum = minimum;
        minimum = maximum;
        maximum = previousMinimum;
    }
    g_randState = g_randState * 0x41c64e6du + 0x3039;
    return (s32)(g_randState >> 16) % (maximum - minimum + 1) + minimum;
}
