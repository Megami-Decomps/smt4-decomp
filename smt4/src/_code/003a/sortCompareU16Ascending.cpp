#include "common.h"

/* Compares two halfwords: returns the first minus the second. */
extern "C" s32 sortCompareU16Ascending(const u16 *a, const u16 *b)
{
    return *a - *b;
}
