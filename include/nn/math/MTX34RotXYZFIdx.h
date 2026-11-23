/* nn::math's XYZ rotation matrix from table-index angles (math_Matrix34.ipp), as its users inline it. */
#ifndef NN_MATH_MTX34ROTXYZFIDX_H
#define NN_MATH_MTX34ROTXYZFIDX_H

#include "common.h"
#include <math.h>
#include "nw/math/MTX33.h"
#include "nn/math/MathArithmetic.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

namespace nw {
namespace math {

/* MTX34RotXYZFIdx (angles in 1/256 turns) in the SDK's fast C form: the three phases are reduced, split
 * and looked up side by side (sign and magnitude per axis first), the table samples and the products go
 * through locals, and the translation is cleared with integer stores. */
static __forceinline void MTX34RotXYZFIdx(MTX34 *pOut, f32 fIdxX, f32 fIdxY, f32 fIdxZ)
{
    f32 sinx, cosx;
    f32 siny, cosy;
    f32 sinz, cosz;
    f32 f1, f2, f3, f4;
    f32 f00, f10, f21, f22;
    f32 f01, f11, f02, f12;

    {
        u16 idxx;
        f32 abs_fidxx;
        f32 rx;
        u16 idxy;
        f32 abs_fidxy;
        f32 ry;
        u16 idxz;
        f32 abs_fidxz;
        f32 rz;
        int negx, negy, negz;

        negx = (fIdxX < 0.0f) ? 1 : 0;
        abs_fidxx = fabsf(fIdxX);
        negy = (fIdxY < 0.0f) ? 1 : 0;
        abs_fidxy = fabsf(fIdxY);
        negz = (fIdxZ < 0.0f) ? 1 : 0;
        abs_fidxz = fabsf(fIdxZ);

        while (abs_fidxx >= 65536.0f) {
            abs_fidxx -= 65536.0f;
        }
        while (abs_fidxy >= 65536.0f) {
            abs_fidxy -= 65536.0f;
        }
        while (abs_fidxz >= 65536.0f) {
            abs_fidxz -= 65536.0f;
        }

        idxx = nn::math::F32ToU16(abs_fidxx);
        idxy = nn::math::F32ToU16(abs_fidxy);
        idxz = nn::math::F32ToU16(abs_fidxz);
        {
            f32 idxxf, idxyf, idxzf;

            idxxf = nn::math::U16ToF32(idxx);
            idxyf = nn::math::U16ToF32(idxy);
            idxzf = nn::math::U16ToF32(idxz);

            rx = abs_fidxx - idxxf;
            ry = abs_fidxy - idxyf;
            rz = abs_fidxz - idxzf;
        }

        idxx &= 0xff;
        idxy &= 0xff;
        idxz &= 0xff;

        {
            f32 sinx_val, sinx_delta, cosx_val, cosx_delta;
            f32 siny_val, siny_delta, cosy_val, cosy_delta;
            f32 sinz_val, sinz_delta, cosz_val, cosz_delta;

            sinx_val = g_sinCosTable[idxx].sine;
            cosx_val = g_sinCosTable[idxx].cosine;
            sinx_delta = g_sinCosTable[idxx].sineDelta;
            cosx_delta = g_sinCosTable[idxx].cosineDelta;

            siny_val = g_sinCosTable[idxy].sine;
            cosy_val = g_sinCosTable[idxy].cosine;
            siny_delta = g_sinCosTable[idxy].sineDelta;
            cosy_delta = g_sinCosTable[idxy].cosineDelta;

            sinz_val = g_sinCosTable[idxz].sine;
            cosz_val = g_sinCosTable[idxz].cosine;
            sinz_delta = g_sinCosTable[idxz].sineDelta;
            cosz_delta = g_sinCosTable[idxz].cosineDelta;

            sinx = sinx_val + rx * sinx_delta;
            cosx = cosx_val + rx * cosx_delta;

            siny = siny_val + ry * siny_delta;
            cosy = cosy_val + ry * cosy_delta;

            sinz = sinz_val + rz * sinz_delta;
            cosz = cosz_val + rz * cosz_delta;
        }

        sinx = (negx) ? -sinx : sinx;
        siny = (negy) ? -siny : siny;
        sinz = (negz) ? -sinz : sinz;
    }

    pOut->m[2][0] = -siny;
    f00 = cosz * cosy;
    f10 = sinz * cosy;
    f21 = sinx * cosy;
    f22 = cosx * cosy;

    f1 = cosx * sinz;
    f2 = sinx * cosz;

    f01 = f2 * siny - f1;
    f12 = f1 * siny - f2;

    f3 = sinx * sinz;
    f4 = cosx * cosz;

    f02 = f4 * siny + f3;
    f11 = f3 * siny + f4;

    pOut->m[0][0] = f00;
    pOut->m[1][0] = f10;
    pOut->m[2][1] = f21;
    pOut->m[2][2] = f22;

    pOut->m[0][1] = f01;
    pOut->m[1][2] = f12;
    pOut->m[0][2] = f02;
    pOut->m[1][1] = f11;

    /* The translation is cleared with integer stores, as the SDK does. */
    *(u32 *)&pOut->m[0][3] = 0;
    *(u32 *)&pOut->m[1][3] = 0;
    *(u32 *)&pOut->m[2][3] = 0;
}

} // namespace math
} // namespace nw

#endif
