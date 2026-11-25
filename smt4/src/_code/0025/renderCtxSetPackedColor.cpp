/* NON_MATCHING: 12 lines; the red and green extracts use the opposite registers, and alpha is masked into r0 rather than ip. */
#include "gfx/VectorScratch.h"
#include <string.h>

/* Unpacks an RRGGBBAA word into the render context's colour scratch slot. */
extern "C" void renderCtxSetPackedColor(u32 packed)
{
    /* A little-endian copy orders the channels from alpha to red in memory. */
    u8 channels[4];
    memcpy(channels, &packed, sizeof(channels));
    const f32 scale = 1.0f / 255.0f;
    EffectColor color = {
        (f32)channels[3] * scale,
        (f32)channels[2] * scale,
        (f32)channels[1] * scale,
        (f32)channels[0] * scale,
    };
    effectColorCopy(&color, &g_vectorScratch.first.color);
}
