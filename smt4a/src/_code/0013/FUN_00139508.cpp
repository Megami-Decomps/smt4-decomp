#include "common.h"

extern "C" {

extern u8 DAT_005b401c;

/* Stores `value` in the global at 0x005b401c. */
void FUN_00139508(u8 value)
{
    DAT_005b401c = value;
}

} /* extern "C" */
