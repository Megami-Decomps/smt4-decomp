#include "common.h"

/* Orders unsigned halfword keys in descending order. */
extern "C" s32 dataCompareUnsignedHalfwordKeysDescending(const u16 *left, const u16 *right)
{
    return *right - *left;
}
