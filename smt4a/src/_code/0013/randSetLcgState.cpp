#include "common.h"

extern "C" {

extern u32 g_lcgRandomRangeState;

/* Stores `value` in the global at 0x00573c78. */
void randSetLcgState(u32 value)
{
    g_lcgRandomRangeState = value;
}

} /* extern "C" */
