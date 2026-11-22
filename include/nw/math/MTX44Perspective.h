/* nn::math's perspective header inline (the C form), inlined by the camera and render-output projection
 * builders (smt4a cameraUpdateViewAndProjection, renderOutputBuildProjection). mtx44Perspective (smt4a 0x16fba0) is an
 * out-of-line copy of the same projection; it compiles alike from either store order. */
#ifndef NW_MATH_MTX44PERSPECTIVE_H
#define NW_MATH_MTX44PERSPECTIVE_H

#include "common.h"
#include "nw/math/MTX44.h"
#include "nw/math/Trig.h"

/* nn::math::MTX44PerspectiveRad (fast C form): a perspective projection from a vertical field of view in radians.
 * The computed elements go into locals first, then the constant stores, then the computed ones. */
static __inline nw::math::MTX44 *mtx44PerspectiveRad(nw::math::MTX44 *pOut, f32 fovy, f32 aspect, f32 nearZ, f32 farZ)
{
    f32 (*const m)[4] = pOut->m;
    f32 sine;
    f32 cosine;
    sinCosRad(&sine, &cosine, fovy * 0.5f);
    f32 cot = cosine / sine;
    f32 inverseRange = 1.0f / (farZ - nearZ);
    f32 m00 = cot / aspect;
    f32 m22 = farZ * inverseRange;
    f32 m23 = farZ * nearZ * inverseRange;
    m[0][1] = 0.0f;
    m[0][2] = 0.0f;
    m[0][3] = 0.0f;
    m[1][0] = 0.0f;
    m[1][2] = 0.0f;
    m[1][3] = 0.0f;
    m[2][0] = 0.0f;
    m[2][1] = 0.0f;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = -1.0f;
    m[3][3] = 0.0f;
    m[0][0] = m00;
    m[1][1] = cot;
    m[2][2] = m22;
    m[2][3] = m23;
    return pOut;
}

#endif
