/* nn::math's MTX44 header inlines that build and combine transforms, as the ComWin draws of both games
 * inline them: an identity copy, the ARMv6 "fast C" translation and scale (which store the constant elements
 * as words: retail's `mov r0, #0; mov r1, #0x3f800000` stores) and the ARMv6 product. */
#ifndef NW_MATH_MTX44TRANSFORM_H
#define NW_MATH_MTX44TRANSFORM_H

#include "nw/math/MTX33.h"
#include "nw/math/MTX44.h"

extern "C" {
/* nn::math::MTX44Copy: copies unless both name the same matrix. */
void mtx44Copy(nw::math::MTX44 *destination, const nw::math::MTX44 *source);
void nn_math_ARMv6_MTX44MultAsm(nw::math::MTX44 *out, const nw::math::MTX44 *left, const nw::math::MTX44 *right);
/* nw::math::MTX44::Identity(), out of line. */
const nw::math::MTX44 *_ZN2nw4math5MTX448IdentityEv(void);
}

namespace nw {
namespace math {

static __inline MTX44 *MTX44Identity(MTX44 *out)
{
    mtx44Copy(out, _ZN2nw4math5MTX448IdentityEv());
    return out;
}

static __inline MTX44 *MTX44Mult(MTX44 *out, const MTX44 *left, const MTX44 *right)
{
    nn_math_ARMv6_MTX44MultAsm(out, left, right);
    return out;
}

/* nn::math::VEC3TransformCoord: transforms a point by the matrix and divides by the resulting w (inlined,
 * through VEC3TransformCoordArray, by smt4a's particle quad fill FUN_004ff4e0). */
static __inline VEC3 *VEC3TransformCoord(VEC3 *pOut, const MTX44 *pM, const VEC3 *pV)
{
    VEC3 tmp;
    f32 rw;

    tmp.x = pM->m[0][0] * pV->x + pM->m[0][1] * pV->y + pM->m[0][2] * pV->z + pM->m[0][3];
    tmp.y = pM->m[1][0] * pV->x + pM->m[1][1] * pV->y + pM->m[1][2] * pV->z + pM->m[1][3];
    tmp.z = pM->m[2][0] * pV->x + pM->m[2][1] * pV->y + pM->m[2][2] * pV->z + pM->m[2][3];
    rw = pM->m[3][0] * pV->x + pM->m[3][1] * pV->y + pM->m[3][2] * pV->z + pM->m[3][3];
    rw = 1.0f / rw;

    pOut->x = rw * tmp.x;
    pOut->y = rw * tmp.y;
    pOut->z = rw * tmp.z;
    return pOut;
}

/* nn::math::VEC3TransformCoordArray: VEC3TransformCoord over `count` points. */
static __inline VEC3 *VEC3TransformCoordArray(VEC3 *pOut, const MTX44 *pM, const VEC3 *pV, u32 count)
{
    VEC3 *pDst = pOut;
    for (u32 i = 0; i < count; ++i) {
        VEC3TransformCoord(pDst, pM, pV);
        ++pV;
        ++pDst;
    }
    return pOut;
}

/* nn::math::VEC3 with its constructor (the shared VEC3 stays an aggregate for the units that initialise it
 * with braces): by-value components, which a caller evaluates before the vector exists. */
struct VEC3Value : VEC3 {
    VEC3Value() {}
    VEC3Value(f32 fx, f32 fy, f32 fz)
    {
        x = fx;
        y = fy;
        z = fz;
    }
};

/* nn::math::ARMv6::MTX44TranslateC_FAST: the identity with *pT in the last column, written as words (the
 * out-of-line copy is smt4a nn_math_ARMv6_MTX44TranslateC_FAST, 0x43b9f0). The constant elements are the bits of float
 * constants read back as words: inlined, armcc keeps 0.0f and 1.0f in VFP registers for the caller and
 * loads their bits into core registers again at each site (`mov r0, #0; mov r1, #0x3f800000`), which
 * integer literals do not give (they share the caller's zero register). */
static __inline MTX44 *MTX44Translate(MTX44 *pOut, const VEC3 *pT)
{
    const f32 one = 1.0f;
    const f32 zero = 0.0f;
    const unsigned int f1 = *reinterpret_cast<const unsigned int *>(&one);
    const unsigned int f0 = *reinterpret_cast<const unsigned int *>(&zero);
    const unsigned int *t = reinterpret_cast<const unsigned int *>(pT);
    unsigned int *m = reinterpret_cast<unsigned int *>(pOut->m);

    m[ 0] = f1;
    m[ 1] = f0;
    m[ 2] = f0;
    m[ 3] = *(t + 0);

    m[ 4] = f0;
    m[ 5] = f1;
    m[ 6] = f0;
    m[ 7] = *(t + 1);

    m[ 8] = f0;
    m[ 9] = f0;
    m[10] = f1;
    m[11] = *(t + 2);

    m[12] = f0;
    m[13] = f0;
    m[14] = f0;
    m[15] = f1;
    return pOut;
}

/* nn::math::ARMv6::MTX44ScaleC_FAST: the diagonal *pS, written the same way. */
static __inline MTX44 *MTX44Scale(MTX44 *pOut, const VEC3 *pS)
{
    const f32 one = 1.0f;
    const f32 zero = 0.0f;
    const unsigned int f1 = *reinterpret_cast<const unsigned int *>(&one);
    const unsigned int f0 = *reinterpret_cast<const unsigned int *>(&zero);
    const unsigned int *s = reinterpret_cast<const unsigned int *>(pS);
    unsigned int *m = reinterpret_cast<unsigned int *>(pOut->m);

    m[ 0] = *(s + 0);
    m[ 1] = f0;
    m[ 2] = f0;
    m[ 3] = f0;

    m[ 4] = f0;
    m[ 5] = *(s + 1);
    m[ 6] = f0;
    m[ 7] = f0;

    m[ 8] = f0;
    m[ 9] = f0;
    m[10] = *(s + 2);
    m[11] = f0;

    m[12] = f0;
    m[13] = f0;
    m[14] = f0;
    m[15] = f1;
    return pOut;
}

}  // namespace math
}  // namespace nw

#endif
