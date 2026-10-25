/* NON_MATCHING: shape and preloaded s0/s1 match retail; only the order of the 1.0f and 2.5f preloads (and pool words) is swapped. */
#include "common.h"

extern "C" {
// Select the scale factor associated with a category.
f32 FUN_00243d30(u32 category)
{
    f32 scale = 1.0f;

    switch (category) {
    case 1:
        scale = 1.8f;
        break;
    case 2:
        scale = 0.1f;
        break;
    case 3:
        scale = 2.5f;
        break;
    case 4:
        scale = 2.5f;
        break;
    case 5:
        scale = 1.4f;
        break;
    }
    return scale;
}
}
