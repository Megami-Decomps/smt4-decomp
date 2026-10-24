/* The depth-range object whose GPU command block (depth scale and offset, float24) FUN_003dfaf0 writes. */
#ifndef GFX_GPUDEPTHRANGE_H
#define GFX_GPUDEPTHRANGE_H

#include "common.h"
#include <stddef.h>

struct GpuDepthRange {
    /* 0x00 */ f32 mode;          /* 0: the scale is derived from the near and far values */
    /* 0x04 */ u8 quantized;      /* the offset is quantized to `bits` bits */
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ f32 scale;
    /* 0x0C */ f32 farValue;
    /* 0x10 */ f32 nearValue;
    /* 0x14 */ u8 bits;           /* depth buffer width: 16 or 24 */
};

typedef char GpuDepthRangeLayoutCheck[offsetof(GpuDepthRange, farValue) == 0xC &&
    offsetof(GpuDepthRange, bits) == 0x14 ? 1 : -1];

/* Float24 (sign, 7-bit exponent, 16-bit fraction) of `value`: exponents below the range flush to a signed zero. */
static __inline u32 gpuEncodeFloat24Flush(f32 value)
{
    union { f32 value; u32 bits; } encoding;
    encoding.value = value;
    u32 bits = encoding.bits;
    s32 exponent = 0;
    if ((bits & 0x7FFFFFFF) != 0) {
        exponent = ((bits >> 23) & 0xFF) - 0x40;
        if (exponent < 0)
            return (bits >> 31) << 23;
    }
    return ((bits & 0x7FFFFF) >> 7) | (exponent << 16) | ((bits >> 31) << 23);
}

#endif
