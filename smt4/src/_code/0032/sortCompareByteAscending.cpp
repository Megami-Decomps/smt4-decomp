#include "util/BinarySearch.h"

/* Orders byte keys in ascending order. */
extern "C" s32 sortCompareByteAscending(const void *left, const void *right)
{
    return *(const u8 *)left - *(const u8 *)right;
}
