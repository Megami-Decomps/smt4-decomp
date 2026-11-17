#ifndef GFX_AXISANGLEROTATION_H
#define GFX_AXISANGLEROTATION_H
#include "gfx/VectorScratch.h"
#include "shard/W5_W5Match2_PlainData.h"
#include <math.h>

static inline void buildAxisAngleRotation(const Vector4 *input, Matrix44 *matrix,
                                         VectorScratch *scratch, f32 cosine, f32 sine)
{
    scratch->first.vector = *input;
    f32 length = sqrtf(scratch->first.vector.x * scratch->first.vector.x +
                       scratch->first.vector.y * scratch->first.vector.y +
                       scratch->first.vector.z * scratch->first.vector.z);
    if (length > 0.0f) {
        scratch->first.vector.x /= length;
        scratch->first.vector.y /= length;
        scratch->first.vector.z /= length;
    }
    Vector4 axis = scratch->first.vector;
    f32 complement = 1.0f - cosine;
    f32 xx = axis.x * axis.x;
    f32 yy = axis.y * axis.y;
    f32 zz = axis.z * axis.z;
    f32 xy = axis.x * axis.y;
    f32 xz = axis.x * axis.z;
    f32 yz = axis.y * axis.z;
    f32 xs = axis.x * sine;
    f32 ys = axis.y * sine;
    f32 zs = axis.z * sine;
    matrix->values[0] = xx + (1.0f - xx) * cosine;
    matrix->values[1] = zs + xy * complement;
    matrix->values[2] = xz * complement - ys;
    matrix->values[3] = 0.0f;
    matrix->values[4] = xy * complement - zs;
    matrix->values[5] = yy + (1.0f - yy) * cosine;
    matrix->values[6] = xs + yz * complement;
    matrix->values[7] = 0.0f;
    matrix->values[8] = ys + xz * complement;
    matrix->values[9] = yz * complement - xs;
    matrix->values[10] = zz + (1.0f - zz) * cosine;
    matrix->values[11] = 0.0f;
    matrix->values[12] = 0.0f;
    matrix->values[13] = 0.0f;
    matrix->values[14] = 0.0f;
    matrix->values[15] = 1.0f;
}
#endif
