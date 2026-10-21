/* NON_MATCHING: clamp branch ordering and negative-step floating comparison differ from retail. */
#include "common.h"

static __inline float clampStep(float value, float step, float destination)
{
    if (step >= 0.0f) {
        if (value > destination) {
            return destination;
        }
    } else if (value <= destination) {
        return destination;
    }
    return value;
}

extern "C" {
// Advance a value by a signed step without crossing the destination.
void FUN_00291008(float *value, float step, float destination)
{
    *value += step;
    *value = clampStep(*value, step, destination);
}
}
