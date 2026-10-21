#include "common.h"

extern "C" {

/* Compares record keys for sorting. */
s32 FUN_00163050(const s32 *left, const s32 *right)
{
    return *left - *right;
}

} /* extern "C" */
