#include "common.h"

// Compare the second word of each two-word sort record.
extern "C" s32 recordCompareSecondWord(const u32 *left, const u32 *right)
{
    return left[1] - right[1];
}
