#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

struct Matrix44View;

struct Vector3View {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
void gfxQuaternionToMatrix34(Matrix44View* destination, const Matrix44View* source);
void matrix44SetIdentity(Matrix44View* destination);
void mathMatrixApplyTranslation(Matrix44View* matrix, const Vector3View* offset, s32 mode);

// Initialize a matrix, then apply optional uniform scaling and a three-component offset.
void matrixInitializeWithScaleAndOffset(Matrix44View* matrix, const Vector3View* offset,
                  const Matrix44View* source, f32 scale)
{
    if (source != 0) {
        gfxQuaternionToMatrix34(matrix, source);
    } else {
        matrix44SetIdentity(matrix);
    }

    Vector3View components;
    if (scale != 1.0f) {
        components.x = components.y = components.z = scale;
        mathMatrixApplyScale(reinterpret_cast<f32 *>(matrix), reinterpret_cast<const f32 *>(&components), 2);
    }

    if (offset != 0) {
        components.x = offset->x;
        components.y = offset->y;
        components.z = offset->z;
        mathMatrixApplyTranslation(matrix, &components, 2);
    }
}
}
