#include "gfx/ModelTransform.h"

/* Initializes a matrix from an optional quaternion, a uniform scale and a world offset. */
extern "C" void matrixInitializeWithScaleAndOffset(Matrix44 *matrix, const TransformVec3 *translation,
                                                     const Vector4 *quaternion, f32 scale)
{
    matrixInitializeUniformTransform(matrix, translation, quaternion, scale);
}
