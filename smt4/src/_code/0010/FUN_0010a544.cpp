/* NON_MATCHING: Exponent writes merge into STM, while normalized-byte iteration uses an indexed store and compare rather than a countdown cursor. */
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" {
extern u32 DAT_004e31a0[256];
extern u32 DAT_004e35a0[256];
}
static __forceinline u32 encodeGpuFloat24(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 magnitude = encoding.bits & 0x7FFFFFFF;
    if (magnitude == 0) {
        return (encoding.bits >> 31) << 23;
    }
    return DAT_004e31a0[magnitude >> 23] | ((encoding.bits & 0x7FFFFF) >> 7) |
           ((encoding.bits >> 31) << 23);
}

/* Initializes exponent conversion and normalized-byte float24 lookup tables. */
extern "C" void FUN_0010a544(void)
{
    for (s32 i = 0; i < 256; ++i) {
        DAT_004e31a0[i] = (i - 64) * 65536;
    }
    for (s32 i = 0; i < 256; ++i) {
        DAT_004e35a0[i] = encodeGpuFloat24(static_cast<f32>(i) * (1.0f / 255.0f));
    }
}
