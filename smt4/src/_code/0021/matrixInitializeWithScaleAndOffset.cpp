#include "common.h"

struct Matrix44View;

struct Vector3View {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
void FUN_0025009c(Matrix44View* destination, const Matrix44View* source);
void matrix44SetIdentity(Matrix44View* destination);
void mathMatrixApplyScale(Matrix44View* matrix, const Vector3View* scale, s32 mode);
void FUN_0024fd70(Matrix44View* matrix, const Vector3View* offset, s32 mode);

// Copy or initialize a matrix, then apply optional uniform scaling and offset.
void matrixInitializeWithScaleAndOffset(Matrix44View* matrix, const Vector3View* offset,
                  const Matrix44View* source, f32 scale)
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
}
