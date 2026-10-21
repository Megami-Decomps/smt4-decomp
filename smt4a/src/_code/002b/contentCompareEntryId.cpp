#include "common.h"

/* Orders records by their leading 16-bit key. */
extern "C" s32 contentCompareEntryId(const u16 *left, const u16 *right)
{
    return *left - *right;
}
