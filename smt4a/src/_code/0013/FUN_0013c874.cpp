#include "common.h"

extern "C" {

extern u8 DAT_00588fac;

/* Stores `value` in the global at 0x00588fac. */
void FUN_0013c874(u8 value)
{
    DAT_00588fac = value;
}

} /* extern "C" */
