#include "common.h"

extern "C" {

extern u32 DAT_00573c78;    /* random generator state */

/* Linear congruential generator step (state * 0x41C64E6D + 0x3039): returns a value in 0..limit. */
u32 lcgRandomRange(s32 limit)
{
    u32 *state = &DAT_00573c78;

    *state = *state * 0x41C64E6D + 0x3039;
    return (*state >> 0x10) * (limit + 1) >> 0x10;
}

} /* extern "C" */
