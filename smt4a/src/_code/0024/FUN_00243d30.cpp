/* NON_MATCHING: retail preloads default/2.5f into s0/s1 before the switch; direct returns load each literal in its case. */
#include "common.h"

extern "C" {
// Select the scale factor associated with a category.
f32 FUN_00243d30(u32 category)
{
    switch (category) {
    case 1:
        return 1.8f;
    case 2:
        return 0.1f;
    case 3:
    case 4:
        return 2.5f;
    case 5:
        return 1.4f;
    }
    return 1.0f;
}
}
