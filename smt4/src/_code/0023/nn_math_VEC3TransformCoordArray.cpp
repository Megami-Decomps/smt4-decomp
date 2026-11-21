#include "shard/S1Mover.h"
#include "nw/math/MTX44.h"

extern "C" {

/* nn::math's VEC3TransformCoord: transforms a point by a projective matrix and divides by its w. */
static __inline Vec3f *vec3TransformCoord(Vec3f *out, const nw::math::MTX44 *mtx, const Vec3f *in)
{
    Vec3f tmp;
    f32 rw;
    tmp.x = mtx->m[0][0] * in->x + mtx->m[0][1] * in->y + mtx->m[0][2] * in->z + mtx->m[0][3];
    tmp.y = mtx->m[1][0] * in->x + mtx->m[1][1] * in->y + mtx->m[1][2] * in->z + mtx->m[1][3];
    tmp.z = mtx->m[2][0] * in->x + mtx->m[2][1] * in->y + mtx->m[2][2] * in->z + mtx->m[2][3];
    rw = mtx->m[3][0] * in->x + mtx->m[3][1] * in->y + mtx->m[3][2] * in->z + mtx->m[3][3];
    rw = 1.0f / rw;
    out->x = rw * tmp.x;
    out->y = rw * tmp.y;
    out->z = rw * tmp.z;
    return out;
}

/* nn::math's VEC3TransformCoordArray: transforms `count` points by a projective matrix, dividing each by its w;
 * returns `output`. */
Vec3f *nn_math_VEC3TransformCoordArray(Vec3f *output, const nw::math::MTX44 *mtx, const Vec3f *input, u32 count)
{
    Vec3f *dst = output;
    for (u32 index = 0; index < count; ++index) {
        vec3TransformCoord(dst, mtx, input);
        dst++;
        input++;
    }
    return output;
}
}
