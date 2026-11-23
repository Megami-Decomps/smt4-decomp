/* NON_MATCHING: the normalisation now matches; retail keeps the shared 1.0 constant in s16 and the sine in s17, where this build swaps the two callee-saved registers. */
#include "shard/S1Mover.h"
#include <math.h>

extern "C" {

f32 phaseSine(f32 angle);
f32 phaseCosine(f32 angle);
void FUN_003bfb50(void *out, const Vec3f *axis, u32 arg, f32 oneMinusCos, f32 sine);

static __inline void vec3Normalize(Vec3f *out, const Vec3f *v)
{
    f32 lengthSq = v->x * v->x + v->y * v->y + v->z * v->z;
    f32 scale;

    lengthSq = lengthSq == 0.0f ? 1.0f : lengthSq;
    scale = 1.0f / sqrtf(lengthSq);
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
}

/* Builds the rotation of `degrees` around `axis` (normalized here) into `out`. */
void *rotationFromAxisDegrees(void *out, const Vec3f *axis, u32 arg, f32 degrees)
{
    f32 radians = degrees * 0.017453292f;
    Vec3f unit;
    f32 angle;
    f32 sine;

    vec3Normalize(&unit, axis);
    angle = radians * 40.743664f;
    sine = phaseSine(angle);
    FUN_003bfb50(out, &unit, arg, 1.0f - phaseCosine(angle), sine);
    return out;
}

} /* extern "C" */
