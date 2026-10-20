#include "common.h"

extern "C" {

/* Packs two nibble values and a byte into one word: the byte goes in bits 0-7 and 8-15, `a` in bits 16-19 and 24-27, `b` in bits 20-23 and 28-31. */
u32 packNibblesAndByte(s32 a, s32 b, u32 byte)
{
    return byte | (byte << 8) | (a << 0x10) | (b << 0x14) | (a << 0x18) | (b << 0x1C);
}

} /* extern "C" */
