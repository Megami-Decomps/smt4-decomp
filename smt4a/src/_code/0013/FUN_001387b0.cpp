#include "common.h"

extern "C" {

extern u32 DAT_005b40a0;

/* Stores `value` in the global at 0x005b40a0. */
void FUN_001387b0(u32 value)
{
    DAT_005b40a0 = value;
}

} /* extern "C" */
