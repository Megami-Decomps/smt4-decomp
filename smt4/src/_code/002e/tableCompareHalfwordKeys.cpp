#include "common.h"

/* Compares halfword keys. */
extern "C" s32 tableCompareHalfwordKeys(const u16 *left, const u16 *right)
{
    return *left - *right;
}
