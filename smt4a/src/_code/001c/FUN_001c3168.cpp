#include "common.h"

extern "C" {

extern u16 DAT_00646e54[];

/* Stores `value` in 16-bit entry `index` of the table at 0x646E54. */
void FUN_001c3168(s32 index, u16 value)
{
    DAT_00646e54[index] = value;
}

} /* extern "C" */
