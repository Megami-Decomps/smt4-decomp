/* NON_MATCHING: viewport packing and saved-register allocation differ. */
#include "camp/RenderCtx.h"

extern "C" {
// Convert top-left viewport bounds into the renderer's mirrored coordinate system.
void FUN_0035ae58(s32 x, s32 y, s32 width, s32 height, s32 bottomScreen)
{
    // Both viewport stacks lie beyond the shared draw-context view.
    struct ViewportContextView {
        u8 unk0000[0x1338];
        RenderStateStack origin;
        RenderStateStack size;
    };
    extern ViewportContextView *g_renderCtx;
    s32 screenWidth = bottomScreen ? 320 : 400;
    x = screenWidth - (x + width);
    y = (240 - height) - y;
    if (x < 0) {
        width += x;
        if (width < 0) width = 0;
        x = 0;
    }
    if (y < 0) {
        height += y;
        if (height < 0) height = 0;
        y = 0;
    }
    renderStackSet(&g_renderCtx->origin, static_cast<u32>(x) | (static_cast<u32>(y) << 16));
    renderStackSet(&g_renderCtx->size, static_cast<u32>(width) | (static_cast<u32>(height) << 16));
}
}
