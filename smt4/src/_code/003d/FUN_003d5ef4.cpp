#include "common.h"

struct Vector3 { f32 x, y, z; };
/* Clears the vector. */
extern "C" void FUN_003d5ef4(Vector3 *vector)
{
    vector->z = 0.0f;
    vector->y = 0.0f;
    vector->x = 0.0f;
}
