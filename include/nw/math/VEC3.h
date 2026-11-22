/* nn::math's VEC3 header inlines (the C versions) and the look-at view matrix built from them,
 * inlined by the screen camera setup (smt4 renderCtxSetupScreenCamera). The listener orientation of both games
 * (smt4 FUN_00119c28, smt4a FUN_00154710) inlines the same look-at, but with this form its VFP
 * allocation scores worse there, so those stay open-coded for now. */
#ifndef NW_MATH_VEC3_H
#define NW_MATH_VEC3_H

#include "nw/math/MTX33.h"
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

} // namespace math
} // namespace nw

#endif
