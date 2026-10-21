#include "common.h"

extern "C" {

/* Compares word keys for the record lookup. */
s32 FUN_00124bc8(const s32 *left, const s32 *right)
{
    return *left - *right;
}

} /* extern "C" */
