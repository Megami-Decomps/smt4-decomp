#include "shard/W5_W5Match2_PlainData.h"

struct Vector3View {
    f32 x;
    f32 y;
    f32 z;
};

/* An object with a transform at 0x18. */
struct XformObject {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 transform[1];
};

extern "C" {
void FUN_0025009c(Matrix44 *destination, const Matrix44 *source);
void matrix44SetIdentity(Matrix44 *destination);
void mathMatrixApplyScale(Matrix44 *matrix, const Vector3View *scale, s32 mode);
void FUN_0024fd70(Matrix44 *matrix, const Vector3View *offset, s32 mode);
void matrixApplyByMode(void *transform, const Matrix44 *matrix, s32 mode);
}

// Inlined copy of matrixInitializeWithScaleAndOffset: copy or initialize a matrix,
// then apply optional uniform scaling and offset.
static void matrixInitializeWithScaleAndOffset(Matrix44 *matrix, const Vector3View *offset,
                                               const Matrix44 *source, f32 scale)
{
    if (source != 0) {
        FUN_0025009c(matrix, source);
    } else {
        matrix44SetIdentity(matrix);
    }

    Vector3View components;
    if (scale != 1.0f) {
        components.x = components.y = components.z = scale;
        mathMatrixApplyScale(matrix, &components, 2);
    }

    if (offset != 0) {
        components.x = offset->x;
        components.y = offset->y;
        components.z = offset->z;
        FUN_0024fd70(matrix, &components, 2);
    }
}

/* Sets the object's transform from `base` (identity when NULL), a uniform scale and a translation. */
extern "C" void FUN_0024f7d4(XformObject *object, const Vector3View *translation,
                             const Matrix44 *base, f32 scale)
{
    Matrix44 matrix;
    matrixInitializeWithScaleAndOffset(&matrix, translation, base, scale);
    matrixApplyByMode(object->transform, &matrix, 0);
}
