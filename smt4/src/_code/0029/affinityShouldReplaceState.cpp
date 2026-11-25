/* NON_MATCHING: armcc orders the switch's comparisons and the two return blocks differently. */
#include "common.h"

/* Applies the affinity-state precedence rules. */
extern "C" u32 affinityShouldReplaceState(s32 current, s32 incoming)
{
    if (current == 0) {
        return 1;
    }
    if (incoming == 0) {
        return 0;
    }

    u32 replace;
    switch (current) {
    case 1:
        replace = incoming == 3 || incoming == 4;
        break;
    case 2:
        replace = 1;
        break;
    case 3:
        replace = incoming == 4;
        break;
    case 5:
        replace = incoming != 2;
        break;
    default:
        replace = 0;
        break;
    }
    return replace;
}
