/* NON_MATCHING: readable rebuild of a camera's look-at update from its position and Euler angles (the draft's inlined sin/cos lookups are the shared Euler phase rotation); retail also copies nw::math::MTX34::Identity (a guarded function-local static) into the matrix first, which the full rotation fill here makes unnecessary, and keeps the three phase reductions batched. */
#include "gfx/EulerPhaseRotation.h"
#include "code/Code0015.h"

/* A camera (only the fields the update reads and writes). */
struct LookAtCamera {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u8 unk008[0x554];
    /* 0x55C */ f32 eye[3];
    /* 0x568 */ f32 target[3];
    /* 0x574 */ u8 unk574[0x10];
    /* 0x584 */ f32 up[3];
    /* 0x590 */ u8 unk590[4];
    /* 0x594 */ void *unk594;
    /* 0x598 */ u8 unk598[0x1C];
    /* 0x5B4 */ f32 position[3];
    /* 0x5C0 */ f32 angles[3];
};

extern "C" {
extern const PhaseTrigEntry DAT_00536d14[];

void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *vector, f32 *matrix);
void FUN_0014f0dc(u32 handle, f32 *eye, f32 *target, f32 *up);
void FUN_001523b8(u32 handle, s32 flag);

/* Recomputes the camera's eye, target and up vectors from its position and angles. */
void FUN_00407598(LookAtCamera *camera)
{
    f32 positionX = camera->position[0];
    f32 positionY = camera->position[1];
    f32 positionZ = camera->position[2];
    Matrix34Data matrix;
    buildEulerPhaseRotation(&matrix, 1, DAT_00536d14, camera->angles[0] * 40.764328f,
                            camera->angles[1] * 40.764328f, camera->angles[2] * 40.764328f);
    f32 forward[3] = { 0.0f, 0.0f, -1.0f };
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(forward, matrix.values);
    camera->eye[0] = positionX;
    camera->eye[1] = positionY;
    camera->eye[2] = positionZ;
    camera->target[0] = positionX + forward[0];
    camera->target[1] = positionY + forward[1];
    camera->target[2] = positionZ + forward[2];
    f32 up[3] = { 0.0f, 1.0f, 0.0f };
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(up, matrix.values);
    camera->up[0] = up[0];
    camera->up[1] = up[1];
    camera->up[2] = up[2];
    u32 handle = FUN_00152f54();
    FUN_0014f0dc(handle, camera->eye, camera->target, camera->up);
    FUN_001523b8(handle, 1);
}

} /* extern "C" */
