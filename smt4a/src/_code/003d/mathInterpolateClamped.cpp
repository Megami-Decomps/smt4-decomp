#include "common.h"

extern "C" {



f32 mathInterpolateClamped(f32 first, f32 second, f32 weight)
{
    if (weight < 0.0f) {
        return first;
    }
    if (weight >= 1.0f) {
        return second;
    }
    return first + (second - first) * weight;
}

} /* extern "C" */
