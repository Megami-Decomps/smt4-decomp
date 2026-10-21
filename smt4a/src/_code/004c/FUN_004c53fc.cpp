/* NON_MATCHING: compiler folds the contiguous switch cases into a range test; retail uses a 12-entry jump table. */
#include "common.h"

extern "C" {
// Categories seven through eleven use the special -3 result.
s32 FUN_004c53fc(u32 category)
{
    s32 result = 0;
    switch (category) {
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        result = -3;
        break;
    }
    return result;
}
}
