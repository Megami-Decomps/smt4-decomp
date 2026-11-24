#ifndef GFX_MODELTRANSFORM_H
#define GFX_MODELTRANSFORM_H

#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/X14_ModelTransform.h"
#include <stddef.h>

/* The two packet layouts put their transform at different offsets. */
struct TransformOwner10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Matrix44 transform;
};

struct TransformOwner18 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Matrix44 transform;
};

typedef char TransformOwnerOffsets[offsetof(TransformOwner10, transform) == 0x10 &&
    offsetof(TransformOwner18, transform) == 0x18 ? 1 : -1];

extern "C" {
void matrix44SetIdentity(Matrix44 *matrix);
void gfxQuaternionToMatrix34(Matrix44 *rotation, const Vector4 *quaternion);
void matrix43Multiply(Matrix44 *out, const Matrix44 *left, const Matrix44 *right);
void matrixCopyFull(Matrix44 *destination, const Matrix44 *source);
f32 *mathMatrixApplyTranslation(f32 *matrix, const f32 *translation, s32 mode);
Matrix44 *matrixApplyByMode(Matrix44 *destination, const Matrix44 *source, s32 mode);
void matrixInitializeWithScaleAndOffset(Matrix44 *matrix, const TransformVec3 *translation,
                                        const Vector4 *quaternion, f32 scale);
} /* extern "C" */

enum {
    MODEL_MATRIX_REPLACE = 0,
    MODEL_MATRIX_SET_SCALE = 0,
    MODEL_MATRIX_SCALE_COLUMNS = 2,
    MODEL_MATRIX_ADD_WORLD_TRANSLATION = 2
};

/* Compose the optional parts in scale, rotation, translation order. */
static __inline void matrixComposeScaleRotateTranslate(Matrix44 *matrix, const TransformVec3 *translation,
                                                       const Vector4 *quaternion, const TransformVec3 *scale)
{
    Matrix44 scaleMatrix;
    Matrix44 rotation;
    f32 components[3];

    if (scale != NULL) {
        components[0] = scale->x;
        components[1] = scale->y;
        components[2] = scale->z;
        mathMatrixApplyScale(scaleMatrix.values, components, MODEL_MATRIX_SET_SCALE);
    } else {
        matrix44SetIdentity(&scaleMatrix);
    }
    if (quaternion != NULL) {
        gfxQuaternionToMatrix34(&rotation, quaternion);
        matrix43Multiply(matrix, &scaleMatrix, &rotation);
    } else {
        matrixCopyFull(matrix, &scaleMatrix);
    }
    if (translation != NULL) {
        components[0] = translation->x;
        components[1] = translation->y;
        components[2] = translation->z;
        mathMatrixApplyTranslation(matrix->values, components, MODEL_MATRIX_ADD_WORLD_TRANSLATION);
    }
}

/* Initialize a rotation (identity if NULL), then apply uniform scale and world translation. */
static __inline void matrixInitializeUniformTransform(Matrix44 *matrix, const TransformVec3 *translation,
                                                      const Vector4 *quaternion, f32 scale)
{
    if (quaternion != NULL) {
        gfxQuaternionToMatrix34(matrix, quaternion);
    } else {
        matrix44SetIdentity(matrix);
    }

    f32 components[3];
    if (scale != 1.0f) {
        components[0] = components[1] = components[2] = scale;
        mathMatrixApplyScale(matrix->values, components, MODEL_MATRIX_SCALE_COLUMNS);
    }
    if (translation != NULL) {
        components[0] = translation->x;
        components[1] = translation->y;
        components[2] = translation->z;
        mathMatrixApplyTranslation(matrix->values, components, MODEL_MATRIX_ADD_WORLD_TRANSLATION);
    }
}

#endif
