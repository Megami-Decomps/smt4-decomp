#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

struct Matrix44View;

struct Vector3View {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
void FUN_002b4c30(Matrix44View* destination, const Matrix44View* source);
void matrix44SetIdentity(Matrix44View* destination);
void FUN_002a2048(Matrix44View* matrix, const Vector3View* offset, s32 mode);

// Initialize a matrix, then apply optional uniform scaling and a three-component offset.
void matrixInitializeWithScaleAndOffset(Matrix44View* matrix, const Vector3View* offset,
                  const Matrix44View* source, f32 scale)
{
    if (source != 0) {
        FUN_002b4c30(matrix, source);
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
        FUN_002a2048(matrix, &components, 2);
    }
}
}
