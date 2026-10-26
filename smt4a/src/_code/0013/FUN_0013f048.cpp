/* NON_MATCHING: the exponent table fill (pointer walk, unrolled by two with pre-incremented stores) matches retail up to registers; retail also keeps the exponent-table base in ip and indexes it with a shifted-out exponent (lsl #1; lsr #24; ldr [ip,r5,lsl #2]) where the shared encoder inline compiles to a masked offset here. */
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" u32 DAT_0063f948[256];

/* Initializes exponent conversion and normalized-byte float24 lookup tables. */
extern "C" void FUN_0013f048(void)
{
    u32 *exponent = g_gpuFloat24ExponentTable;
    for (s32 i = 0; i < 256; ++i) {
        *exponent++ = (i - 64) * 65536;
    }
    u32 *table = DAT_0063f948;
    for (s32 i = 0; i < 256; ++i) {
        *table++ = gpuEncodeFloat24(static_cast<f32>(i) * (1.0f / 255.0f));
    }
}
