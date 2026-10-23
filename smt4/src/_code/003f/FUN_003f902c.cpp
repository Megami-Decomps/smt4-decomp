/* NON_MATCHING: key-pointer register allocation and interpolation floating-point expression scheduling differ; local key-rate view preserves padding alignment. */
#include "shard/AnimCurve.h"

extern "C" f32 hardfp_floorf(f32 value);

// Locate packed scalar keys using the estimated index, then linearly interpolate.
extern "C" f32 FUN_003f902c(const PackedScalarAnimCurve *curve, f32 time)
{
    // The key-rate float sits inside the canonical header's unaligned padding span.
    struct CurveView {
        u16 keyCount;
        u16 unk02;
        f32 keyRate;
        f32 valueScale, valueBase, timeScale;
        PackedScalarAnimKey keys[1];
    };
    typedef char CurveViewOffsets[offsetof(CurveView, keyRate) == 4 &&
        offsetof(CurveView, keys) == 0x14 && sizeof(CurveView) == sizeof(PackedScalarAnimCurve) ? 1 : -1];
    const CurveView *data = reinterpret_cast<const CurveView *>(curve);
    f32 timeScale = data->timeScale;
    u32 frame = (u32)hardfp_floorf(time / timeScale + 0.5f);
    const PackedScalarAnimKey *key = data->keys;
    const PackedScalarAnimKey *last = data->keys + data->keyCount - 1;
    if (data->keys[0].frame <= frame) {
        key = last;
        if (frame < last->frame) {
            u32 estimate = (u32)(data->keyRate * (s32)(data->keyCount - 1) * time);
            key = &data->keys[estimate];
            if (frame < key->frame) {
                do { --key; } while (frame < key->frame);
            } else {
                do { ++key; } while (key->frame <= frame);
                --key;
            }
        }
    }
    f32 keyTime = timeScale * key->frame;
    f32 result;
    if (keyTime == time || key == last) {
        result = data->valueBase + (f32)key->value * data->valueScale;
    } else {
        f32 nextTime = timeScale * key[1].frame;
        f32 fraction = (time - keyTime) / (nextTime - keyTime);
        f32 firstValue = data->valueBase + (f32)key->value * data->valueScale;
        f32 nextValue = data->valueBase + (f32)key[1].value * data->valueScale;
        result = firstValue * (1.0f - fraction) + nextValue * fraction;
    }
    return result;
}
