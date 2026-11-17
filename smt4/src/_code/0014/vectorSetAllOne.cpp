#include "shard/W6_W6Match7_QuadVectors.h"

/* Initializes all four components to one. */
extern "C" void vectorSetAllOne(QuadVector *vector)
{
    vector->xyz.x = 1.0f;
    vector->xyz.y = 1.0f;
    vector->xyz.z = 1.0f;
    vector->w = 1.0f;
}
