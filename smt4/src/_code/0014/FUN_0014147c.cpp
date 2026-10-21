#include "common.h"

extern "C" {

/* Compares halfword record keys. */
s32 FUN_0014147c(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
