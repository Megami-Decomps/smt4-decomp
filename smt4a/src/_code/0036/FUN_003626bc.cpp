#include "shard/W5_W5Match2_PlainData.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

struct ModelTransformVector { f32 x, y, z; };
struct ModelTransformTarget {
    u8 unk00[0x18];
    Matrix44 matrix; // 0x18
};

extern "C" {
void FUN_002b4c30(Matrix44 *matrix, const Matrix44 *source);
void matrix44SetIdentity(Matrix44 *matrix);
void FUN_002a2048(Matrix44 *matrix, const ModelTransformVector *translation, s32 mode);
void matrixApplyByMode(Matrix44 *target, const Matrix44 *matrix, u32 flags);
}

// Inlined copy of matrixInitializeWithScaleAndOffset: initialize a matrix, then apply
// optional uniform scaling and a three-component offset.
static void matrixInitializeWithScaleAndOffset(Matrix44 *matrix, const ModelTransformVector *offset,
                                               const Matrix44 *source, f32 scale)
{
    if (source != 0) {
        FUN_002b4c30(matrix, source);
    } else {
        matrix44SetIdentity(matrix);
    }

    ModelTransformVector components;
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

// Build a target transform from an optional base matrix, uniform scale, and translation.
extern "C" void FUN_003626bc(ModelTransformTarget *target, const ModelTransformVector *translation,
                             const Matrix44 *base, f32 scale)
{
    Matrix44 matrix;
    matrixInitializeWithScaleAndOffset(&matrix, translation, base, scale);
    matrixApplyByMode(&target->matrix, &matrix, 0);
}
