/* NON_MATCHING: instruction selection/order differs: retail mov r2, #65280; compiler and r0, r0, #255. */
#include "common.h"

extern "C" {

/* Packs the low bytes into a big-endian halfword. */
u32 FUN_0017fa28(u32 high, u32 low)
{
    return ((high & 0xFF) << 8) | (low & 0xFF);
}

} /* extern "C" */
