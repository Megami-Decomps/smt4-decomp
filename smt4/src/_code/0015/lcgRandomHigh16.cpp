#include "common.h"

extern "C" {

extern u32 DAT_00473548;

/* Linear congruential generator (a = 0x19660d, c = 0x3c6ef35f); returns the top 16 bits of the new state. */
u32 lcgRandomHigh16(void)
{
    DAT_00473548 = DAT_00473548 * 0x19660d + 0x3c6ef35f;
    return DAT_00473548 >> 0x10;
}

} /* extern "C" */
