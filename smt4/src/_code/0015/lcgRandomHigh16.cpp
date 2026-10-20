#include "common.h"

extern "C" {

extern u32 g_lcgRandomState;

/* Linear congruential generator (a = 0x19660d, c = 0x3c6ef35f); returns the top 16 bits of the new state. */
u32 lcgRandomHigh16(void)
{
    g_lcgRandomState = g_lcgRandomState * 0x19660d + 0x3c6ef35f;
    return g_lcgRandomState >> 0x10;
}

} /* extern "C" */
