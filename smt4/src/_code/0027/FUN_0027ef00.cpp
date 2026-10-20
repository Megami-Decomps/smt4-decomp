/* NON_MATCHING: register allocation only: retail puts dx in s0 and dz in s1 (built: s1 and s0) */
#include "common.h"
#include <math.h>

extern "C" {

/* A sphere: centre and radius. */
typedef struct Sphere {
    f32 x;
    f32 y;
    f32 z;
    f32 radius;
} Sphere;

/* True when the two spheres overlap when seen from above (the y axis is ignored). */
u8 FUN_0027ef00(Sphere a, Sphere b)
{
    f32 dx = a.x - b.x;
    f32 dz = a.z - b.z;

    return a.radius + b.radius >= sqrtf(dx * dx + dz * dz);
}

} /* extern "C" */
