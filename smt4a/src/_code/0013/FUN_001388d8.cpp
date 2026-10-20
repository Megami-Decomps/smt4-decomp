#include "common.h"

extern "C" {

extern u32 DAT_00573c78;

/* Stores `value` in the global at 0x00573c78. */
void FUN_001388d8(u32 value)
{
    DAT_00573c78 = value;
}

} /* extern "C" */
