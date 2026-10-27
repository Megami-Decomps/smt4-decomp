/* NON_MATCHING: constant load order, negative Y-angle remainder registers and final Z-angle float conversion registers differ. */
#include "shard/W5_W5Match2_PlainData.h"

extern "C" {
void FUN_001a1c28(Matrix44 *matrix, f32 x, f32 y, f32 z);
void nn_math_ARMv6_MTX44MultAsm(Matrix44 *destination, const Matrix44 *left, const Matrix44 *right);
}

static inline s32 wrapDegrees(s32 angle)
{
    if (angle >= 360)
        angle %= 360;
    if (angle < 0) {
        if (angle <= -360)
            angle %= 360;
        angle += 360;
    }
    return angle;
}

extern "C" void FUN_0021252c(Matrix44 *matrix, s32 x, s32 y, s32 z)
{
    Matrix44 rotation;
    if (y != 0) {
        FUN_001a1c28(&rotation, 0.0f, static_cast<f32>(360 - wrapDegrees(y)) * (256.0f / 360.0f), 0.0f);
        nn_math_ARMv6_MTX44MultAsm(matrix, matrix, &rotation);
    }
    if (x != 0) {
        FUN_001a1c28(&rotation, static_cast<f32>(360 - wrapDegrees(x)) * (256.0f / 360.0f), 0.0f, 0.0f);
        nn_math_ARMv6_MTX44MultAsm(matrix, matrix, &rotation);
    }
    if (z != 0) {
        FUN_001a1c28(&rotation, 0.0f, 0.0f, static_cast<f32>(360 - wrapDegrees(z)) * (256.0f / 360.0f));
        nn_math_ARMv6_MTX44MultAsm(matrix, matrix, &rotation);
    }
}
