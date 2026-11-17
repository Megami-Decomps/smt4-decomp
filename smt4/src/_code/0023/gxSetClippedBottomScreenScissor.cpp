/* NON_MATCHING: -O2 candidate; clipping predicates fold/reorder, packed-argument moves disappear, and integer/VFP live ranges differ from retail. */
#include "camp/RenderCtxTitle.h"


static __inline void clipScissorAxis(s32 &position, s32 &extent, s32 limit)
{
    s32 end = position + extent;
    if (end < 0) {
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

void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height)
{
    clipScissorAxis(x, width, 320);
    clipScissorAxis(y, height, 240);
    s32 right = (s32)(320.0f - (f32)(x + width));
    s32 bottom = (s32)(240.0f - (f32)(y + height));
    renderStackSet(&g_titleScene->scissor, 3);
    renderStackSet(&g_titleScene->scissorMinimum, (u32)right | ((u32)bottom << 16));
    renderStackSet(&g_titleScene->scissorMaximum, (u32)width | ((u32)height << 16));
}
}
