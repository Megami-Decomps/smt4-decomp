#include "common.h"

extern "C" {

/* Compares halfword record keys. */
s32 compareU16Ascending(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
