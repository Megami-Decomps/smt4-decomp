/* NON_MATCHING: 215 lines (177 by shape). The prologue, the constants, the straight up/down arm, both
 * identity copies and the tails are retail's. Retail copies eye/target/up with plain word moves and
 * reloads all six coordinates for the distance test (the build forwards eye.z and target.y out of the
 * copies), recomputes the eye-to-target differences and the squared length inside the look-at instead of
 * sharing them with that test, and computes the look-at's three translations before its first store, from
 * one load of the eye. */
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "nw/math/VEC3.h"

using nw::math::MTX34;
using nw::math::MTX44;
using nw::math::VEC3;

extern "C" {
void cameraMatrixCacheSetLookAt(void *camera, const AsdCameraVec3 *eye, const AsdCameraVec3 *target,
                                const AsdCameraVec3 *up);
void FUN_002929d8(MTX34 *matrix, s32 clearTranslation, f32 x, f32 y, f32 z);
void FUN_002b77f4(void *destination, const MTX34 *source);
void FUN_0011d084(AsdCamera *camera, const MTX34 *view);
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *dest, const MTX34 *source);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(AsdCameraVec3 *out, const MTX34 *matrix, const AsdCameraVec3 *vector);
void nn_math_ARMv6_MTX44TransposeAsm(MTX44 *dest, const MTX44 *source);

/* Points the camera from `eye` at `target`, rolled by `rotation->z` degrees: the view matrix is
 * nn::math's look-at with a twist, and `up` is turned by the whole `rotation`. With no roll the
 * owner's plain look-at runs instead. */
void asdCameraSetLookAtRoll(void *owner, AsdCamera *camera, const AsdCameraVec3 *eye, const AsdCameraVec3 *target,
                  const AsdCameraVec3 *up, const AsdCameraVec3 *rotation)
{
    if (rotation->z == 0.0f) {
        cameraMatrixCacheSetLookAt((u8 *)owner + 0x58, eye, target, up);
        return;
    }
    camera->eye = *eye;
    camera->target = *target;
    camera->up = *up;
    camera->unk001 = 0;
    f32 dx = camera->eye.x - camera->target.x;
    f32 dy = camera->eye.y - camera->target.y;
    f32 dz = camera->eye.z - camera->target.z;
    if (dx * dx + dy * dy + dz * dz != 0.0f) {
        nw::math::MTX34LookAt(&camera->view, (const VEC3 *)&camera->eye, rotation->z, (const VEC3 *)&camera->target);
        MTX34 turn;
        nn_math_ARMv6_MTX34CopyAsm(&turn, &MTX34::Identity());
        FUN_002929d8(&turn, 1, NW_MATH_DEG_TO_FIDX(rotation->x), NW_MATH_DEG_TO_FIDX(rotation->y),
                     NW_MATH_DEG_TO_FIDX(rotation->z));
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&camera->up, &turn, &camera->up);
        FUN_002b77f4(camera->unk128, &camera->view);
        *(MTX34 *)&camera->viewTransposed = camera->view;
        camera->viewTransposed.m[3][0] = 0.0f;
        camera->viewTransposed.m[3][1] = 0.0f;
        camera->viewTransposed.m[3][2] = 0.0f;
        camera->viewTransposed.m[3][3] = 1.0f;
        nn_math_ARMv6_MTX44TransposeAsm(&camera->viewTransposed, &camera->viewTransposed);
        if (camera->enabled)
            FUN_0011d084(camera, &camera->view);
    } else {
        /* The eye is on the target: the view is left as it is. */
        if (camera->enabled) {
            MTX34 turn;
            nn_math_ARMv6_MTX34CopyAsm(&turn, &MTX34::Identity());
            FUN_0011d084(camera, &camera->view);
        }
    }
}
}
