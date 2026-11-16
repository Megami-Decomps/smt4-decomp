/* NON_MATCHING: stack slots only: retail puts the caller's matrix at sp+80 below the rotation at sp+144 (220-byte frame); ours places the rotation at sp+80 and the matrix at sp+160 (228 bytes). Every declaration order and nesting tried keeps the caller's matrix last. */
#include "shard/X14_ModelTransform.h"

/* The object whose transform is set; the transform lives at 0x10. */
struct TransformOwner10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 transform[4];
};

extern "C" {
void mathMatrixApplyScale(TransformMtx44 *matrix, const TransformVec3 *scale, s32 mode);
void matrix44SetIdentity(TransformMtx44 *matrix);
void FUN_0025009c(TransformRotation *rotation, const void *source);
void matrix43Multiply(TransformMtx44 *result, const TransformMtx44 *left, const TransformRotation *right);
void matrixCopyFull(TransformMtx44 *destination, const TransformMtx44 *source);
void FUN_0024fd70(TransformMtx44 *matrix, const TransformVec3 *translation, s32 mode);
void matrixApplyByMode(void *transform, const TransformMtx44 *matrix, s32 mode);
}

// Compose optional scale, rotation and translation into a transform matrix.
static void matrixComposeScaleRotateTranslate(TransformMtx44 *matrix, const TransformVec3 *translation,
                                              const void *rotationSource, const TransformVec3 *scale)
{
    TransformMtx44 scaleMatrix;
    TransformRotation rotation;
    TransformVec3 value;
    if (scale != NULL) {
        value.x = scale->x;
        value.y = scale->y;
        value.z = scale->z;
        mathMatrixApplyScale(&scaleMatrix, &value, 0);
    } else {
        matrix44SetIdentity(&scaleMatrix);
    }
    if (rotationSource != NULL) {
        FUN_0025009c(&rotation, rotationSource);
        matrix43Multiply(matrix, &scaleMatrix, &rotation);
    } else {
        matrixCopyFull(matrix, &scaleMatrix);
    }
    if (translation != NULL) {
        value.x = translation->x;
        value.y = translation->y;
        value.z = translation->z;
        FUN_0024fd70(matrix, &value, 2);
    }
}

/* Builds a scale * rotation * translation matrix (each part optional) and stores it in the transform at 0x10. */
extern "C" void FUN_00246afc(TransformOwner10 *owner, const TransformVec3 *translation, const void *rotationSource,
                             const TransformVec3 *scale)
{
    TransformMtx44 matrix;
    matrixComposeScaleRotateTranslate(&matrix, translation, rotationSource, scale);
    matrixApplyByMode(owner->transform, &matrix, 0);
}
