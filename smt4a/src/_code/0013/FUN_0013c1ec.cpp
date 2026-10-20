#include "common.h"

extern "C" {

extern u8 DAT_00588fb4;

/* Stores `value` in the global at 0x00588fb4. */
void FUN_0013c1ec(u8 value)
{
    DAT_00588fb4 = value;
}

} /* extern "C" */
