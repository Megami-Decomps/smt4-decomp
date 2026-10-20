#include "shard/Shard0047.h"

extern "C" {

/* Repacks a 20-bit colour-like word when both its low 12 bits and bits 12..23 are set, else returns 0. */
u32 repackWord(u32 value)
{
    if ((value & 0xFFF) != 0 && (value << 8) >> 0x14 != 0) {
        return (value << 0x14) | (((value << 8) >> 0x14) << 8) | ((value >> 0x14) & 0xF0) | (value >> 0x1C);
    }
    return 0;
}

} /* extern "C" */
