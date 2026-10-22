/* NON_MATCHING: The compiler reuses the averaged coordinates' VFP registers and combines the quarter-factor literal loads. */
#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {
/* Projects the quadrilateral's center onto the selected coordinate plane. */
void FUN_0026e80c(s32 axis, CollisionVector *output, CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d)
{
    f32 y = ((a.y + b.y) + (c.y + d.y)) * 0.25f;
    f32 z = ((a.z + b.z) + (c.z + d.z)) * 0.25f;
    CollisionVector result;
    if (axis == 0) {
        result.x = 0.0f;
        result.y = y;
        result.z = z;
    } else {
        f32 x = ((a.x + b.x) + (c.x + d.x)) * 0.25f;
        if (axis == 1) {
            result.x = x;
            result.y = 0.0f;
            result.z = z;
        } else if (axis == 2) {
            result.x = x;
            result.y = y;
            result.z = 0.0f;
        }
    }
    *output = result;
}
}
