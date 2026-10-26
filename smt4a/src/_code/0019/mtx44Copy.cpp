/* NON_MATCHING: the 16-register vldmia/vstmia copy now matches; armcc predicates the transfer (vldmiane/vstmiane) where retail has an unpredicated copy behind `bxeq lr`. */
#include "common.h"

struct Matrix44 { f32 values[16]; };

extern "C" {
/* Copies a 4x4 matrix unless both pointers name the same object. */
void mtx44Copy(Matrix44 *destination, const Matrix44 *source)
{
    if (source == destination)
        return;
    Matrix44 value = *source;
    *destination = value;
}
}
