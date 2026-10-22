/* NON_MATCHING: the axis is read as x then {y,z} with vldmia in retail, and the length and sine land in other VFP registers. */
#include "common.h"

extern "C" {

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

f32 sqrtf(f32 value);
f32 FUN_001a1ee0(f32 angle);
f32 FUN_001b63b0(f32 angle);
void FUN_003bfb50(void *out, const Vec3f *axis, u32 arg, f32 oneMinusCos, f32 sine);

static __inline void vec3Normalize(Vec3f *out, const Vec3f *v)
{
    f32 lengthSq = v->x * v->x + v->y * v->y + v->z * v->z;
    f32 scale;

    if (lengthSq == 0.0f) {
        lengthSq = 1.0f;
    }
    scale = 1.0f / sqrtf(lengthSq);
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
}

/* Builds the rotation of `degrees` around `axis` (normalized here) into `out`. */
void *FUN_00237354(void *out, const Vec3f *axis, u32 arg, f32 degrees)
{
    f32 radians = degrees * 0.017453292f;
    Vec3f unit;
    f32 angle;
    f32 sine;

    vec3Normalize(&unit, axis);
    angle = radians * 40.743664f;
    sine = FUN_001a1ee0(angle);
    FUN_003bfb50(out, &unit, arg, 1.0f - FUN_001b63b0(angle), sine);
    return out;
}

} /* extern "C" */
