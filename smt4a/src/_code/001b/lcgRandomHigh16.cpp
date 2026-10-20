#include "common.h"

extern "C" {

extern u32 DAT_005c1d38;   /* random generator state */

/* Linear congruential generator step (state * 0x19660D + 0x3C6EF35F): returns the high 16 bits. */
u32 lcgRandomHigh16(void)
{
    DAT_005c1d38 = DAT_005c1d38 * 0x19660D + 0x3C6EF35F;
    return DAT_005c1d38 >> 0x10;
}

} /* extern "C" */
