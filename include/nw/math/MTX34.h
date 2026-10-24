/* nw::math::MTX34: a 3x4 float matrix (row major). The default constructor leaves it
 * uninitialized; Identity() is the shared identity. Its function-local static and guard are emitted as comdat
 * symbols, so every function that uses it expands the guard and the constructor inline. */
#ifndef NW_MATH_MTX34_H
#define NW_MATH_MTX34_H

#include "common.h"

namespace nw {
namespace math {

struct MTX34 {
    f32 m[3][4];

    MTX34() {}

    MTX34(f32 m00, f32 m01, f32 m02, f32 m03, f32 m10, f32 m11, f32 m12, f32 m13, f32 m20, f32 m21,
          f32 m22, f32 m23)
    {
        m[0][0] = m00; m[0][1] = m01; m[0][2] = m02; m[0][3] = m03;
        m[1][0] = m10; m[1][1] = m11; m[1][2] = m12; m[1][3] = m13;
        m[2][0] = m20; m[2][1] = m21; m[2][2] = m22; m[2][3] = m23;
    }

    static const MTX34 &Identity()
    {
        static MTX34 identity(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        return identity;
    }
};

}  // namespace math
}  // namespace nw

#endif
