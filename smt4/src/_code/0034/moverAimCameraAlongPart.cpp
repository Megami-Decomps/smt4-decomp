/* NON_MATCHING: the rotation is nn::math's MTX34RotXYZRad over a copy of MTX34::Identity() (the local static retail
 * names _ZZN2nw4math5MTX348IdentityEvE8identity), with the batched index lookups; retail reads the part's position
 * into s18-s20 and reloads the part for the payload, uses a 164-byte frame and only r4-r7, and keeps 0 and 1 in s16/s17
 * for the identity's constructor. */
#include "shard/S1Mover.h"
#include "nw/math/MTX34.h"
#include "gfx/EulerPhaseRotation.h"

extern "C" {

extern const PhaseTrigEntry g_sinCosTable[];

Vec3f *cameraGetProviderEntryPayload(MovedPart *part);
void cameraExportProviderEntryWords(MovedPart *part, f32 *fovy, f32 *aspect, f32 *nearClip, f32 *farClip); // declcheck: local (code/Code002a_Smt4.h declares the outputs as u32 words; they are the camera's f32 field of view, aspect and clip distances)
void *asdCameraGetSavedRenderPairs(void);
void cameraMatrixCacheSetLookAt(void *camera, Vec3f *eye, Vec3f *target, Vec3f *up);
void stereoCameraSetPerspective(void *camera, s32 flag, f32 fovy, f32 nearClip, f32 farClip, f32 aspect);
void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *output, const nw::math::MTX34 *input); // declcheck: local (gfx/ResourceBounds.h declares it among the resource types)
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(Vec3f *out, const nw::math::MTX34 *m, const Vec3f *in);

/* Aim the scene camera along the moved part's orientation: eye at the part, looking along its -Z
 * axis with its Y axis up. */
void moverAimCameraAlongPart(Mover *mover)
{
    MovedPart *part = mover->parts[mover->slot];
    Vec3f position = {part->x, part->y, part->z};
    Vec3f rotation = *cameraGetProviderEntryPayload(mover->parts[mover->slot]);
    nw::math::MTX34 matrix;

    nn_math_ARMv6_MTX34CopyAsm(&matrix, &nw::math::MTX34::Identity());
    /* nn::math's MTX34RotXYZRad: the radians as indices of 256 steps a turn. */
    buildEulerPhaseRotationBatched((Matrix34Data *)&matrix, g_sinCosTable, rotation.x * 40.764328f,
                                   rotation.y * 40.764328f, rotation.z * 40.764328f);
    matrix.m[0][3] = 0.0f;
    matrix.m[1][3] = 0.0f;
    matrix.m[2][3] = 0.0f;

    Vec3f axis;
    axis.x = 0.0f;
    axis.y = 0.0f;
    axis.z = -1.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&axis, &matrix, &axis);
    mover->cameraEye = position;
    mover->cameraTarget.x = position.x + axis.x;
    mover->cameraTarget.y = position.y + axis.y;
    mover->cameraTarget.z = position.z + axis.z;
    axis.x = 0.0f;
    axis.y = 1.0f;
    axis.z = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&axis, &matrix, &axis);
    mover->cameraUp = axis;

    void *camera = asdCameraGetSavedRenderPairs();
    cameraMatrixCacheSetLookAt(camera, &mover->cameraEye, &mover->cameraTarget, &mover->cameraUp);
    f32 fovy, aspect, nearClip, farClip;
    cameraExportProviderEntryWords(mover->parts[mover->slot], &fovy, &aspect, &nearClip, &farClip);
    fovy = fovy * 180.0f * 0.31830987f;
    stereoCameraSetPerspective(camera, 1, fovy, nearClip, farClip, aspect);
}

} /* extern "C" */
