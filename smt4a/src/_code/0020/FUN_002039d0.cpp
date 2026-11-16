/* NON_MATCHING: retail copies maximum into r1 once before the coin branch (`mov r1, r5; beq`), the build predicates it per arm (`moveq r1, r5` / `mov r1, r5`). */
#include "common.h"

extern "C" s32 randBetween(s32 minimum, s32 maximum);

// Return a scaled random value with a positive, negative, or randomly chosen sign.
extern "C" f32 FUN_002039d0(s32 mode, s32 maximum, u32 divisor)
{
    f32 result = 0.0f;
    switch (mode) {
    case 2: {
        s8 coin = randBetween(0, 1);
        if (coin == 0) {
            result = -(static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor));
            break;
        }
    }
    case 0:
        result = static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor);
        break;
    case 1:
        result = -(static_cast<f32>(randBetween(0, maximum)) / static_cast<f32>(divisor));
        break;
    }
    return result;
}
