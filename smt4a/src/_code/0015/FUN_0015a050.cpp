/* NON_MATCHING: 20 lines. nn::math's MTX44Ortho (the "fast C" body: the six computed elements go into locals
 * first, then the constant stores, then the computed ones) gives retail's stores and divisions; the scheduling
 * still differs: retail keeps the first row's products (2 / width and its translation) until after the third
 * division where this build computes them right after the first, and the two sums and far - near take other
 * registers. */
#include "common.h"
extern "C" {
/* Builds an orthographic projection mapping depth to the unit interval. */
void FUN_0015a050(f32* matrix, f32 left, f32 right, f32 bottom, f32 top, f32 nearPlane, f32 farPlane)
{
    f32 tmp1, tmp2, tmp3;
    f32 m00, m03, m11, m13, m22, m23;

    tmp1 = 1.0f / (right - left);
    m00 = 2.0f * tmp1;
    m03 = -(right + left) * tmp1;

    tmp2 = 1.0f / (top - bottom);
    m11 = 2.0f * tmp2;
    m13 = -(top + bottom) * tmp2;

    tmp3 = 1.0f / (farPlane - nearPlane);
    m22 = tmp3;
    m23 = nearPlane * tmp3;

    matrix[1] = 0.0f;
    matrix[2] = 0.0f;

    matrix[4] = 0.0f;
    matrix[6] = 0.0f;

    matrix[8] = 0.0f;
    matrix[9] = 0.0f;

    matrix[12] = 0.0f;
    matrix[13] = 0.0f;
    matrix[14] = 0.0f;
    matrix[15] = 1.0f;

    matrix[0] = m00;
    matrix[3] = m03;
    matrix[5] = m11;
    matrix[7] = m13;
    matrix[10] = m22;
    matrix[11] = m23;
}
}
