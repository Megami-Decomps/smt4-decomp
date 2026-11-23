#include "common.h"

extern "C" {

/* Evaluates the weighted base value plus its quadratic correction. */
f32 mathEvaluateWeightedCurve(f32 first, f32 weight, f32 scale, f32 base)
{
    f32 correction = (scale * 0.5f) * weight * ((2.0f * first - weight) + 1.0f);
    return correction + base * weight;
}

} /* extern "C" */
