#include "gfx/LinearCurve.h"

/* Samples the curve at `time`, blending linearly with the next key. */
extern "C" f32 curveSampleLinear(const LinearCurve<WideLinearCurveKey> *curve, f32 time)
{
    const WideLinearCurveKey *key = linearCurveFindKey(curve, time);
    const WideLinearCurveKey *last = &curve->keys[curve->count - 1];
    f32 keyTime = key->time;
    if (keyTime == time || key == last) {
        return key->value;
    }
    const WideLinearCurveKey *next = key + 1;
    f32 nextTime = next->time;
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    return key->value * (1.0f - fraction) + next->value * fraction;
}
