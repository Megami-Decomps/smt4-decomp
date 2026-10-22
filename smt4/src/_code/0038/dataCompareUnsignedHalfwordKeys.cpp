#include "common.h"

/* Orders unsigned halfword keys in ascending order. */
extern "C" s32 dataCompareUnsignedHalfwordKeys(const u16 *left, const u16 *right)
{
    return *left - *right;
}
