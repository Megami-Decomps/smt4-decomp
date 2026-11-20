/* NON_MATCHING: look-at update rebuilt with the native MTX34::Identity() copy (retail's guarded static) and struct copies of position/angles; the inlined Euler phase rotation (sin/cos samples) still differs from retail's 226-row schedule (208 built). */
#include "gfx/EulerPhaseRotation.h"
#include "code/Code0015.h"
#include "nw/math/MTX34.h"

struct CameraAngles {
    f32 values[3];
};

struct CameraPoint {
    f32 x, y, z;
};

/* A camera (only the fields the update reads and writes). */
struct LookAtCamera {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u8 unk008[0x554];
    /* 0x55C */ CameraPoint eye;
    /* 0x568 */ CameraPoint target;
    /* 0x574 */ u8 unk574[0x10];
    /* 0x584 */ CameraPoint up;
    /* 0x590 */ u8 unk590[4];
    /* 0x594 */ void *unk594;
    /* 0x598 */ u8 unk598[0x1C];
    /* 0x5B4 */ CameraPoint position;
    /* 0x5C0 */ CameraAngles angles;
};

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[];

void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *destination, const nw::math::MTX34 *source);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *vector, f32 *matrix);
void cameraMatrixCacheSetLookAt(u32 handle, f32 *eye, f32 *target, f32 *up);
void stereoCameraSetPerspective(u32 handle, s32 flag);

/* Recomputes the camera's eye, target and up vectors from its position and angles. */
void spatialCameraUpdateLookAt(LookAtCamera *camera)
{
    CameraPoint position = camera->position;
    CameraAngles angles = camera->angles;
    Matrix34Data matrix;
    nn_math_ARMv6_MTX34CopyAsm(reinterpret_cast<nw::math::MTX34 *>(&matrix), &nw::math::MTX34::Identity());
    buildEulerPhaseRotation(&matrix, 1, g_sinCosTable, angles.values[0] * 40.764328f, angles.values[1] * 40.764328f,
                            angles.values[2] * 40.764328f);
    CameraPoint forward;
    forward.x = 0.0f;
    forward.y = 0.0f;
    forward.z = -1.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&forward.x, matrix.values);
    camera->eye = position;
    camera->target.x = position.x + forward.x;
    camera->target.y = position.y + forward.y;
    camera->target.z = position.z + forward.z;
    CameraPoint up;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&up.x, matrix.values);
    camera->up = up;
    u32 handle = asdCameraGetSavedRenderPairs();
    cameraMatrixCacheSetLookAt(handle, &camera->eye.x, &camera->target.x, &camera->up.x);
    stereoCameraSetPerspective(handle, 1);
}

} /* extern "C" */
