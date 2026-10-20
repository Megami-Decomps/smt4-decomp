#include "common.h"

extern "C" {

extern u32 DAT_005894d0;

/* Stores `value` in the global at 0x005894d0. */
void FUN_00158e6c(u32 value)
{
    DAT_005894d0 = value;
}

} /* extern "C" */
