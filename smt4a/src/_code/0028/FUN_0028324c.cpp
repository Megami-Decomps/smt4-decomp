/* NON_MATCHING: coin result uses TST rather than SXTB/CMP, and VFP conversion/division intermediates differ. */
#include "common.h"

extern "C" s32 FUN_00184964(s32 lower, s32 upper);

/* Choose a scaled magnitude, optionally negating it or choosing its sign at random. */
extern "C" f32 FUN_0028324c(s32 mode, s32 lower, s32 upper, u32 divisor)
{
    f32 result = 0.0f;
    if (mode == 0) {
        return (f32)FUN_00184964(lower, upper) / (f32)divisor;
    }
    if (mode == 1) {
        return -((f32)FUN_00184964(lower, upper) / (f32)divisor);
    }
    if (mode == 2) {
        if ((s8)FUN_00184964(0, 1) == 0) {
            return -((f32)FUN_00184964(lower, upper) / (f32)divisor);
        }
        result = (f32)FUN_00184964(lower, upper) / (f32)divisor;
    }
    return result;
}
