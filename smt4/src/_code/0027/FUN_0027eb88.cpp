#include "common.h"

extern "C" {

/* Fills 8 bytes at dst with the low byte of `value`. */
void FUN_0027eb88(u32 *dst, u32 value)
{
    u32 fill = (value & 0xff) | ((value & 0xff) << 8);

    fill = fill | (fill << 0x10);
    dst[0] = fill;
    dst[1] = fill;
}

} /* extern "C" */
