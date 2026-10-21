#include "common.h"

extern "C" {

/* Compares record keys for sorting. */
s32 FUN_00221a6c(const s32 *left, const s32 *right)
{
    return *left - *right;
}

} /* extern "C" */
