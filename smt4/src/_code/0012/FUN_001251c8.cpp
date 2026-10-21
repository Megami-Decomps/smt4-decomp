#include "common.h"

extern "C" {

/* Compares halfword keys for the record lookup. */
s32 FUN_001251c8(const u16 *left, const u16 *right)
{
    return *left - *right;
}

} /* extern "C" */
