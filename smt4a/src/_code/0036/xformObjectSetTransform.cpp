#include "gfx/ModelTransform.h"

/* Installs a transform from an optional quaternion, a uniform scale and a world offset. */
extern "C" void xformObjectSetTransform(TransformOwner18 *owner, const TransformVec3 *translation,
                                         const Vector4 *quaternion, f32 scale)
{
    Matrix44 matrix;
    matrixInitializeUniformTransform(&matrix, translation, quaternion, scale);
    matrixApplyByMode(&owner->transform, &matrix, MODEL_MATRIX_REPLACE);
}
