/* nn::math's VEC3 header inlines (the C versions) and the look-at view matrix built from them,
 * inlined by the screen camera setup (smt4 renderCtxSetupScreenCamera). The listener orientation of both games
 * (smt4 soundListenerSetPose, smt4a soundListenerSetPose) inlines the same look-at, but with this form its VFP
 * allocation scores worse there, so those stay open-coded for now. */
#ifndef NW_MATH_VEC3_H
#define NW_MATH_VEC3_H

#include "nw/math/MTX33.h"
#include "nw/math/Trig.h"
#include <math.h>

namespace nw {
namespace math {

static __inline VEC3 *VEC3Add(VEC3 *out, const VEC3 *a, const VEC3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
    return out;
}

static __inline VEC3 *VEC3Sub(VEC3 *out, const VEC3 *a, const VEC3 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
    return out;
}

static __inline f32 VEC3Dot(const VEC3 *a, const VEC3 *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

static __inline VEC3 *VEC3Normalize(VEC3 *out, const VEC3 *v)
{
    f32 scale = 1.0f / sqrtf(VEC3Dot(v, v));
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

static __inline VEC3 *VEC3Cross(VEC3 *out, const VEC3 *a, const VEC3 *b)
{
    VEC3 tmp;
    tmp.x = a->y * b->z - a->z * b->y;
    tmp.y = a->z * b->x - a->x * b->z;
    tmp.z = a->x * b->y - a->y * b->x;
    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
    return out;
}

/* The view matrix of a camera at camPos looking at target (rows: right, up, look). */
static __inline void MTX34LookAt(f32 (*m)[4], const VEC3 *camPos, const VEC3 *camUp, const VEC3 *target)
{
    VEC3 look;
    VEC3Sub(&look, camPos, target);
    VEC3Normalize(&look, &look);
    VEC3 right;
    VEC3Cross(&right, camUp, &look);
    VEC3Normalize(&right, &right);
    VEC3 up;
    VEC3Cross(&up, &look, &right);
    m[0][0] = right.x;
    m[0][1] = right.y;
    m[0][2] = right.z;
    m[0][3] = -VEC3Dot(camPos, &right);
    m[1][0] = up.x;
    m[1][1] = up.y;
    m[1][2] = up.z;
    m[1][3] = -VEC3Dot(camPos, &up);
    m[2][0] = look.x;
    m[2][1] = look.y;
    m[2][2] = look.z;
    m[2][3] = -VEC3Dot(camPos, &look);
}

/* Degrees as an index into the 256-step trig table (nn::math's NN_MATH_DEG_TO_FIDX). */
#define NW_MATH_DEG_TO_FIDX(deg) ((deg) * (256.0f / 360.0f))

/* The view matrix of a camera at camPos looking at target and rolled by twist degrees about its line of
 * sight (nn::math's MTX34LookAt with a twist): the roll is undefined when the camera looks straight up or
 * down. smt4 asdCameraSetLookAtRoll inlines it. */
static __inline MTX34 *MTX34LookAt(MTX34 *pOut, const VEC3 *camPos, f32 twist, const VEC3 *target)
{
    f32 (*const m)[4] = pOut->m;
    VEC3 lookReverse;
    lookReverse.x = camPos->x - target->x;
    lookReverse.y = camPos->y - target->y;
    lookReverse.z = camPos->z - target->z;
    if (lookReverse.x == 0.0f && lookReverse.z == 0.0f) {
        m[0][0] = 1.0f;
        m[0][1] = 0.0f;
        m[0][2] = 0.0f;
        m[0][3] = -camPos->x;
        m[1][0] = 0.0f;
        m[1][1] = 0.0f;
        m[2][0] = 0.0f;
        m[2][2] = 0.0f;
        if (lookReverse.y <= 0.0f) {
            /* looking straight up */
            m[1][2] = 1.0f;
            m[1][3] = -camPos->z;
            m[2][1] = -1.0f;
            m[2][3] = camPos->y;
        } else {
            /* looking straight down */
            m[1][2] = -1.0f;
            m[1][3] = camPos->z;
            m[2][1] = 1.0f;
            m[2][3] = -camPos->y;
        }
    } else {
        /* r is the horizontal right axis, u the untwisted up axis */
        VEC3 look;
        VEC3Normalize(&look, &lookReverse);
        f32 scale = 1.0f / sqrtf(lookReverse.z * lookReverse.z + lookReverse.x * lookReverse.x);
        VEC3 r;
        r.x = lookReverse.z * scale;
        r.y = 0.0f;
        r.z = -lookReverse.x * scale;
        VEC3 u;
        u.x = look.y * r.z - look.z * r.y;
        u.y = look.z * r.x - look.x * r.z;
        u.z = look.x * r.y - look.y * r.x;
        f32 st;
        f32 ct;
        mathSinCos(&st, &ct, NW_MATH_DEG_TO_FIDX(twist));
        /* r and u turned by the twist in their plane (r.y is 0) */
        VEC3 right;
        VEC3 up;
        right.x = st * u.x + ct * r.x;
        right.y = st * u.y;
        right.z = st * u.z + ct * r.z;
        up.x = ct * u.x - st * r.x;
        up.y = ct * u.y;
        up.z = ct * u.z - st * r.z;
        m[0][0] = right.x;
        m[0][1] = right.y;
        m[0][2] = right.z;
        m[0][3] = -VEC3Dot(camPos, &right);
        m[1][0] = up.x;
        m[1][1] = up.y;
        m[1][2] = up.z;
        m[1][3] = -VEC3Dot(camPos, &up);
        m[2][0] = look.x;
        m[2][1] = look.y;
        m[2][2] = look.z;
        m[2][3] = -VEC3Dot(camPos, &look);
    }
    return pOut;
}

} // namespace math
} // namespace nw

#endif
