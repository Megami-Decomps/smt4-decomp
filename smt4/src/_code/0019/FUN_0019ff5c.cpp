/* NON_MATCHING: instruction selection/order differs: retail bhi 38; compiler bgt 38. */
#include "common.h"

extern "C" {

/* Clears values inside the symmetric dead zone and returns the filtered value. */
f32 FUN_0019ff5c(f32 *value, f32 threshold)
{
    if (value == NULL) {
        return 0.0f;
    }
    f32 current = *value;
    if (current > threshold) {
        return current;
    }
    if (current >= -threshold) {
        *value = 0.0f;
        return 0.0f;
    }
    return current;
}

} /* extern "C" */
