#include "common.h"

extern "C" {

/* Compares word record keys. */
s32 FUN_001e16bc(const s32 *left, const s32 *right)
{
    return *left - *right;
}

} /* extern "C" */
