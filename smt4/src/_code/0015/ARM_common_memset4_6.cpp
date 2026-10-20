#include "common.h"

extern "C" {

/* Fills 6 bytes at dst with the low byte of `value` (a word store, then a halfword store). */
void ARM_common_memset4_6(u32 *dst, u32 value)
{
    u32 fill = (value & 0xff) | ((value & 0xff) << 8);

    fill = fill | (fill << 0x10);
    *dst = fill;
    *(u16 *)(dst + 1) = (u16)fill;
}

} /* extern "C" */
