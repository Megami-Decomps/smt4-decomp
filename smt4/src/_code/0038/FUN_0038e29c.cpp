#include "common.h"

/* Orders unsigned halfword keys in ascending order. */
extern "C" s32 FUN_0038e29c(const u16 *left, const u16 *right)
{
    return *left - *right;
}
