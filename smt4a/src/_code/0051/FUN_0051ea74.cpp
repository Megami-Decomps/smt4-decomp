/* NON_MATCHING: packed-key conversions, VFP temporaries and Hermite argument scheduling differ from retail. */
#include "shard/AnimCurve.h"

struct PackedHermiteCurve {
    u16 keyCount;
    u8 unk02[6];
    f32 valueScale, valueOffset, frameScale;
    PackedAnimKeyWide keys[1];
};
extern "C" {
const PackedAnimKeyWide *FUN_0051d95c(const PackedHermiteCurve *curve, f32 frame);
f32 nn_math_ARMv6_HermiteC_FAST(f32 value, f32 outgoing, f32 nextValue, f32 incoming, f32 elapsed, f32 duration);

// Sample a packed Hermite curve, scaling its integer values and fixed-point tangents.
f32 FUN_0051ea74(const PackedHermiteCurve *curve, f32 frame)
{
    FUN_0051d95c(curve, frame);
    const PackedAnimKeyWide *last = &curve->keys[curve->keyCount - 1];
    const PackedAnimKeyWide *key = FUN_0051d95c(curve, frame);
    f32 keyFrame = (f32)key->frame * curve->frameScale;
    if (keyFrame == frame || key == last)
        return curve->valueOffset + (f32)key->value * curve->valueScale;
    const PackedAnimKeyWide *next = key + 1;
    return nn_math_ARMv6_HermiteC_FAST(
        curve->valueOffset + (f32)key->value * curve->valueScale,
        (f32)(s16)(key->tangent >> 16) * 0.00390625f,
        curve->valueOffset + (f32)next->value * curve->valueScale,
        (f32)(s16)next->tangent * 0.00390625f,
        frame - keyFrame, (f32)next->frame * curve->frameScale - keyFrame);
}
}
