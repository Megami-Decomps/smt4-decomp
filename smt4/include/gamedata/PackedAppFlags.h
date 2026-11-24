#pragma once
#include "common.h"

extern "C" u8 *gameDataGetFlagBits(void);

/* The saved application flags are packed eight to a byte. */
static __inline u8 flagBitIsSetInline(u32 bit)
{
    const u8 *bits = gameDataGetFlagBits();
    u32 byteIndex = bit >> 3;
    u32 shift = bit & 7;
    u32 mask = 1u << shift;
    u32 value = bits[byteIndex];
    return (mask & value) != 0;
}
