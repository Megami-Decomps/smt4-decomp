/* NON_MATCHING: scalar coefficient scheduling and singular-determinant comparison differ from retail. */
#include "shard/S1Mover.h"

extern "C" {
// Invert an affine transform; leave the destination untouched if it is singular.
u32 FUN_00199f84(Mtx34* result, const Mtx34* source)
{
    f32 a = source->m[0][0];
    f32 b = source->m[0][1];
    f32 c = source->m[0][2];
    f32 d = source->m[1][0];
    f32 e = source->m[1][1];
    f32 f = source->m[1][2];
    f32 g = source->m[2][0];
    f32 h = source->m[2][1];
    f32 i = source->m[2][2];
    f32 determinant = (a * e * i - g * e * c) + (b * f * g - d * b * i) +
                      (c * d * h - a * h * f);
    if (determinant == 0.0f)
        return 0;
    f32 reciprocal = 1.0f / determinant;
    f32 inverse00 = (e * i - h * f) * reciprocal;
    f32 inverse01 = -((b * i - h * c) * reciprocal);
    f32 inverse02 = (b * f - e * c) * reciprocal;
    f32 inverse10 = -((d * i - g * f) * reciprocal);
    f32 inverse11 = (a * i - g * c) * reciprocal;
    f32 inverse12 = -((a * f - d * c) * reciprocal);
    f32 inverse20 = (d * h - g * e) * reciprocal;
    f32 inverse21 = -((a * h - g * b) * reciprocal);
    f32 inverse22 = (a * e - d * b) * reciprocal;
    f32 x = source->m[0][3];
    f32 y = source->m[1][3];
    f32 z = source->m[2][3];
    result->m[0][0] = inverse00;
    result->m[0][1] = inverse01;
    result->m[0][2] = inverse02;
    result->m[0][3] = (-inverse00 * x - inverse01 * y) - inverse02 * z;
    result->m[1][0] = inverse10;
    result->m[1][1] = inverse11;
    result->m[1][2] = inverse12;
    result->m[1][3] = (-inverse10 * x - inverse11 * y) - inverse12 * z;
    result->m[2][0] = inverse20;
    result->m[2][1] = inverse21;
    result->m[2][2] = inverse22;
    result->m[2][3] = (-inverse20 * x - inverse21 * y) - inverse22 * z;
    return 1;
}
}
