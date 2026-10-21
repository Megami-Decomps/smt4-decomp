/* NON_MATCHING: compiler adds a branch from the zero/zero case to the shared return. */
#include "common.h"
/* Sorts nonzero keys before zero keys, treating all nonzero keys as equal. */
extern "C" s32 FUN_00321c94(const u16 *left, const u16 *right)
{
    s32 order = 0;
    if (*left != 0) {
        if (*right == 0) order = -1;
    } else if (*right != 0) {
        order = 1;
    }
    return order;
}
