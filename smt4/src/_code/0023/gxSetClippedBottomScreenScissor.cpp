/* NON_MATCHING: 10 lines; retail shares the y = 0 assignment between the empty and negative-origin spans. */
#include "camp/RenderCtxTitle.h"
#include "gfx/ScissorCoordinates.h"


static __inline void clipScissorAxis(s32 &position, s32 &extent, s32 limit)
{
    if (position + extent < 0) {
        position = 0;
        extent = 0;
    } else if (position < 0) {
        extent += position;
        position = 0;
    }
    if (position > limit) {
        extent = position = 0;
    } else if (position + extent > limit) {
        extent = (s32)((f32)limit - (f32)position);
    }
}

extern "C" {

/* Clips the rectangle to the 320x240 bottom screen and sets it as the scissor (origin measured from the far corner). */
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height)
{
    clipScissorAxis(x, width, 320);
    clipScissorAxis(y, height, 240);
    s32 right = (s32)(320.0f - (f32)(x + width));
    s32 bottom = (s32)(240.0f - (f32)(y + height));
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
    {
        RenderCtx *scene = g_titleScene;
        u32 packed = packScissorCoordinates(right, bottom);
        renderStackSet(scene->stacks + RENDER_STACK_SCISSOR_MINIMUM, (s32)packed);
    }
    {
        RenderCtx *scene = g_titleScene;
        u32 packed = packScissorCoordinates(width, height);
        renderStackSet(scene->stacks + RENDER_STACK_SCISSOR_MAXIMUM, (s32)packed);
    }
}
}
