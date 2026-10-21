/* NON_MATCHING: compiler predicates the second-byte comparison instead of branching. */
#include "common.h"

/* Compares two-byte keys lexicographically. */
extern "C" s32 FUN_002d0520(const u8 *left, const u8 *right)
{
    s32 difference = left[0] - right[0];
    if (difference != 0) {
        return difference;
    }
    return left[1] - right[1];
}
