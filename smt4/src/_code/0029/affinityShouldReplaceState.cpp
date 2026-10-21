/* NON_MATCHING: default switch lowering moves case5 out of line and reverses common return blocks (26 vs retail25 rows); optimization-flag candidate. */
#include "common.h"

extern "C" u32 affinityShouldReplaceState(s32 current, s32 incoming)
{
    if (current == 0) {
        return 1;
    }
    if (incoming != 0) {
        switch (current) {
        case 1:
            if (incoming == 3 || incoming == 4) {
                return 1;
            }
            break;
        case 2:
            return 1;
        case 3:
            if (incoming == 4) {
                return 1;
            }
            break;
        case 5:
            if (incoming != 2) {
                return 1;
            }
            break;
        }
    }
    return 0;
}
