#ifndef GFX_PACKEDCOLORBYTES_H
#define GFX_PACKEDCOLORBYTES_H

#include "common.h"

/* One vertex colour as stored in a vertex buffer: red first in memory. */
struct PackedColorBytes {
    u8 red;
    u8 green;
    u8 blue;
    u8 alpha;
};

/* Byte-reverses a 32-bit word. */
static __inline u32 packedColorSwap32(u32 value)
{
    return (value >> 24) | ((value >> 8) & 0xFF00) | ((value << 8) & 0xFF0000) | (value << 24);
}

/* Stores a packed colour word (alpha in the top byte, red in the lowest) into a vertex colour, byte by byte. */
static __inline void packedColorBytesSet(PackedColorBytes *bytes, u32 packed)
{
    bytes->red = packedColorSwap32(packed) >> 24;
    bytes->green = packedColorSwap32(packed) >> 16;
    bytes->blue = packedColorSwap32(packed) >> 8;
    bytes->alpha = packedColorSwap32(packed);
}

typedef char PackedColorBytesSizeCheck[sizeof(PackedColorBytes) == 4 ? 1 : -1];

#endif
