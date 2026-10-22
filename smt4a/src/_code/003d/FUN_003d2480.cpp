/* NON_MATCHING: point initialization uses scalar integer copies instead of retail's four-register VFP transfer. */
#include "shard/X14_ModelTransform.h"

struct TransformPoint4 { f32 x, y, z, w; };
extern "C" {
const TransformMtx44 *FUN_0018aeb8();
void mtx44Copy(TransformMtx44 *destination, const TransformMtx44 *source);
void FUN_001a1c28(TransformMtx44 *matrix, f32 x, f32 y, f32 z);
void FUN_0019a0fc(TransformMtx44 *output, const TransformMtx44 *left, const TransformMtx44 *right);
void FUN_0043b5b4(TransformPoint4 *output, const TransformMtx44 *matrix, const TransformPoint4 *input);

// Transform a point by the current matrix followed by three signed axis rotations.
void FUN_003d2480(TransformVec3 *output, const TransformVec3 *input, s32 x, s32 y, s32 z)
{
    TransformMtx44 matrix, xRotation, yRotation, zRotation;
    mtx44Copy(&matrix, FUN_0018aeb8());
    TransformPoint4 point;
    point.x = input->x;
    point.y = input->y;
    point.z = input->z;
    point.w = 1.0f;
    FUN_001a1c28(&xRotation, (f32)x * 0.7111111f, 0.0f, 0.0f);
    FUN_0019a0fc(&matrix, &matrix, &xRotation);
    FUN_001a1c28(&yRotation, 0.0f, (f32)y * 0.7111111f, 0.0f);
    FUN_0019a0fc(&matrix, &matrix, &yRotation);
    FUN_001a1c28(&zRotation, 0.0f, 0.0f, (f32)z * 0.7111111f);
    FUN_0019a0fc(&matrix, &matrix, &zRotation);
    FUN_0043b5b4(&point, &matrix, &point);
    output->x = point.x;
    output->y = point.y;
    output->z = point.z;
}
}
