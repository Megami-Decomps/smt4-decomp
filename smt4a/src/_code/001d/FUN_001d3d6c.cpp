/* NON_MATCHING: retail uses vldmia r2, {s0-s11} where the compiled block uses vldr s1, [r2]. */
#include "common.h"

struct ScaleVector {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};

struct MatrixRows {
    f32 row[3][4]; // 0x00, 0x10, 0x20
};

extern "C" void FUN_001d3d6c(MatrixRows* destination,
                             const ScaleVector* scale,
                             const MatrixRows* matrix)
{
    MatrixRows input = *matrix;
    const ScaleVector factors = *scale;

    input.row[0][0] *= factors.x;
    input.row[0][1] *= factors.x;
    input.row[0][2] *= factors.x;
    input.row[0][3] *= factors.x;
    input.row[1][0] *= factors.y;
    input.row[1][1] *= factors.y;
    input.row[1][2] *= factors.y;
    input.row[1][3] *= factors.y;
    input.row[2][0] *= factors.z;
    input.row[2][1] *= factors.z;
    input.row[2][2] *= factors.z;
    input.row[2][3] *= factors.z;

    *destination = input;
}
