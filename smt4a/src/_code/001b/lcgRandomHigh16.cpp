#include "common.h"

extern "C" {

extern u32 g_lcgRandomState;   /* random generator state */

/* Linear congruential generator step (state * 0x19660D + 0x3C6EF35F): returns the high 16 bits. */
u32 lcgRandomHigh16(void)
{
    g_lcgRandomState = g_lcgRandomState * 0x19660D + 0x3C6EF35F;
    return g_lcgRandomState >> 0x10;
}

} /* extern "C" */
