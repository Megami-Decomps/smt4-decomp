#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"

static __inline void renderCtxSetBlend(RenderCtxA *context, s32 state)
{
    renderStackSet(context->stacks + RENDER_STACK_B, state);
}

extern "C" {
/* Select the packed blend-state preset for the requested draw mode. */
void renderCtxSelectBlendPreset(u32 mode)
{
    switch (mode) {
    case 0:
    case 1:
        renderCtxSetBlend(g_renderCtx, packNibblesAndByte(6, 7, 0));
        break;
    case 2:
        renderCtxSetBlend(g_renderCtx, packNibblesAndByte(6, 1, 0));
        break;
    case 3:
    case 4:
        renderCtxSetBlend(g_renderCtx, packNibblesAndByte(6, 1, 2));
        break;
    case 5:
    case 6:
        renderCtxSetBlend(g_renderCtx, packNibblesAndByte(5, 0, 1));
        break;
    }
}
}
