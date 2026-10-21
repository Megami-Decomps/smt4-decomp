#include "common.h"

/* Compares byte keys in the record table. */
extern "C" s32 dataTableCompareByteKeys(const u8 *left, const u8 *right)
{
    return *left - *right;
}
