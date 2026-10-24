/* NON_MATCHING: float-constant register assignment (retail loads 40.74/0.5/0.0/1.0 into s0/s22/s16/s20 and keeps translate in s21/s19) and the scheduling of the sine load and matrix-element stores; the arithmetic of all three modes matches. */
#include "common.h"
#include "nw/math/MTX44.h"

extern "C" {
void FUN_0018a924(f32 *sine, f32 *cosine, f32 angle);
void mtx44Copy(nw::math::MTX44 *dest, const nw::math::MTX44 *source);

/* Builds a texture transform from scale, rotation and translation; the mode picks the order they apply in
 * (anything else gives the identity). Rotation is given in radians. */
nw::math::MTX44 *textureCalcSrtMatrix(nw::math::MTX44 *out, s32 mode, f32 scaleX, f32 scaleY, f32 rotation,
                                      f32 translateX, f32 translateY)
{
    const f32 half = 0.5f;
    const f32 zero = 0.0f;
    const f32 one = 1.0f;
    f32 sine;
    f32 cosine;
    if (mode == 0) {
        FUN_0018a924(&sine, &cosine, rotation * 40.743664f);
        out->m[0][0] = scaleX * cosine;
        out->m[1][1] = scaleY * cosine;
        out->m[3][2] = zero;
        out->m[3][3] = one;
        out->m[3][1] = zero;
        out->m[3][0] = zero;
        out->m[2][3] = zero;
        out->m[2][1] = zero;
        out->m[2][0] = zero;
        out->m[1][2] = zero;
        out->m[0][2] = zero;
        out->m[2][2] = one;
        out->m[0][1] = -(scaleX * sine);
        out->m[1][0] = scaleY * sine;
        out->m[0][3] = (sine * half - cosine * half + half - translateX) * scaleX;
        out->m[1][3] = (sine * -half - cosine * half + half - translateY) * scaleY;
    } else if (mode == 1) {
        FUN_0018a924(&sine, &cosine, rotation * 40.743664f);
        out->m[0][0] = scaleX * cosine;
        out->m[1][1] = scaleY * cosine;
        out->m[3][2] = zero;
        out->m[3][3] = one;
        out->m[3][1] = zero;
        out->m[3][0] = zero;
        out->m[2][3] = zero;
        out->m[2][1] = zero;
        out->m[2][0] = zero;
        out->m[1][2] = zero;
        out->m[0][2] = zero;
        out->m[2][2] = one;
        out->m[0][1] = scaleX * sine;
        out->m[1][0] = -(scaleY * sine);
        out->m[0][3] = (-(cosine * translateX) - sine * translateY) * scaleX;
        out->m[1][3] = (sine * translateX - cosine * translateY) * scaleY;
    } else if (mode == 2) {
        FUN_0018a924(&sine, &cosine, rotation * 40.743664f);
        out->m[3][2] = zero;
        out->m[3][3] = one;
        out->m[3][1] = zero;
        out->m[3][0] = zero;
        out->m[2][3] = zero;
        out->m[2][1] = zero;
        out->m[2][0] = zero;
        out->m[1][2] = zero;
        out->m[0][2] = zero;
        out->m[2][2] = one;
        f32 x = -translateX - half;
        f32 y = translateY - half;
        out->m[0][1] = -(scaleX * sine);
        out->m[0][0] = scaleX * cosine;
        out->m[1][0] = scaleY * sine;
        out->m[1][1] = scaleY * cosine;
        out->m[0][3] = scaleX * cosine * x - scaleX * sine * y + half;
        out->m[1][3] = scaleY * sine * x + scaleY * cosine * y + half;
    } else {
        mtx44Copy(out, &nw::math::MTX44::Identity());
    }
    return out;
}

}
