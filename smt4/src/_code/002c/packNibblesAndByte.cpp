#include "common.h"
#include "shard/packNibblesAndByte.h"

extern "C" {

/* Packs two nibbles (a, b) into the high bytes twice and the low byte `c` into the low half. */
u32 packNibblesAndByte(int a, int b, u32 c)
{
    return c | (c << 8) | (a << 0x10) | (b << 0x14) | (a << 0x18) | (b << 0x1c);
}

} /* extern "C" */
