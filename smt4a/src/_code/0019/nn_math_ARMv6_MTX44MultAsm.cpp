/* NON_MATCHING: Retail is a fully unrolled VFP matrix kernel; the compiler retains the row loop and stack product. */
#include "shard/W5_W5Match2_PlainData.h"

/* Multiplies two row-major matrices; the temporary keeps either input safe when it aliases output. */
extern "C" void nn_math_ARMv6_MTX44MultAsm(Matrix44 *output, const Matrix44 *left, const Matrix44 *right)
{
    Matrix44 product;
    for (s32 row = 0; row < 4; ++row) {
        for (s32 column = 0; column < 4; ++column) {
            product.values[row * 4 + column] =
                left->values[row * 4] * right->values[column] +
                left->values[row * 4 + 1] * right->values[4 + column] +
                left->values[row * 4 + 2] * right->values[8 + column] +
                left->values[row * 4 + 3] * right->values[12 + column];
        }
    }
    *output = product;
}
