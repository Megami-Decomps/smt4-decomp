#include "common.h"

/* Orders records by their leading 16-bit key. */
extern "C" s32 arrayCompareSignedHalfword(const s16 *left, const s16 *right)
{
    return *left - *right;
}
