/* NON_MATCHING: the point's VFP store matches (vldmia/vstmia {s0-s3}); only its address register differs (retail forms it in r1 and the xRotation address in r0 before the store, built stores through r0 and forms the xRotation address after). */
#include "shard/X14_ModelTransform.h"

struct TransformPoint4 {
    f32 x, y, z, w;
    TransformPoint4(f32 x, f32 y, f32 z, f32 w) : x(x), y(y), z(z), w(w) {}
};
extern "C" {
const TransformMtx44 *_ZN2nw4math5MTX448IdentityEv();
void mtx44Copy(TransformMtx44 *destination, const TransformMtx44 *source);
void FUN_001a1c28(TransformMtx44 *matrix, f32 x, f32 y, f32 z);
void nn_math_ARMv6_MTX44MultAsm(TransformMtx44 *output, const TransformMtx44 *left, const TransformMtx44 *right);
void FUN_0043b5b4(TransformPoint4 *output, const TransformMtx44 *matrix, const TransformPoint4 *input);

// Transform a point by the current matrix followed by three signed axis rotations.
void FUN_003d2480(TransformVec3 *output, const TransformVec3 *input, s32 x, s32 y, s32 z)
{
    TransformMtx44 matrix, xRotation, yRotation, zRotation;
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    TransformPoint4 point(input->x, input->y, input->z, 1.0f);
    FUN_001a1c28(&xRotation, (f32)x * 0.7111111f, 0.0f, 0.0f);
    nn_math_ARMv6_MTX44MultAsm(&matrix, &matrix, &xRotation);
    FUN_001a1c28(&yRotation, 0.0f, (f32)y * 0.7111111f, 0.0f);
    nn_math_ARMv6_MTX44MultAsm(&matrix, &matrix, &yRotation);
    FUN_001a1c28(&zRotation, 0.0f, 0.0f, (f32)z * 0.7111111f);
    nn_math_ARMv6_MTX44MultAsm(&matrix, &matrix, &zRotation);
    FUN_0043b5b4(&point, &matrix, &point);
    output->x = point.x;
    output->y = point.y;
    output->z = point.z;
}
}
