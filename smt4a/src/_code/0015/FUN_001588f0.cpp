#include "common.h"

extern "C" {

extern u32 DAT_005c0a9c;

/* Stores `value` in the global at 0x005c0a9c. */
void FUN_001588f0(u32 value)
{
    DAT_005c0a9c = value;
}

} /* extern "C" */
