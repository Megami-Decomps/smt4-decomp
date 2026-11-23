#include "shard/S1Mover.h"
#include <math.h>

extern "C" {

f32 mathSinFixedAngle(f32 angle);
f32 phaseCosInterpolate(f32 angle);
void FUN_003219b0(void *out, const Vec3f *axis, u32 arg, f32 oneMinusCos, f32 sine);

/* nn::math::SinRad and CosRad (SDK header inlines): the table lookups take the angle as a table index
 * (65536 per turn). FUN_003041a0 has the same sine helper. */
static __inline f32 sinRadians(f32 radians)
{
    return mathSinFixedAngle(radians * 40.743664f);
}

static __inline f32 cosRadians(f32 radians)
{
    return phaseCosInterpolate(radians * 40.743664f);
}

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

    vec3Normalize(&unit, axis);
    f32 sine = sinRadians(radians);
    f32 cosine = cosRadians(radians);
    FUN_003219b0(out, &unit, arg, 1.0f - cosine, sine);
    return out;
}

} /* extern "C" */
