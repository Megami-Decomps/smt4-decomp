#include "common.h"

/* Orders nonempty halfword entries before empty entries. */
extern "C" s32 FUN_002c6e38(const u16 *left, const u16 *right)
{
    s32 result = 0;
    if (*left != 0) {
        if (*right == 0) {
            return -1;
        }
        return result;
    }
    if (*right != 0) {
        return 1;
    }
    return result;
}
