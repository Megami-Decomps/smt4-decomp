/* nn::math's conversion inlines (math_Arithmetic.h): the trig table lookups (SinFIdx, CosFIdx,
 * SinCosFIdx) split a phase into its table index and fraction through them. Called as inlines they
 * schedule differently from plain casts written in place. */
#ifndef NN_MATH_MATHARITHMETIC_H
#define NN_MATH_MATHARITHMETIC_H

#include "common.h"

namespace nn {
namespace math {

static __inline u16 F32ToU16(f32 x)
{
    return (u16)x;
}

static __inline f32 U16ToF32(u16 x)
{
    return (f32)x;
}

} // namespace math
} // namespace nn

#endif
