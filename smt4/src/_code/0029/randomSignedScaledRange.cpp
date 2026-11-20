#include "common.h"
#include "util/Random.h"

extern "C" {

s32 randBetween(s32 lower, s32 upper);

/* Returns a random integer in [lower, upper] divided by `divisor`, signed as `signMode` says
 * (RANDOM_SIGN_*); 0 for any other mode. */
f32 randomSignedScaledRange(s32 signMode, s32 lower, s32 upper, u32 divisor)
{
    f32 result = 0.0f;
    if (signMode == RANDOM_SIGN_POSITIVE) {
        result = (f32)randBetween(lower, upper) / (f32)divisor;
    } else if (signMode == RANDOM_SIGN_NEGATIVE) {
        result = -((f32)randBetween(lower, upper) / (f32)divisor);
    } else if (signMode == RANDOM_SIGN_RANDOM) {
        s8 sign = randBetween(0, 1);
        if (sign == 0) {
            result = -((f32)randBetween(lower, upper) / (f32)divisor);
        } else {
            result = (f32)randBetween(lower, upper) / (f32)divisor;
        }
    }
    return result;
}

} /* extern "C" */
