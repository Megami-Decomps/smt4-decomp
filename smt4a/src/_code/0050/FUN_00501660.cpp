/* NON_MATCHING: 159 lines: retail reads width and height with ldr and moves them into VFP for each conversion
 * (ours: vldr), so every encode gets other registers, and it writes the ten command words as post-increment
 * stmia pairs (value, header) after a 5-register push, deriving 0x70043/0xF0044/0xF0068 from the first two headers.
 * The (value, header) pairs are written as asdGxSetViewport writes them (177 lines with `*cursor++`). */
#include "gfx/ViewportEncoding.h"
#include "gfx/GxRenderArea.h"


/* Writes the viewport packet and returns the cursor after the packet. */
extern "C" u32 *FUN_00501660(const GxViewportState *viewport, u32 *cursor)
{
    u32 halfWidth = gpuViewportEncode<16>((f32)viewport->width * 0.5f);
    u32 inverseWidth = gpuViewportEncodeInverse(2.0f / (f32)viewport->width) << 1;
    u32 halfHeight = gpuViewportEncode<16>((f32)viewport->height * 0.5f);
    u32 inverseHeight = gpuViewportEncodeInverse(2.0f / (f32)viewport->height) << 1;
    cursor[0] = halfWidth;
    cursor[1] = GPU_VIEWPORT_CMD_HALF_WIDTH;
    cursor += 2;
    cursor[0] = inverseWidth;
    cursor[1] = GPU_VIEWPORT_CMD_INVERSE_WIDTH;
    cursor += 2;
    cursor[0] = halfHeight;
    cursor[1] = GPU_VIEWPORT_CMD_HALF_HEIGHT;
    cursor += 2;
    cursor[0] = inverseHeight;
    cursor[1] = GPU_VIEWPORT_CMD_INVERSE_HEIGHT;
    cursor += 2;
    cursor[0] = viewport->x | (viewport->y << 16);
    cursor[1] = GPU_VIEWPORT_CMD_ORIGIN;
    cursor += 2;
    return cursor;
}
