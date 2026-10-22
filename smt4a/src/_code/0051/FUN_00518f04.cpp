/* NON_MATCHING: final-key branch placement and VFP instruction scheduling differ. */
#include "shard/AnimCurve.h"

extern "C" const AnimKey *FUN_0051b830(const AnimCurve *, f32);

/* Linearly interpolate scaled unsigned key values at the requested time. */
extern "C" f32 FUN_00518f04(const AnimCurve *curve, f32 time)
{
    const AnimKey *key = FUN_0051b830(curve, time);
    f32 keyTime = (f32)(u32)key->frame * 0.03125f * curve->duration;
    if (keyTime == time || key == curve->keys + curve->keyCount - 1) {
        return curve->values.base + (f32)(u32)key->data.value * curve->values.scale;
    }
    f32 nextTime = (f32)(u32)key[1].frame * 0.03125f * curve->duration;
    f32 weight = (time - keyTime) / (nextTime - keyTime);
    return (curve->values.base + (f32)(u32)key->data.value * curve->values.scale) * (1.0f - weight) +
           (curve->values.base + (f32)(u32)key[1].data.value * curve->values.scale) * weight;
}
