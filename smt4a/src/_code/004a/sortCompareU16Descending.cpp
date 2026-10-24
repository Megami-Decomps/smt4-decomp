#include "common.h"

/* Descending comparison of two halfwords. */
extern "C" s32 sortCompareU16Descending(const u16 *a, const u16 *b)
{
    return *b - *a;
}
