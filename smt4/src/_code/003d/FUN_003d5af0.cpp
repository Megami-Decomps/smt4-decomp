/* NON_MATCHING: target/up vector copies are ldm/stm pairs here but ldr+ldrd in retail for the eye, the distance terms schedule differently, and the VFP constants are allocated differently */
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include <math.h>

using nw::math::MTX34;
using nw::math::MTX44;

extern "C" {
void FUN_002c1edc(void *owner);
void FUN_002929d8(MTX34 *matrix, s32 mode, f32 x, f32 y, f32 z);
void FUN_002ad314(f32 *first, f32 *second, f32 angle);
void FUN_002b77f4(void *destination, const MTX34 *source);
void FUN_0011d084(AsdCamera *camera, const MTX34 *view);
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *dest, const MTX34 *source);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(AsdCameraVec3 *vector, const MTX34 *matrix);
void nn_math_ARMv6_MTX44TransposeAsm(MTX44 *dest, const MTX44 *source);

/* Points the camera from `eye` at `target`, keeps `up` (turned by `rotation`, in 1/256 turn units
   per degree) as its up vector and rebuilds the view matrices; with no roll in `rotation` the
   owner's plain handler runs instead. */
void FUN_003d5af0(void *owner, AsdCamera *camera, const AsdCameraVec3 *eye, const AsdCameraVec3 *target,
                  const AsdCameraVec3 *up, const AsdCameraVec3 *rotation)
{
    if (rotation->z == 0.0f) {
        FUN_002c1edc(static_cast<u8 *>(owner) + 0x58);
        return;
    }
    camera->eye = *eye;
    camera->target = *target;
    camera->up = *up;
    camera->unk001 = 0;
    if ((camera->eye.x - camera->target.x) * (camera->eye.x - camera->target.x) +
            (camera->eye.y - camera->target.y) * (camera->eye.y - camera->target.y) +
            (camera->eye.z - camera->target.z) * (camera->eye.z - camera->target.z) !=
        0.0f) {
        f32 dx = camera->eye.x - camera->target.x;
        f32 dy = camera->eye.y - camera->target.y;
        f32 dz = camera->eye.z - camera->target.z;
        f32 (*view)[4] = camera->view.m;
        if (dx == 0.0f && dz == 0.0f) {
            view[0][0] = 1.0f;
            view[0][1] = 0.0f;
            view[0][2] = 0.0f;
            view[0][3] = -camera->eye.x;
            view[1][0] = 0.0f;
            view[1][1] = 0.0f;
            view[2][0] = 0.0f;
            view[2][2] = 0.0f;
            if (dy > 0.0f) {
                view[1][2] = -1.0f;
                view[1][3] = camera->eye.z;
                view[2][1] = 1.0f;
                view[2][3] = -camera->eye.y;
            } else {
                view[1][2] = 1.0f;
                view[1][3] = -camera->eye.z;
                view[2][1] = -1.0f;
                view[2][3] = camera->eye.y;
            }
        } else {
            f32 sine;
            f32 cosine;
            f32 inverse = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);
            f32 forwardY = dy * inverse;
            f32 forwardX = dx * inverse;
            f32 forwardZ = dz * inverse;
            inverse = 1.0f / sqrtf(dz * dz + dx * dx);
            f32 sideX = dz * inverse;
            f32 sideZ = -(dx * inverse);
            f32 upX = forwardZ * sideX - forwardX * sideZ;
            f32 upY = forwardX * 0.0f - forwardY * sideX;
            f32 upZ = forwardY * sideZ - forwardZ * 0.0f;
            FUN_002ad314(&sine, &cosine, rotation->z * (256.0f / 360.0f));
            f32 rowX0 = sine * upZ + cosine * sideX;
            f32 rowX1 = cosine * upZ - sine * sideX;
            f32 rowZ0 = sine * upY + cosine * sideZ;
            f32 rowZ1 = cosine * upY - sine * sideZ;
            f32 rowY0 = sine * upX;
            f32 rowY1 = cosine * upX;
            view[0][0] = rowX0;
            view[0][1] = rowY0;
            view[0][2] = rowZ0;
            view[0][3] = -(camera->eye.x * rowX0 + camera->eye.y * rowY0 + camera->eye.z * rowZ0);
            view[1][0] = rowX1;
            view[1][1] = rowY1;
            view[1][2] = rowZ1;
            view[1][3] = -(camera->eye.x * rowX1 + camera->eye.y * rowY1 + camera->eye.z * rowZ1);
            view[2][0] = forwardX;
            view[2][1] = forwardY;
            view[2][2] = forwardZ;
            view[2][3] = -(camera->eye.x * forwardX + camera->eye.y * forwardY + camera->eye.z * forwardZ);
        }
        MTX34 turn;
        nn_math_ARMv6_MTX34CopyAsm(&turn, &MTX34::Identity());
        FUN_002929d8(&turn, 1, rotation->x * (256.0f / 360.0f), rotation->y * (256.0f / 360.0f), rotation->z * (256.0f / 360.0f));
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&camera->up, &turn);
        FUN_002b77f4(camera->unk128, &camera->view);
        *reinterpret_cast<MTX34 *>(&camera->viewTransposed) = camera->view;
        camera->viewTransposed.m[3][0] = 0.0f;
        camera->viewTransposed.m[3][1] = 0.0f;
        camera->viewTransposed.m[3][2] = 0.0f;
        camera->viewTransposed.m[3][3] = 1.0f;
        nn_math_ARMv6_MTX44TransposeAsm(&camera->viewTransposed, &camera->viewTransposed);
        if (camera->enabled == 0) {
            return;
        }
    } else {
        if (camera->enabled == 0) {
            return;
        }
        MTX34 turn;
        nn_math_ARMv6_MTX34CopyAsm(&turn, &MTX34::Identity());
    }
    FUN_0011d084(camera, &camera->view);
}
}
