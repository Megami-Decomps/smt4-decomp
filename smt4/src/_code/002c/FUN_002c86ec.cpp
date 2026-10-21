#include "common.h"

/* Computes the dot product of two three-component vectors. */
extern "C" f32 FUN_002c86ec(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ)
{
    return x * otherX + y * otherY + z * otherZ;
}
