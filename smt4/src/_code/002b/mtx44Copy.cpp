/* NON_MATCHING: compiler copies eight floats at a time rather than retail's sixteen-register transfer. */
#include "common.h"

struct Matrix44 { f32 values[16]; };

extern "C" {
/* Copies or updates the stored values. */
void mtx44Copy(Matrix44 *destination, const Matrix44 *source)
{
    if (destination != source) {
        *destination = *source;
    }
}
}
