#include "common.h"

extern "C" {

/* Compares record keys for sorting. */
s32 FUN_002321f8(const s16 *left, const s16 *right)
{
    return *left - *right;
}

} /* extern "C" */
