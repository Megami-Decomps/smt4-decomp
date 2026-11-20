/* NON_MATCHING: stack slots only (as smt4 FUN_00246afc): retail lays the frame out as vec, scaled, matrix, rotation from
 * sp+4 (220 bytes); the build puts the rotation at sp+80 and the caller's matrix last at sp+160 (228 bytes). */
#include "shard/X14_ModelTransform.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

extern "C" {

void matrixApplyByMode(void *transform, const TransformMtx44 *matrix, s32 mode);
void mathMatrixApplyTranslation(TransformMtx44 *matrix, const TransformVec3 *translation, s32 mode);
void gfxQuaternionToMatrix34(TransformRotation *rotation, const void *source);
void matrix44SetIdentity(TransformMtx44 *matrix); // declcheck: local (the shared declaration does not compile here or changes this unit)
void matrix43Multiply(TransformMtx44 *dst, const TransformMtx44 *a, const TransformRotation *b); // declcheck: local (the shared declaration does not compile here or changes this unit)
void matrixCopyFull(TransformMtx44 *dst, const TransformMtx44 *src);

/* Composes optional scale, rotation and translation into a transform matrix (the same body as smt4 FUN_00246afc's). */
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
        mathMatrixApplyScale((f32 *)&scaleMatrix, (const f32 *)&value, 0);
    } else {
        matrix44SetIdentity(&scaleMatrix);
    }
    if (rotationSource != NULL) {
        gfxQuaternionToMatrix34(&rotation, rotationSource);
        matrix43Multiply(matrix, &scaleMatrix, &rotation);
    } else {
        matrixCopyFull(matrix, &scaleMatrix);
    }
    if (translation != NULL) {
        value.x = translation->x;
        value.y = translation->y;
        value.z = translation->z;
        mathMatrixApplyTranslation(matrix, &value, 2);
    }
}

/* Builds scale, rotation and translation (each optional) into one matrix and sets it as the
 * owner's transform. */
void modelSetTransformFromParts(TransformOwner *owner, const TransformVec3 *translation, const void *rotation,
    const TransformVec3 *scale)
{
    TransformMtx44 matrix;
    matrixComposeScaleRotateTranslate(&matrix, translation, rotation, scale);
    matrixApplyByMode(owner->transform, &matrix, 0);
}

} /* extern "C" */
