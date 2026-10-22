/* NON_MATCHING: Retail vldr s0, [pc, #120] differs from recovered beq 3c. */
#include "common.h"

extern "C" s32 randBetween(s32 minimum, s32 maximum);

// Return a scaled random value with a positive, negative, or randomly chosen sign.
extern "C" f32 FUN_00291620(s32 mode, s32 maximum, u32 divisor)
{
    bool negative;
    switch (mode) {
    case 0:
        negative = false;
        break;
    case 1:
        negative = true;
        break;
    case 2:
        negative = static_cast<s8>(randBetween(0, 1)) == 0;
        break;
    default:
        return 0.0f;
    }

    if (negative) {
        return -(static_cast<f32>(randBetween(0, maximum)) /
                 static_cast<f32>(divisor));
    }
    return static_cast<f32>(randBetween(0, maximum)) /
           static_cast<f32>(divisor);
}
