#include "common.h"

extern "C" {

/* Packs four nibbles (a-d) into bits 16-31 and `e`, `f` into the low half. */
u32 FUN_00310550(int a, int b, int c, int d, u32 e, int f)
{
    return e | (f << 8) | (a << 0x10) | (b << 0x14) | (c << 0x18) | (d << 0x1c);
}

} /* extern "C" */
