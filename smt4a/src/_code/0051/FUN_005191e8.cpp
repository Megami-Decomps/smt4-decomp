/* NON_MATCHING: last-key address loads and packed interpolation VFP scheduling differ. */
#include "shard/AnimCurve.h"

extern "C" const PackedAnimKeyWide *FUN_0051ca30(const AnimCurve *curve, f32 frame);

// Linearly sample the native-header form of the eight-byte packed scalar curve.
extern "C" f32 FUN_005191e8(const AnimCurve *curve, f32 frame)
{
    const PackedAnimKeyWide *key = FUN_0051ca30(curve, frame);
    f32 keyFrame = curve->duration * (f32)key->frame;
    if (keyFrame == frame || key == &curve->packedScalarKeys[curve->keyCount - 1]) {
        return curve->values.base + (f32)key->value * curve->values.scale;
    }
    f32 nextFrame = curve->duration * (f32)key[1].frame;
    f32 fraction = (frame - keyFrame) / (nextFrame - keyFrame);
    f32 value = curve->values.base + (f32)key->value * curve->values.scale;
    f32 nextValue = curve->values.base + (f32)key[1].value * curve->values.scale;
    return value * (1.0f - fraction) + nextValue * fraction;
}
