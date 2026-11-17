#include "util/MathFunctions.h"

/* Clears the vector. */
extern "C" void mathVectorClear(f32 *vector)
{
    vector[2] = 0.0f;
    vector[1] = 0.0f;
    vector[0] = 0.0f;
}
