/* nw::math::VEC4: a four-component float vector. */
#ifndef NW_MATH_VEC4_H
#define NW_MATH_VEC4_H

#include "common.h"
#include "nw/math/MTX44.h"

namespace nw {
namespace math {

struct VEC4 {
    f32 x, y, z, w;
};
typedef char VEC4Size[sizeof(VEC4) == 0x10 ? 1 : -1];

/* nn::math's VEC4 header inlines (the C versions): component-wise, `pOut` may alias an operand. */
static __inline VEC4 *VEC4Add(VEC4 *pOut, const VEC4 *p1, const VEC4 *p2)
{
    pOut->x = p1->x + p2->x;
    pOut->y = p1->y + p2->y;
    pOut->z = p1->z + p2->z;
    pOut->w = p1->w + p2->w;
    return pOut;
}

static __inline VEC4 *VEC4Scale(VEC4 *pOut, const VEC4 *p, f32 scale)
{
    pOut->x = p->x * scale;
    pOut->y = p->y * scale;
    pOut->z = p->z * scale;
    pOut->w = p->w * scale;
    return pOut;
}

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

/* nn::math's VEC4Transform (the body of vec4Transform, smt4 0x26e768): every row's dot product into a temporary,
 * then copied to `pOut` (which may alias `pV`). */
static __inline nw::math::VEC4 *vec4TransformMtx44(nw::math::VEC4 *pOut, const nw::math::MTX44 *pM,
                                                   const nw::math::VEC4 *pV)
{
    nw::math::VEC4 tmp;
    tmp.x = pM->m[0][0] * pV->x + pM->m[0][1] * pV->y + pM->m[0][2] * pV->z + pM->m[0][3] * pV->w;
    tmp.y = pM->m[1][0] * pV->x + pM->m[1][1] * pV->y + pM->m[1][2] * pV->z + pM->m[1][3] * pV->w;
    tmp.z = pM->m[2][0] * pV->x + pM->m[2][1] * pV->y + pM->m[2][2] * pV->z + pM->m[2][3] * pV->w;
    tmp.w = pM->m[3][0] * pV->x + pM->m[3][1] * pV->y + pM->m[3][2] * pV->z + pM->m[3][3] * pV->w;
    pOut->x = tmp.x;
    pOut->y = tmp.y;
    pOut->z = tmp.z;
    pOut->w = tmp.w;
    return pOut;
}

#endif
