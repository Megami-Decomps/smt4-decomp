#include "nw/math/MTX44.h"

extern "C" {
/* Builds an orthographic projection mapping depth to the unit interval: nw::math's MTX44OrthoC in its
 * "fast C" form (the reciprocals and the six computed elements first, then the constant stores). */
nw::math::MTX44 *mtx44OrthoC(nw::math::MTX44 *matrix, f32 left, f32 right, f32 bottom, f32 top, f32 nearPlane, f32 farPlane)
{
    f32 (*const m)[4] = matrix->m;
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

    m[0][1] = 0.0f;
    m[0][2] = 0.0f;

    m[1][0] = 0.0f;
    m[1][2] = 0.0f;

    m[2][0] = 0.0f;
    m[2][1] = 0.0f;

    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;

    m[0][0] = m00;
    m[0][3] = m03;
    m[1][1] = m11;
    m[1][3] = m13;
    m[2][2] = m22;
    m[2][3] = m23;
    return matrix;
}
}
