/* NON_MATCHING: -O2 candidate; clipping predicates fold/reorder, packed-argument moves disappear, and integer/VFP live ranges differ from retail. */
#include "camp/RenderCtx.h"

struct ScissorRenderContext {
    u8 unk0000[0x130c];
    RenderStateStack mode;
    RenderStateStack origin;
    RenderStateStack extent;
};

static __inline void clipScissorAxis(s32 &position, s32 &extent, s32 limit)
{
    if (position + extent < 0) {
        position = extent = 0;
    } else if (position < 0) {
        extent += position;
        position = 0;
    } else if (position > limit) {
        position = extent = 0;
        return;
    }
    if (position + extent > limit) {
        extent = (s32)((f32)limit - (f32)position);
    }
}

extern "C" {
extern ScissorRenderContext *g_titleScene;

void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height)
{
    clipScissorAxis(x, width, 320);
    clipScissorAxis(y, height, 240);
    s32 right = (s32)(320.0f - (f32)(x + width));
    s32 bottom = (s32)(240.0f - (f32)(y + height));
    renderStackSet(&g_titleScene->mode, 3);
    renderStackSet(&g_titleScene->origin, (u32)right | ((u32)bottom << 16));
    renderStackSet(&g_titleScene->extent, (u32)width | ((u32)height << 16));
}
}
