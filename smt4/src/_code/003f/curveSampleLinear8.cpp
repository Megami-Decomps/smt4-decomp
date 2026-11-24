#include "gfx/LinearCurve.h"

/* Samples the scalar curve at `time`, blending linearly with the next key. */
extern "C" f32 curveSampleLinear8(const LinearCurve<LinearCurveKey> *curve, f32 time)
{
    const LinearCurveKey *key = linearCurveFindKey(curve, time);
    const LinearCurveKey *last = &curve->keys[curve->count - 1];
    f32 keyTime = key->time;
    if (keyTime == time || key == last) {
        return key->value;
    }
    const LinearCurveKey *next = key + 1;
    f32 nextTime = next->time;
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    return key->value * (1.0f - fraction) + next->value * fraction;
}
