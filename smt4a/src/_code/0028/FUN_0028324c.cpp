#include "common.h"

extern "C" s32 randBetween(s32 lower, s32 upper);

/* Choose a scaled magnitude, optionally negating it or choosing its sign at random. */
extern "C" f32 FUN_0028324c(s32 mode, s32 lower, s32 upper, u32 divisor)
{
    f32 result = 0.0f;
    if (mode == 0) {
        result = (f32)randBetween(lower, upper) / (f32)divisor;
    }
    else if (mode == 1) {
        result = -((f32)randBetween(lower, upper) / (f32)divisor);
    }
    else if (mode == 2) {
        s8 sign = randBetween(0, 1);
        if (sign == 0) {
            result = -((f32)randBetween(lower, upper) / (f32)divisor);
        } else {
            result = (f32)randBetween(lower, upper) / (f32)divisor;
        }
    }
    return result;
}
