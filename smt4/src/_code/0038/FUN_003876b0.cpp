#include "common.h"

/* Orders unsigned halfword keys in ascending order. */
extern "C" s32 FUN_003876b0(const u16 *left, const u16 *right)
{
    return *left - *right;
}
