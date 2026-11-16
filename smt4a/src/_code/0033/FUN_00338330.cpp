/* NON_MATCHING: stack slots only: retail puts the caller's matrix at sp+80 below the rotation at sp+144 (220-byte frame); ours places the rotation at sp+80 and the matrix at sp+160 (228 bytes). Every declaration order and nesting tried keeps the caller's matrix last. */
#include "shard/X14_ModelTransform.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

struct TransformOwnerA {
    u8 unk00[0x10];
    u8 transform[1]; // 0x10, Apocalypse's transform prefix differs from IV's
};
extern "C" {
void matrix44SetIdentity(TransformMtx44 *matrix);
void FUN_002b4c30(TransformRotation *rotation, const void *source);
void matrix43Multiply(TransformMtx44 *result, const TransformMtx44 *left, const TransformRotation *right);
void matrixCopyFull(TransformMtx44 *destination, const TransformMtx44 *source);
void mathMatrixApplyTranslation(TransformMtx44 *matrix, const TransformVec3 *translation, u32 mode);
void matrixApplyByMode(void *transform, const TransformMtx44 *matrix, u32 flags);

}

// Compose optional scale, rotation and translation into a transform matrix.
static void matrixComposeScaleRotateTranslate(TransformMtx44 *matrix, const TransformVec3 *translation,
                                              const void *rotationSource, const TransformVec3 *scale)
{
    TransformMtx44 scaleMatrix;
    TransformRotation rotation;
    TransformVec3 value;
    if (scale) {
        value.x = scale->x;
        value.y = scale->y;
        value.z = scale->z;
        mathMatrixApplyScale(reinterpret_cast<f32 *>(&scaleMatrix), reinterpret_cast<const f32 *>(&value), 0);
    } else {
        matrix44SetIdentity(&scaleMatrix);
    }
    if (rotationSource) {
        FUN_002b4c30(&rotation, rotationSource);
        matrix43Multiply(matrix, &scaleMatrix, &rotation);
    } else {
        matrixCopyFull(matrix, &scaleMatrix);
    }
    if (translation) {
        value.x = translation->x;
        value.y = translation->y;
        value.z = translation->z;
        mathMatrixApplyTranslation(matrix, &value, 2);
    }
}

// Compose optional scale, rotation and translation, then install the model transform.
extern "C" void FUN_00338330(TransformOwnerA *owner, const TransformVec3 *translation, const void *rotationSource,
                             const TransformVec3 *scale)
{
    TransformMtx44 matrix;
    matrixComposeScaleRotateTranslate(&matrix, translation, rotationSource, scale);
    matrixApplyByMode(owner->transform, &matrix, 0);
}
