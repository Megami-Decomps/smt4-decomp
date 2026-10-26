/* NON_MATCHING: the last-key address and the combined key compare now match; the packed interpolation VFP scheduling differs. */
#include "shard/AnimCurve.h"

extern "C" const PackedAnimKeyWide *FUN_003f89f8(const PackedAnimCurveWide *curve, f32 frame);

// Linearly sample an inline curve whose packed keys include an auxiliary word.
extern "C" f32 FUN_003f9654(const PackedAnimCurveWide *curve, f32 frame)
{
    const PackedAnimKeyWide *key = FUN_003f89f8(curve, frame);
    const PackedAnimKeyWide *last = &curve->keys[curve->keyCount - 1];
    f32 keyFrame = curve->timeScale * (f32)key->frame;
    if (keyFrame == frame || key == last) {
        return curve->valueBase + (f32)key->value * curve->valueScale;
    }
    f32 nextFrame = curve->timeScale * (f32)key[1].frame;
    f32 fraction = (frame - keyFrame) / (nextFrame - keyFrame);
    f32 value = curve->valueBase + (f32)key->value * curve->valueScale;
    f32 nextValue = curve->valueBase + (f32)key[1].value * curve->valueScale;
    return value * (1.0f - fraction) + nextValue * fraction;
}
