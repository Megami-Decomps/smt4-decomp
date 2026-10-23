/* NON_MATCHING: compiler folds default-equivalent cases into a different switch tree. */
#include "common.h"

// Translate a failed platform result into the service wrapper's negative error codes.
extern "C" s32 FUN_00300c20(u32 result)
{
    if (static_cast<s32>(result & 0x80000000) >= 0)
        return 0;
    u32 module = (result & 0x3fc00) >> 10;
    s32 description = result & 0x3ff;
    switch (module) {
    case 1:
        break;
    case 6:
        if (description == 26)
            return -39;
        break;
    }
    switch (description) {
    case 7: return -8;
    case 8: return -10;
    case 1000: return -28;
    case 1002: return -2;
    case 1004: return -28;
    case 1005:
    case 1006: return -28;
    case 1007: return -43;
    case 1008: return -10;
    case 1009: return -28;
    case 1011: return -49;
    case 1016: return -39;
    case 1017: return -7;
    default: return -28;
    }
}
