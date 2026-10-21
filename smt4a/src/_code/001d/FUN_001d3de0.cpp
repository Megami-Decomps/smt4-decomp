/* NON_MATCHING: retail uses vldmia r1, {s0-s11} where the compiled block uses vldr s2, [r2, #4]. */
#include "common.h"

struct Matrix3x4 {
    f32 m00; // 0x00
    f32 m01; // 0x04
    f32 m02; // 0x08
    f32 m03; // 0x0C
    f32 m10; // 0x10
    f32 m11; // 0x14
    f32 m12; // 0x18
    f32 m13; // 0x1C
    f32 m20; // 0x20
    f32 m21; // 0x24
    f32 m22; // 0x28
    f32 m23; // 0x2C
};

struct Vector3 {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};

extern "C" void FUN_001d3de0(Matrix3x4* destination,
                              const Matrix3x4* matrix,
                              const Vector3* scale)
{
    const Vector3 factors = *scale;
    const Matrix3x4 result = {
        matrix->m00 * factors.x,
        matrix->m01 * factors.y,
        matrix->m02 * factors.z,
        matrix->m03,
        matrix->m10 * factors.x,
        matrix->m11 * factors.y,
        matrix->m12 * factors.z,
        matrix->m13,
        matrix->m20 * factors.x,
        matrix->m21 * factors.y,
        matrix->m22 * factors.z,
        matrix->m23
    };

    *destination = result;
}
