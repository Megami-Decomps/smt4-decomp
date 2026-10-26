#include "common.h"

extern "C" {

/* Clamps a value between the supplied bounds. */
f32 mathClampFloat(f32 lower, f32 upper, f32 value)
{
    f32 result = value;
    if (result > upper) {
        result = upper;
    } else if (result < lower) {
        result = lower;
    }
    return result;
}

} /* extern "C" */
