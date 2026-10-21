#include "common.h"

/* Orders byte keys in ascending order. */
extern "C" s32 sortCompareByteAscending(const u8 *left, const u8 *right)
{
    return *left - *right;
}
