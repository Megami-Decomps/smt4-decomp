#ifndef NW_MATH_MTX33_H
#define NW_MATH_MTX33_H

#include "nw/math/MTX34.h"

namespace nw {
namespace math {

struct VEC3 {
    f32 x, y, z;
};
struct MTX33 {
    f32 m[3][3];
};
typedef char VEC3Size[sizeof(VEC3) == 0xc ? 1 : -1];
typedef char MTX33Size[sizeof(MTX33) == 0x24 ? 1 : -1];

} // namespace math
} // namespace nw

extern "C" void nn_math_ARMv6_MTX34ToMTX33Asm(nw::math::MTX33 *output, const nw::math::MTX34 *input);

/* The value-form matrix conversion preserves a private source copy for the low-level routine. */
static __inline void matrix33FromTransform(nw::math::MTX33 *output, nw::math::MTX34 input)
{
    nn_math_ARMv6_MTX34ToMTX33Asm(output, &input);
}

#endif
