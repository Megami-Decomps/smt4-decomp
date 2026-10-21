/* NON_MATCHING: compiler keeps key values in different registers and adds a return branch. */
#include "common.h"

/* Orders nonempty halfword entries before empty entries. */
extern "C" s32 FUN_002c6e64(const u16 *left, const u16 *right)
{
    u16 leftValue = *left;
    u16 rightValue = *right;
    if (leftValue != 0) {
        return rightValue == 0 ? -1 : 0;
    }
    return rightValue != 0 ? 1 : 0;
}
