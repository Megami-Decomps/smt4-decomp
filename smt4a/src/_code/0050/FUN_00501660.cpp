/* NON_MATCHING: 177 lines: retail reads width and height with ldr and moves them into VFP for each conversion
 * (ours: vldr), so every encode gets other registers, and it writes the ten command words as post-increment
 * stmia pairs (value, header) after a 5-register push, deriving 0x70043/0xF0044/0xF0068 from the first two headers.
 * Indexed stores (cursor[0..9]) score 166 but asdGxSetViewport, the same command block, shows the ++ form. */
#include "gfx/ViewportEncoding.h"
#include "gfx/GxRenderArea.h"


extern "C" u32* FUN_00501660(const GxViewportState* viewport, u32* cursor)
{
    u32 halfWidth = gpuViewportEncode<16>(static_cast<f32>(viewport->width) * 0.5f);
    u32 inverseWidth = gpuViewportEncodeInverse(2.0f / static_cast<f32>(viewport->width)) << 1;
    u32 halfHeight = gpuViewportEncode<16>(static_cast<f32>(viewport->height) * 0.5f);
    u32 inverseHeight = gpuViewportEncodeInverse(2.0f / static_cast<f32>(viewport->height)) << 1;
    *cursor++ = halfWidth;
    *cursor++ = 0x70041;
    *cursor++ = inverseWidth;
    *cursor++ = 0xF0042;
    *cursor++ = halfHeight;
    *cursor++ = 0x70043;
    *cursor++ = inverseHeight;
    *cursor++ = 0xF0044;
    *cursor++ = viewport->x | (viewport->y << 16);
    *cursor++ = 0xF0068;
    return cursor;
}
