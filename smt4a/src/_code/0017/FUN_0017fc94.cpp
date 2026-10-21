/* NON_MATCHING: retail uses vldmia r2, {s0-s11} where the compiled block uses vldr s10, [r1, #8]. */
#include "common.h"

struct Vector3 {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};

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

extern "C" void FUN_0017fc94(Matrix3x4* destination,
                              const Vector3* translation,
                              const Matrix3x4* source)
{
    Matrix3x4 result = *source;
    result.m03 += translation->x;
    result.m13 += translation->y;
    result.m23 += translation->z;
    *destination = result;
}
