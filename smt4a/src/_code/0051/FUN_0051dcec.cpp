#include "shard/AnimCurve.h"

/* Samples the preceding key and scales its value into the output range. */
extern "C" f32 FUN_0051dcec(const QuantizedAnimCurve *curve, f32 time)
{
    return animKeyRawValue(animCurveFindQuantizedKey(curve, time)) * curve->valueScale + curve->valueBase;
}
