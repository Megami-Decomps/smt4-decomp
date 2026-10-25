/* NON_MATCHING: compiler keeps key values in different registers and adds a return branch. */
#include "common.h"

/* Orders nonempty halfword entries before empty entries. */
extern "C" s32 FUN_002c6e64(const u16 *left, const u16 *right)
{
    s32 result = 0;

    if (*left != 0 && *right == 0) {
        result = -1;
    }
    if (*left == 0 && *right != 0) {
        result = 1;
    }
    return result;
}
