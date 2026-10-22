/* NON_MATCHING: Orthographic reciprocal calculations use a different VFP schedule. */
#include "common.h"
extern "C" {
// Builds an orthographic projection mapping depth to the unit interval.
void FUN_0015a050(f32* matrix, f32 left, f32 right, f32 bottom, f32 top, f32 nearPlane, f32 farPlane)
{
    matrix[1] = 0.0f;
    matrix[2] = 0.0f;
    matrix[4] = 0.0f;
    matrix[6] = 0.0f;
    f32 inverseWidth = 1.0f / (right - left);
    matrix[8] = 0.0f;
    matrix[9] = 0.0f;
    matrix[12] = 0.0f;
    matrix[13] = 0.0f;
    matrix[14] = 0.0f;
    matrix[15] = 1.0f;
    f32 inverseHeight = 1.0f / (top - bottom);
    f32 inverseDepth = 1.0f / (farPlane - nearPlane);
    matrix[10] = inverseDepth;
    matrix[0] = inverseWidth * 2.0f;
    matrix[3] = -((right + left) * inverseWidth);
    matrix[5] = inverseHeight * 2.0f;
    matrix[7] = -((top + bottom) * inverseHeight);
    matrix[11] = nearPlane * inverseDepth;
}
}
