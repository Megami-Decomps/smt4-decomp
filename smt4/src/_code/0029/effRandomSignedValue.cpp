#include "common.h"

extern "C" s32 randBetween(s32 minimum, s32 maximum);

// Return a scaled random value with a positive, negative, or randomly chosen sign.
extern "C" f32 effRandomSignedValue(s32 mode, s32 maximum, u32 divisor)
{
    f32 result = 0.0f;
    switch (mode) {
    case 0:
        result = static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor);
        break;
    case 1:
        result = -(static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor));
        break;
    case 2: {
        s8 positive = randBetween(0, 1);
        if (positive != 0)
            result = static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor);
        else
            result = -(static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor));
        break;
    }
    }
    return result;
}
