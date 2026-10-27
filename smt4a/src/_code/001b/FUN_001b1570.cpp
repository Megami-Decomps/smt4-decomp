#include "common.h"

extern "C" {

f32 sqrtf(f32);

/* Writes the unit vector of `source` to `result`; returns 0 and leaves `result` alone for a zero vector. */
u8 FUN_001b1570(f32 *result, const f32 *source)
{
    f32 x = source[0];
    f32 y = source[1];
    f32 z = source[2];
    f32 lengthSquared = x * x + y * y + z * z;

    if (lengthSquared == 0.0f) {
        return 0;
    }
    f32 inverse = 1.0f / sqrtf(lengthSquared);
    result[0] = x * inverse;
    result[1] = y * inverse;
    result[2] = z * inverse;
    return 1;
}

} /* extern "C" */
