/* NON_MATCHING: the half-float conversions and the command words match retail's code; retail loads the
 * header constant 0x801f0144 at entry (the build loads it after the second conversion) and so numbers the
 * conversion registers differently (r4-r7 against r4-r6). */
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" u32 *g_commandBufferCursor;

/* Converts a float to the GPU's half float, as NintendoWare's float-to-16-bit conversion does: sign (bit 15),
 * 5-bit exponent rebiased from 127 to 15, 10-bit fraction. Values below the exponent range keep only the sign,
 * values above it saturate to infinity. */
static __inline u16 floatToGpuHalf(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 bits32 = encoding.bits;
    u32 sign = bits32 & 0x80000000;
    s32 exponent = (s32)((bits32 >> 23) & 0xff);
    u32 fraction = bits32 & 0x7fffff;
    u32 bits16 = 0;
    bits16 |= (sign != 0) ? 0x8000 : 0;
    if ((bits32 & ~0x80000000) == 0) {
        exponent = 0;
    } else {
        exponent = exponent - 127 + 15;
    }
    fraction = fraction >> 13;
    if (exponent < 0) {
        /* underflow: a signed zero */
    } else if (exponent > 0x1f) {
        bits16 = 0x1f << 10;
    } else {
        bits16 |= fraction & 0x3ff;
        bits16 |= (exponent & 0x1f) << 10;
    }
    return bits16;
}

/* Writes a three-component half-float lighting vector to light `index`'s GPU registers (0x144 + 16 * index). */
extern "C" void FUN_0015d7f0(u32 index, const f32 *vector)
{
    f32 x = vector[0];
    f32 y = vector[1];
    f32 z = vector[2];
    u32 command[4] = {
        floatToGpuHalf(x) | (floatToGpuHalf(y) << 16),
        index * 16 + 0x801f0144,
        floatToGpuHalf(z),
        0,
    };
    for (s32 i = 0; i < 4; ++i)
        g_commandBufferCursor[i] = command[i];
    g_commandBufferCursor += 4;
}
