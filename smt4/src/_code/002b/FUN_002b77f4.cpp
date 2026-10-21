/* NON_MATCHING: compiler copies the transposed matrix in several groups instead of one VFP store-multiple. */
#include "common.h"

namespace { struct Matrix { float values[12]; }; }

extern "C" {
void FUN_002b77f4(Matrix *output, const Matrix *input)
{
    Matrix result = {{input->values[0], input->values[4], input->values[8], 0.0f,
                      input->values[1], input->values[5], input->values[9], 0.0f,
                      input->values[2], input->values[6], input->values[10], 0.0f}};
    *output = result;
}
}
