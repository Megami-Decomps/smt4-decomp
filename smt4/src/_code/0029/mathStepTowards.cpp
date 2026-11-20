#include "common.h"

extern "C" {

/* Moves `*value` by `step` towards `target`, stopping at the target. */
void mathStepTowards(f32 *value, f32 step, f32 target)
{
    *value += step;
    if (step >= 0.0f) {
        if (*value > target) {
            *value = target;
        }
    } else {
        if (*value < target) {
            *value = target;
        }
    }
}

} /* extern "C" */
