/* NON_MATCHING: retail shares its final multiply-add tail; compiler duplicates epilogues and schedules VFP temporaries differently. */
#include "shard/AnimCurve.h"

extern "C" {
PackedScalarAnimKey *FUN_0051d658(PackedScalarAnimCurve *curve, f32 frame);

f32 FUN_0051decc(PackedScalarAnimCurve *curve, f32 frame)
{
    FUN_0051d658(curve, frame);
    PackedScalarAnimKey *last = &curve->keys[curve->keyCount - 1];
    PackedScalarAnimKey *key = FUN_0051d658(curve, frame);
    f32 keyFrame = curve->timeScale * (f32)key->frame;
    f32 value;
    if (keyFrame == frame || key == last) {
        value = curve->valueBase + (f32)key->value * curve->valueScale;
    } else {
        f32 nextFrame = curve->timeScale * (f32)key[1].frame;
        f32 factor = (frame - keyFrame) / (nextFrame - keyFrame);
        f32 firstValue = curve->valueBase + (f32)key->value * curve->valueScale;
        f32 nextValue = curve->valueBase + (f32)key[1].value * curve->valueScale;
        value = firstValue * (1.0f - factor) + nextValue * factor;
    }
    return value;
}
}
