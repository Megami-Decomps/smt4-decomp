#include "gfx/ModelTransform.h"

/* Installs the transform made from the supplied position, rotation and scale. */
extern "C" void modelSetTransformFromParts(TransformOwner18 *owner, const TransformVec3 *translation,
                                             const Vector4 *quaternion, const TransformVec3 *scale)
{
    Matrix44 matrix;
    matrixComposeScaleRotateTranslate(&matrix, translation, quaternion, scale);
    matrixApplyByMode(&owner->transform, &matrix, MODEL_MATRIX_REPLACE);
}
