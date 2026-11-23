/* nn::math's texture projection header inline (the C form), inlined by the shadow map's set-up (smt4a moriModelShadowMapBuild). */
#ifndef NW_MATH_MTX34TEXTUREPROJECTION_H
#define NW_MATH_MTX34TEXTUREPROJECTION_H

#include "common.h"
#include "nw/math/MTX34.h"
#include "nw/math/Trig.h"

/* nn::math::MTX34TextureProjectionPerspective (C form): the matrix that projects view space onto a texture, from a
 * vertical field of view in radians, with the texture coordinates scaled and moved by the S and T terms. */
static __inline nw::math::MTX34 *mtx34TextureProjectionPerspectiveRad(nw::math::MTX34 *pOut, f32 fovy, f32 aspect,
                                                                      f32 scaleS, f32 scaleT, f32 translateS,
                                                                      f32 translateT)
{
    f32 (*const m)[4] = pOut->m;
    f32 cot = 1.0f / tanRad(fovy * 0.5f);
    m[0][0] = (cot / aspect) * scaleS;
    m[0][1] = 0.0f;
    m[0][2] = -translateS;
    m[0][3] = 0.0f;
    m[1][0] = 0.0f;
    m[1][1] = cot * scaleT;
    m[1][2] = -translateT;
    m[1][3] = 0.0f;
    m[2][0] = 0.0f;
    m[2][1] = 0.0f;
    m[2][2] = -1.0f;
    m[2][3] = 0.0f;
    return pOut;
}

#endif
