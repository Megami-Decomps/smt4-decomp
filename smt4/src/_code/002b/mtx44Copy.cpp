#include "common.h"

struct Matrix44 { f32 values[16]; };

extern "C" {
/* Copies a 4x4 matrix unless source and destination are the same object. */
void mtx44Copy(Matrix44 *destination, const Matrix44 *source)
{
    if (source != destination) {
        Matrix44 value = *source;
        *destination = value;
    }
}
}
