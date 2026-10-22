#include "common.h"

/* Sort unsigned halfword keys in descending order. */
extern "C" s32 compareHalfwordsDescending(const u16 *left, const u16 *right)
{
    return *right - *left;
}
