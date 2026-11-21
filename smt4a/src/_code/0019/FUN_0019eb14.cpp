/* NON_MATCHING: 66 lines: retail loads the zero of the side vector only when normalizing it, finishes the cross product before the roll angle, and stores up[1..2] with one vstmia. */
#include "shard/W6_W6Match6_ProjectionCamera.h"

/* Scales the vector to unit length. */
static __inline void vec3Normalize(f32 &x, f32 &y, f32 &z)
{
    f32 inverseLength = 1.0f / __sqrtf(x * x + y * y + z * z);
    x *= inverseLength;
    y *= inverseLength;
    z *= inverseLength;
}

extern "C" {
void mathSinCos(f32 *, f32 *, f32);

/* Sets the camera's up vector: perpendicular to the view direction, rolled by rollRadians. */
void FUN_0019eb14(CameraLookAt *camera)
{
    f32 x = camera->eye[0] - camera->target[0];
    f32 y = camera->eye[1] - camera->target[1];
    f32 z = camera->eye[2] - camera->target[2];
    f32 sideX = z;
    f32 sideY = 0.0f;
    f32 sideZ = -x;
    vec3Normalize(x, y, z);
    vec3Normalize(sideX, sideY, sideZ);
    f32 upX = y * sideZ - z * sideY;
    f32 upY = z * sideX - x * sideZ;
    f32 upZ = x * sideY - y * sideX;
    f32 sine, cosine;
    mathSinCos(&sine, &cosine, camera->rollRadians * 40.743664f);
    camera->up[0] = upX * cosine - sine * sideX;
    camera->up[1] = upY * cosine;
    camera->up[2] = upZ * cosine - sine * sideZ;
}
}
