#include "nw/math/MTX44.h"
#include "nw/math/VEC4.h"

/* VEC4Transform: multiplies the vector by the row-major 4x4 matrix (through a temporary, so pOut may alias pV) and
   returns pOut. */
extern "C" nw::math::VEC4 *vec4Transform(nw::math::VEC4 *pOut, const nw::math::MTX44 *pM, const nw::math::VEC4 *pV)
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
