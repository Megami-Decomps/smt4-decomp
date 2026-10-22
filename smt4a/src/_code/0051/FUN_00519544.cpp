/* NON_MATCHING: Hermite argument VFP scheduling and tail-call selection differ. */
#include "shard/AnimCurve.h"

extern "C" {
AnimKey *FUN_0051b830(const AnimCurve *, f32);
f32 nn_math_ARMv6_HermiteC_FAST(f32, f32, f32, f32, f32, f32);
}

extern "C" f32 FUN_00519544(const AnimCurve *curve, f32 time)
{
    const AnimKey *key = FUN_0051b830(curve, time);
    f32 frame = f32(key->frame) * 0.03125f * curve->duration;
    if (frame == time || key == &curve->keys[curve->keyCount - 1]) {
        return f32(key->data.value) * curve->values.scale + curve->values.base;
    }
    f32 nextFrame = f32(key[1].frame) * 0.03125f * curve->duration;
    return nn_math_ARMv6_HermiteC_FAST(
        f32(key->data.value) * curve->values.scale + curve->values.base,
        f32(s16(key->data.unk04)) * 0.00390625f,
        f32(key[1].data.value) * curve->values.scale + curve->values.base,
        f32(s16(key[1].data.unk04)) * 0.00390625f,
        time - frame, nextFrame - frame);
}
