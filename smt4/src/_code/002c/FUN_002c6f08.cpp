#include "common.h"

/* Sorts nonempty halfword keys numerically, placing empty keys last. */
extern "C" s32 FUN_002c6f08(const u16 *left, const u16 *right)
{
    s32 leftKey = *left;
    s32 rightKey = *right;
    if (leftKey != 0) {
        if (rightKey == 0) {
            return -1;
        }
    } else if (rightKey != 0) {
        return 1;
    }
    return leftKey - rightKey;
}
