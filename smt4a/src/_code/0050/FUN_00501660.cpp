/* NON_MATCHING: float-encoding zero branches, dimension loads and packed command-store grouping differ. */
#include "gfx/ViewportEncoding.h"
#include "gfx/RenderPassQueue.h"

// The published byte-only viewport state must retain byte alignment for its owners.
struct ViewportObjectView { u32 x, y, width, height; };

extern "C" u32* FUN_00501660(const RenderPassViewportState* state, u32* cursor)
{
    const ViewportObjectView* viewport = reinterpret_cast<const ViewportObjectView*>(state);
    u32 halfWidth = gpuViewportEncode<16>(static_cast<f32>(viewport->width) * 0.5f);
    u32 inverseWidth = gpuViewportEncode<23>(2.0f / static_cast<f32>(viewport->width)) << 1;
    u32 halfHeight = gpuViewportEncode<16>(static_cast<f32>(viewport->height) * 0.5f);
    u32 inverseHeight = gpuViewportEncode<23>(2.0f / static_cast<f32>(viewport->height)) << 1;
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
