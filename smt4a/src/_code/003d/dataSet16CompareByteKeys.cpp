#include "common.h"

// Compare the leading byte keys of two records.
extern "C" s32 dataSet16CompareByteKeys(const u8 *left, const u8 *right)
{
    return *left - *right;
}
