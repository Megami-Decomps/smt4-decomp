/* NON_MATCHING: -O2 candidate; clipping branches fold, coordinate packing merges, and zero/origin register roles differ. */
#include "camp/RenderCtx.h"

struct ScissorRenderContext {
    u8 unk0000[0x1318];
    RenderStateStack mode;
    RenderStateStack origin;
    RenderStateStack size;
};

extern "C" ScissorRenderContext* g_renderCtx;

namespace {
inline void clipScissorAxis(s32& start, s32& extent, s32 maximum)
{
    if (start + extent < 0) {
        start = extent = 0;
    } else if (start < 0) {
        extent += start;
        start = 0;
    } else if (start > maximum) {
        start = extent = 0;
        return;
    }
    if (start + extent > maximum) {
        extent = static_cast<s32>(static_cast<f32>(maximum) - static_cast<f32>(start));
    }
}
}

extern "C" void renderSetClippedScissor(s32 x, s32 y, s32 width, s32 height)
{
    clipScissorAxis(x, width, 320);
    clipScissorAxis(y, height, 240);

    const f32 right = static_cast<f32>(x + width);
    const f32 bottom = static_cast<f32>(y + height);
    const s32 originX = static_cast<s32>(320.0f - right);
    const s32 originY = static_cast<s32>(240.0f - bottom);
    renderStackSet(&g_renderCtx->mode, 3);
    renderStackSet(&g_renderCtx->origin,
                   static_cast<s32>(static_cast<u32>(originX) |
                                    (static_cast<u32>(originY) << 16)));
    renderStackSet(&g_renderCtx->size,
                   static_cast<s32>(static_cast<u32>(width) |
                                    (static_cast<u32>(height) << 16)));
}
