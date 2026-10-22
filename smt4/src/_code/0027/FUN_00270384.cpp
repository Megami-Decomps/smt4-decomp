/* NON_MATCHING: retail partitions category jump tables; compiler emits one larger dispatch table. */
#include "common.h"

/* Translate the map category code into its three-way classification. */
extern "C" u32 FUN_00270384(s32 category)
{
    switch (category) {
    case 3: case 4: case 7: case 8:
    case 12: case 13: case 14: case 15:
    case 20: case 21: case 22: case 24:
    case 27: case 28: case 32: case 33: case 34:
        return 1;
    case 5: case 9: case 10: case 18: case 19:
    case 25: case 26: case 29: case 30: case 31: case 41:
        return 2;
    case 1: case 2: case 6: case 16: case 17: case 23: case 35:
        return 3;
    default:
        return 0;
    }
}
