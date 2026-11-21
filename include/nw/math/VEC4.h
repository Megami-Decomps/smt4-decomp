/* nw::math::VEC4: a four-component float vector. */
#ifndef NW_MATH_VEC4_H
#define NW_MATH_VEC4_H

#include "common.h"

namespace nw {
namespace math {

struct VEC4 {
    f32 x, y, z, w;
};
typedef char VEC4Size[sizeof(VEC4) == 0x10 ? 1 : -1];

} // namespace math
} // namespace nw

#endif
