/* NON_MATCHING: retail keeps &matrix in r7 (saving r7) and lays the frame out as vec, scaled,
 * matrix, rotation from sp+4; the build rematerializes the address and orders the slots differently. */
#include "shard/X14_ModelTransform.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

extern "C" {

void FUN_002a1fb4(void *transform, const TransformMtx44 *matrix, s32 mode);
void FUN_002a2048(TransformMtx44 *matrix, const TransformVec3 *translation, s32 mode);
void FUN_002b4c30(TransformRotation *rotation, const void *source);
void matrix44SetIdentity(TransformMtx44 *matrix);
void matrix43Multiply(TransformMtx44 *dst, const TransformMtx44 *a, const TransformRotation *b);
void matrixCopyFull(TransformMtx44 *dst, const TransformMtx44 *src);

/* Builds scale, rotation and translation (each optional) into one matrix and sets it as the
 * owner's transform. */
void FUN_00381758(TransformOwner *owner, const TransformVec3 *translation, const void *rotation,
    const TransformVec3 *scale)
{
    TransformMtx44 scaled;
    TransformMtx44 matrix;
    TransformRotation rotated;

    if (scale != NULL) {
        TransformVec3 factors = { scale->x, scale->y, scale->z };
        mathMatrixApplyScale(reinterpret_cast<f32 *>(&scaled), reinterpret_cast<const f32 *>(&factors), 0);
    } else {
        matrix44SetIdentity(&scaled);
    }
    if (rotation != NULL) {
        FUN_002b4c30(&rotated, rotation);
        matrix43Multiply(&matrix, &scaled, &rotated);
    } else {
        matrixCopyFull(&matrix, &scaled);
    }
    if (translation != NULL) {
        TransformVec3 offset = { translation->x, translation->y, translation->z };
        FUN_002a2048(&matrix, &offset, 2);
    }
    FUN_002a1fb4(owner->transform, &matrix, 0);
}

} /* extern "C" */
