#include "common.h"

extern "C" {

s32 randBetween(u32 low, u32 high);

/* The ratio numerator/denominator, negated for mode 1 and randomly for mode 2; 0 for other modes. */
f32 FUN_00283328(s32 mode, u32 numerator, u32 denominator)
{
    f32 ratio = 0.0f;
    switch (mode) {
    case 0:
        ratio = (f32)numerator / (f32)denominator;
        break;
    case 1:
        ratio = -((f32)numerator / (f32)denominator);
        break;
    case 2: {
        s8 positive = randBetween(0, 1);
        if (positive) {
            ratio = (f32)numerator / (f32)denominator;
        } else {
            ratio = -((f32)numerator / (f32)denominator);
        }
        break;
    }
    }
    return ratio;
}

} /* extern "C" */
