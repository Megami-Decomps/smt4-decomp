#include "common.h"

/* Compares packed keys by their low byte, then their following halfword. */
extern "C" s32 packedKeyCompare(const u32 *left, const u32 *right)
{
    u32 leftKey = *left;
    u32 rightKey = *right;
    s32 difference = (leftKey & 0xff) - (rightKey & 0xff);
    if (difference != 0) {
        return difference;
    }
    return ((leftKey >> 8) & 0xffff) - ((rightKey >> 8) & 0xffff);
}
