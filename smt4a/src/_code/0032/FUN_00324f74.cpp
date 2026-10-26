/* NON_MATCHING: case 39 (returns 1) added from retail; compiler still emits one dense switch table where retail splits it around cases 24 and 37/38/39. */
#include "common.h"

// Classify the supported object kinds by their required instance count.
extern "C" u32 FUN_00324f74(s32 kind)
{
    switch (kind) {
    case 1: case 2: case 3: case 4: case 6: case 7: case 8: case 9:
    case 12: case 13: case 14: case 15: case 17: case 20: case 21: case 22:
    case 24: case 27: case 31: case 33: case 34: case 39: return 1;
    case 5: case 10: case 19: case 23: case 26: case 28: return 2;
    case 37: case 38: return 3;
    default: return 0;
    }
}
