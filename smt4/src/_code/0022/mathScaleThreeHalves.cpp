/* NON_MATCHING: compiler reverses the floating-point multiply operand registers. */
#include "common.h"
extern "C" {
/* Scale by three halves, or by its reciprocal when not enabled. */
f32 mathScaleThreeHalves(u32 unused, s32 enabled, f32 value)
{
    return (enabled ? 1.5f : 0.6666666865348816f) * value;
}
}
