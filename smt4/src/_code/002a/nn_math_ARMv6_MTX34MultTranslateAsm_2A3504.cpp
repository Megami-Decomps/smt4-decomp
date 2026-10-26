/* NON_MATCHING: compiler emits separate row loads and stores instead of retail's contiguous VFP load/store-multiple. */
#include "common.h"
namespace { struct Row { float x, y, z, w; }; struct Matrix { Row rows[4]; }; }
extern "C" {
void nn_math_ARMv6_MTX34MultTranslateAsm_2A3504(Matrix *output, const Matrix *input, const float *translation)
{
    Row first = input->rows[0];
    Row second = input->rows[1];
    Row third = input->rows[2];
    float x = translation[0], y = translation[1], z = translation[2];
    first.w += first.x * x;
    second.w += second.x * x;
    third.w += third.x * x;
    first.w += first.y * y;
    second.w += second.y * y;
    third.w += third.y * y;
    first.w += first.z * z;
    second.w += second.z * z;
    third.w += third.z * z;
    Row fourth = input->rows[3];
    output->rows[0] = first;
    output->rows[1] = second;
    output->rows[2] = third;
    output->rows[3] = fourth;
}
}
