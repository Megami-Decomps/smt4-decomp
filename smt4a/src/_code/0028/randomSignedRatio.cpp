#include "common.h"
#include "util/Random.h"

extern "C" {

s32 randBetween(u32 low, u32 high);

/* Returns numerator / denominator signed as `signMode` says (RANDOM_SIGN_*); 0 for any other
 * mode. */
f32 randomSignedRatio(s32 signMode, u32 numerator, u32 denominator)
{
    f32 ratio = 0.0f;
    switch (signMode) {
    case RANDOM_SIGN_POSITIVE:
        ratio = (f32)numerator / (f32)denominator;
        break;
    case RANDOM_SIGN_NEGATIVE:
        ratio = -((f32)numerator / (f32)denominator);
        break;
    case RANDOM_SIGN_RANDOM: {
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
