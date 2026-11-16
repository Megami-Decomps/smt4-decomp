#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {

/* The mean of four values. */
static __inline f32 average4(f32 a, f32 b, f32 c, f32 d)
{
    return ((a + b) + (c + d)) * 0.25f;
}

/* Projects the quadrilateral's center onto the selected coordinate plane. */
void FUN_0026e80c(s32 axis, CollisionVector *output, CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d)
{
    CollisionVector result;
    if (axis == 0) {
        result.x = 0.0f;
        result.y = average4(a.y, b.y, c.y, d.y);
        result.z = average4(a.z, b.z, c.z, d.z);
    } else if (axis == 1) {
        result.x = average4(a.x, b.x, c.x, d.x);
        result.y = 0.0f;
        result.z = average4(a.z, b.z, c.z, d.z);
    } else if (axis == 2) {
        result.x = average4(a.x, b.x, c.x, d.x);
        result.y = average4(a.y, b.y, c.y, d.y);
        result.z = 0.0f;
    }
    *output = result;
}
}
