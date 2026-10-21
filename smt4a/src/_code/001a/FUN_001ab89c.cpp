#include "common.h"

extern "C" {

/* Compares record keys for sorting. */
s32 FUN_001ab89c(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
