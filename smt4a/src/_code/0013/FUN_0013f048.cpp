/* NON_MATCHING: Exponent writes merge into STM; the shared encoder uses masked indexing and the normalized loop uses an indexed store. */
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" u32 DAT_0063f948[256];

/* Initializes exponent conversion and normalized-byte float24 lookup tables. */
extern "C" void FUN_0013f048(void)
{
    for (s32 i = 0; i < 256; ++i) {
        g_gpuFloat24ExponentTable[i] = (i - 64) * 65536;
    }
    for (s32 i = 0; i < 256; ++i) {
        DAT_0063f948[i] = gpuEncodeFloat24(static_cast<f32>(i) * (1.0f / 255.0f));
    }
}
