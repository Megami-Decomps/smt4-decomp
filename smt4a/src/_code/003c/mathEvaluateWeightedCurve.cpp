/* NON_MATCHING: constant 2 and 1 load into s4/s5 in the opposite order from retail; arithmetic now matches. */
#include "common.h"

extern "C" {

f32 mathEvaluateWeightedCurve(f32 first, f32 weight, f32 scale, f32 base)
{
    return (0.5f * scale) * weight * (2.0f * first - weight + 1.0f) + base * weight;
}

} /* extern "C" */
