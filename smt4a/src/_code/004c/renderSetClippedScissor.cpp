/* NON_MATCHING: 28 lines: retail does not thread the empty-span case (start + extent < 0) past the final limit test (it branches back to that test, and for y shares the y = 0 store with the start < 0 case), and hoists the zero for the state-change flag later. */
#include "camp/RenderCtxA.h"
#include "gfx/ScissorCoordinates.h"


static __inline void clipScissorAxis(s32 &position, s32 &extent, s32 limit)
{
    if (position + extent < 0) {
        position = 0;
        extent = 0;
    } else if (position < 0) {
        extent += position;
        position = 0;
    } else if (position > limit) {
        extent = position = 0;
        return;
    }
    if (position + extent > limit) {
        extent = (s32)((f32)limit - (f32)position);
    }
}

extern "C" {

/* Clips the rectangle to the 320x240 bottom screen and sets it as the scissor (origin measured from the far corner). */
void renderSetClippedScissor(s32 x, s32 y, s32 width, s32 height)
{
    clipScissorAxis(x, width, 320);
    clipScissorAxis(y, height, 240);
    s32 right = (s32)(320.0f - (f32)(x + width));
    s32 bottom = (s32)(240.0f - (f32)(y + height));
    renderStackSet(&g_renderCtx->scissor, 3);
    {
        RenderCtxA *scene = g_renderCtx;
        u32 packed = packScissorCoordinates(right, bottom);
        renderStackSet(&scene->scissorMinimum, (s32)packed);
    }
    {
        RenderCtxA *scene = g_renderCtx;
        u32 packed = packScissorCoordinates(width, height);
        renderStackSet(&scene->scissorMaximum, (s32)packed);
    }
}
}
