/* NON_MATCHING: VFP registers differ (retail converts the key frame in s0 with the duration in s2, and loads the value base before the scale). */
/* Linearly interpolates a scalar stored in twelve-bit packed animation keys. */
#include "shard/AnimCurve.h"

struct FrameCurve;
struct CurveKey;
extern "C" CurveKey *frameCurveFindKeyAtTime(FrameCurve *curve, f32 time);

/* unit-local: the lookup's private FrameCurve type leaves its scale/base pair in byte padding. */
struct NarrowCurveView {
    u16 count;
    u8 unk02[6];
    f32 scale;
    f32 base;
    f32 frameDuration;
    PackedAnimKeyNarrow keys[1];
};

/* A key's twelve-bit value scaled into the curve's range (resourceGetPackedSampleFloat's decode). */
static __inline f32 narrowKeyValue(const NarrowCurveView *curve, const PackedAnimKeyNarrow *key)
{
    u32 sample = (u32)key->valueLow + (((u32)key->valueHigh & 0x0F) << 8);
    return curve->base + (f32)sample * curve->scale;
}

extern "C" f32 curveSampleLinearPacked(FrameCurve *source, f32 time)
{
    NarrowCurveView *curve = (NarrowCurveView *)source;
    PackedAnimKeyNarrow *key = (PackedAnimKeyNarrow *)frameCurveFindKeyAtTime(source, time);
    f32 keyTime = curve->frameDuration * (f32)(u32)key->frame;
    PackedAnimKeyNarrow *last = &curve->keys[curve->count - 1];
    if (keyTime == time || key == last) {
        return narrowKeyValue(curve, key);
    }
    PackedAnimKeyNarrow *next = key + 1;
    f32 nextTime = curve->frameDuration * (f32)(u32)next->frame;
    f32 factor = (time - keyTime) / (nextTime - keyTime);
    return narrowKeyValue(curve, key) * (1.0f - factor) + narrowKeyValue(curve, next) * factor;
}
