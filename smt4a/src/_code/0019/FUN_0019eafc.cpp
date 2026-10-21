#include "common.h"


extern "C" {
/* Reads or updates the current object state. */
void FUN_0017d920(u32 parameter, u32 *value);
u32 FUN_0019eafc(void)
{
    u32 cursor;
    FUN_0017d920(0x208, &cursor);
    return cursor;
}
}
