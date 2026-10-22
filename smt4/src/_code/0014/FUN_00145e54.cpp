/* NON_MATCHING: retail 58 vs built 57 rows; vector loads and VFP normalization/cross-product scheduling differ. */
#include "shard/W6_W6Match6_ProjectionCamera.h"

extern "C" {
void FUN_002ad314(f32 *, f32 *, f32);

void FUN_00145e54(CameraLookAt *camera)
{
    f32 x = camera->eye[0] - camera->target[0];
    f32 y = camera->eye[1] - camera->target[1];
    f32 z = camera->eye[2] - camera->target[2];
    f32 sideX = z;
    f32 sideY = 0.0f;
    f32 sideZ = -x;
    f32 inverseLength = 1.0f / __sqrtf(x * x + y * y + z * z);
    f32 inverseSideLength = 1.0f / __sqrtf(sideX * sideX + sideY * sideY + sideZ * sideZ);
    x *= inverseLength;
    y *= inverseLength;
    z *= inverseLength;
    sideX *= inverseSideLength;
    sideY *= inverseSideLength;
    sideZ *= inverseSideLength;
    f32 upX = y * sideZ - z * sideY;
    f32 upY = z * sideX - x * sideZ;
    f32 upZ = x * sideY - y * sideX;
    f32 sine, cosine;
    FUN_002ad314(&sine, &cosine, camera->rollRadians * 40.743664f);
    camera->up[0] = upX * cosine - sine * sideX;
    camera->up[1] = upY * cosine;
    camera->up[2] = upZ * cosine - sine * sideZ;
}
}
