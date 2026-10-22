/* NON_MATCHING: aggregate vector copies and matrix temporary stack allocation differ from retail. */
#include "shard/X14_ModelTransform.h"

struct TransformOwnerA {
    u8 unk00[0x10];
    u8 transform[1]; // 0x10, Apocalypse's transform prefix differs from IV's
};
extern "C" {
void mathMatrixApplyScale(TransformMtx44 *matrix, const TransformVec3 *scale, u32 mode);
void matrix44SetIdentity(TransformMtx44 *matrix);
void FUN_002b4c30(TransformRotation *rotation, const void *source);
void matrix43Multiply(TransformMtx44 *result, const TransformMtx44 *left, const TransformRotation *right);
void matrixCopyFull(TransformMtx44 *destination, const TransformMtx44 *source);
void FUN_002a2048(TransformMtx44 *matrix, const TransformVec3 *translation, u32 mode);
void FUN_002a1fb4(void *transform, const TransformMtx44 *matrix, u32 flags);

// Compose optional scale, rotation and translation, then install the model transform.
void FUN_00338330(TransformOwnerA *owner, const TransformVec3 *translation, const void *rotationSource, const TransformVec3 *scale)
{
    TransformMtx44 scaleMatrix;
    TransformMtx44 matrix;
    TransformRotation rotation;
    if (scale) {
        TransformVec3 value = *scale;
        mathMatrixApplyScale(&scaleMatrix, &value, 0);
    } else {
        matrix44SetIdentity(&scaleMatrix);
    }
    if (rotationSource) {
        FUN_002b4c30(&rotation, rotationSource);
        matrix43Multiply(&matrix, &scaleMatrix, &rotation);
    } else {
        matrixCopyFull(&matrix, &scaleMatrix);
    }
    if (translation) {
        TransformVec3 value = *translation;
        FUN_002a2048(&matrix, &value, 2);
    }
    FUN_002a1fb4(owner->transform, &matrix, 0);
}
}
