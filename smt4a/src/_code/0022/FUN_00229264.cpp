#include "common.h"

extern "C" {
// Advance a value by a signed step without crossing the destination.
void FUN_00229264(float *value, float step, float destination)
{
    *value += step;
    if (step >= 0.0f) {
        if (*value > destination) {
            *value = destination;
        }
    } else {
        if (*value < destination) {
            *value = destination;
        }
    }
}
}
