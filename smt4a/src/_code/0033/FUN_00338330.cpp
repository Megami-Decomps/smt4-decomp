/* NON_MATCHING: the shared member-wise vector copy now matches retail (ported from smt4 FUN_00246afc); the stack layout differs (retail: vector at sp+4 then the three matrices, 220-byte frame, &matrix cached in r7) and is independent of declaration order. */
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
void FUN_002a2048(TransformMtx44 *matrix, const TransformVec3 *translation, u32 mode);
void matrixApplyByMode(void *transform, const TransformMtx44 *matrix, u32 flags);

// Compose optional scale, rotation and translation, then install the model transform.
void FUN_00338330(TransformOwnerA *owner, const TransformVec3 *translation, const void *rotationSource, const TransformVec3 *scale)
{
    TransformVec3 value;
    TransformMtx44 scaleMatrix;
    TransformMtx44 matrix;
    TransformRotation rotation;
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
        matrix43Multiply(&matrix, &scaleMatrix, &rotation);
    } else {
        matrixCopyFull(&matrix, &scaleMatrix);
    }
    if (translation) {
        value.x = translation->x;
        value.y = translation->y;
        value.z = translation->z;
        FUN_002a2048(&matrix, &value, 2);
    }
    matrixApplyByMode(owner->transform, &matrix, 0);
}
}
