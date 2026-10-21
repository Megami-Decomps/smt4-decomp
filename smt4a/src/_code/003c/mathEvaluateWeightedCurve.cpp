/* NON_MATCHING: retail uses `vmul.f32 s6, s2, s6` where armcc emits `vmul.f32 s2, s2, s4`. */
#include "common.h"

extern "C" {



f32 mathEvaluateWeightedCurve(f32 first, f32 weight, f32 scale, f32 base)
{
    f32 halfScale = scale * 0.5f;
    f32 factor = (first * 2.0f - weight) + 1.0f;
    return halfScale * weight * factor + base * weight;
}

} /* extern "C" */
