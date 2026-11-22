/* NON_MATCHING: 2 lines: retail loads the 1.0f of the point's w after its x, y and z; the build loads it first. */
#include "shard/S1Mover.h"
#include "nw/math/MTX44.h"
#include "nw/math/VEC4.h"

extern "C" {
const nw::math::MTX44 *_ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(nw::math::MTX44 *destination, const nw::math::MTX44 *source);
void FUN_002b2144(nw::math::MTX44 *matrix, f32 x, f32 y, f32 z);
void nn_math_ARMv6_MTX44MultAsm(nw::math::MTX44 *result, const nw::math::MTX44 *left, const nw::math::MTX44 *right);

/* Rotates the point about the x, then the y, then the z axis (angles in degrees, converted to the
 * rotation builder's 256-step units). */
void vec3RotateXyzDegrees(Vec3f *position, s32 xAngle, s32 yAngle, s32 zAngle)
{
    nw::math::VEC4 point;
    point.x = position->x;
    point.y = position->y;
    point.z = position->z;
    point.w = 1.0f;
    nw::math::MTX44 matrix;
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    nw::math::MTX44 xRotation;
    FUN_002b2144(&xRotation, (f32)xAngle * (256.0f / 360.0f), 0.0f, 0.0f);
    nn_math_ARMv6_MTX44MultAsm(&matrix, &matrix, &xRotation);
    vec4TransformMtx44(&point, &matrix, &point);
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    nw::math::MTX44 yRotation;
    FUN_002b2144(&yRotation, 0.0f, (f32)yAngle * (256.0f / 360.0f), 0.0f);
    nn_math_ARMv6_MTX44MultAsm(&matrix, &matrix, &yRotation);
    vec4TransformMtx44(&point, &matrix, &point);
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    nw::math::MTX44 zRotation;
    FUN_002b2144(&zRotation, 0.0f, 0.0f, (f32)zAngle * (256.0f / 360.0f));
    nn_math_ARMv6_MTX44MultAsm(&matrix, &matrix, &zRotation);
    vec4TransformMtx44(&point, &matrix, &point);
    position->x = point.x;
    position->y = point.y;
    position->z = point.z;
}

} /* extern "C" */
