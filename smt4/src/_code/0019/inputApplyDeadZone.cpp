#include "common.h"

extern "C" {

/* Clears values inside the symmetric dead zone and returns the filtered value. */
f32 inputApplyDeadZone(f32 *value, f32 threshold)
{
    if (value == NULL) {
        return 0.0f;
    }
    f32 current = *value;
    if (current <= threshold && current >= -threshold) {
        *value = 0.0f;
        return 0.0f;
    }
    return current;
}

} /* extern "C" */
