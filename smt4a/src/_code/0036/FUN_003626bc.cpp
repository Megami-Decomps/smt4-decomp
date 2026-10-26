/* NON_MATCHING: retail places the vector before the matrix and retains its address in a saved register. */
#include "shard/W5_W5Match2_PlainData.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexTMX.h"

struct ModelTransformVector { f32 x, y, z; };
struct ModelTransformTarget {
    u8 unk00[0x18];
    Matrix44 matrix; // 0x18
};

extern "C" {
void FUN_002b4c30(Matrix44 *matrix, const f32 *rotation);
void matrix44SetIdentity(Matrix44 *matrix);
void FUN_002a2048(Matrix44 *matrix, const ModelTransformVector *translation, u32 order);
void matrixApplyByMode(Matrix44 *target, const Matrix44 *matrix, u32 flags);

// Build a target transform from optional rotation, uniform scale, and translation.
void FUN_003626bc(ModelTransformTarget *target, const ModelTransformVector *translation, const f32 *rotation, f32 scale)
{
    Matrix44 matrix;
    ModelTransformVector vector;
    if (rotation != NULL) {
        FUN_002b4c30(&matrix, rotation);
    } else {
        matrix44SetIdentity(&matrix);
    }
    if (scale != 1.0f) {
        vector.x = scale;
        vector.y = scale;
        vector.z = scale;
        mathMatrixApplyScale(reinterpret_cast<f32 *>(&matrix), reinterpret_cast<const f32 *>(&vector), 2);
    }
    if (translation != NULL) {
        vector.x = translation->x;
        vector.y = translation->y;
        vector.z = translation->z;
        FUN_002a2048(&matrix, &vector, 2);
    }
    matrixApplyByMode(&target->matrix, &matrix, 0);
}
}
