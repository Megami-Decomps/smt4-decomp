/* NON_MATCHING: plane-vector VFP allocation, anchor selection and final normal stores differ. */
#include "status/StatusCamera.h"
#include <math.h>

static inline f32 planeDot(const Vec3 &a, const Vec3 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

/* Extrude a segment along axis 0..2, facing its plane toward reference. */
extern "C" void FUN_00237438(s32 axis, s32 anchor, Vec3 *normal, f32 *offset,
                            Vec3 reference, Vec3 first, Vec3 second)
{
    Vec3 a, b, c;
    switch (axis) {
    case 0:
        a.x = 0.0f; a.y = first.y; a.z = first.z;
        b.x = 0.0f; b.y = second.y; b.z = second.z;
        c.x = 10.0f; c.y = second.y; c.z = second.z;
        break;
    case 1:
        a.x = first.x; a.y = 0.0f; a.z = first.z;
        b.x = second.x; b.y = 0.0f; b.z = second.z;
        c.x = second.x; c.y = 10.0f; c.z = second.z;
        break;
    case 2:
        a.x = first.x; a.y = first.y; a.z = 0.0f;
        b.x = second.x; b.y = second.y; b.z = 0.0f;
        c.x = second.x; c.y = second.y; c.z = 10.0f;
        break;
    }
    Vec3 edge1 = {b.x - a.x, b.y - a.y, b.z - a.z};
    Vec3 edge2 = {c.x - b.x, c.y - b.y, c.z - b.z};
    Vec3 direction = {
        edge1.y * edge2.z - edge1.z * edge2.y,
        edge1.z * edge2.x - edge1.x * edge2.z,
        edge1.x * edge2.y - edge1.y * edge2.x
    };
    f32 reciprocalLength = 1.0f / sqrtf(planeDot(direction, direction));
    direction.x *= reciprocalLength;
    direction.y *= reciprocalLength;
    direction.z *= reciprocalLength;
    if (direction.x > -0.0001f && direction.x < 0.0001f)
        direction.x = 0.0f;
    if (direction.y > -0.0001f && direction.y < 0.0001f)
        direction.y = 0.0f;
    if (direction.z > -0.0001f && direction.z < 0.0001f)
        direction.z = 0.0f;
    Vec3 point;
    if (anchor == 0)
        point = a;
    else if (anchor == 1)
        point = b;
    else
        point = c;
    f32 distance = planeDot(direction, point);
    if (planeDot(reference, direction) - distance < 0.0f) {
        direction.x = -direction.x;
        direction.y = -direction.y;
        direction.z = -direction.z;
        distance = planeDot(direction, point);
    }
    *normal = direction;
    *offset = distance;
}
