/* NON_MATCHING: compiler copies the matrix in chunks rather than retail's single twelve-float register transfer. */
#include "common.h"

namespace { struct Matrix34 { f32 values[12]; }; struct Vector3 { f32 x, y, z; }; }

extern "C" {
/* Updates or returns the requested state. */
void nn_math_ARMv6_MTX34AddTranslateAsm(Matrix34 *destination, const Vector3 *translation, const Matrix34 *source)
{
    *destination = *source;
    destination->values[3] += translation->x;
    destination->values[7] += translation->y;
    destination->values[11] += translation->z;
}
}
