/* NON_MATCHING: retail converts into s2 and divides into s0 (no in-place VFP reuse) and keeps separate tails for both signs in mode 2; armcc here reuses s0 and folds the sign into vnegeq. */
#include "common.h"

extern "C" {

s32 FUN_00184964(u32 low, u32 high);

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
        s8 positive = FUN_00184964(0, 1);
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
