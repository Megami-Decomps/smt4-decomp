/* nw::math::VEC4: a four-component float vector. */
#ifndef NW_MATH_VEC4_H
#define NW_MATH_VEC4_H

#include "common.h"

namespace nw {
namespace math {

struct VEC4 {
    f32 x, y, z, w;
};
typedef char VEC4Size[sizeof(VEC4) == 0x10 ? 1 : -1];

} // namespace math
} // namespace nw

/* nn::math's VEC3Transform for a 4x4 matrix, as the SDK header has it: the point (w = 1) through every row into a
 * temporary, then copied to `out` (which may alias). Callers that read only some rows let armcc drop the others. */
static __inline nw::math::VEC4 *vec3TransformMtx44(nw::math::VEC4 *out, const f32 (*m)[4], const f32 *v)
{
    nw::math::VEC4 tmp;
    tmp.x = m[0][0] * v[0] + m[0][1] * v[1] + m[0][2] * v[2] + m[0][3];
    tmp.y = m[1][0] * v[0] + m[1][1] * v[1] + m[1][2] * v[2] + m[1][3];
    tmp.z = m[2][0] * v[0] + m[2][1] * v[1] + m[2][2] * v[2] + m[2][3];
    tmp.w = m[3][0] * v[0] + m[3][1] * v[1] + m[3][2] * v[2] + m[3][3];
    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
    out->w = tmp.w;
    return out;
}

#endif
