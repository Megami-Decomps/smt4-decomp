/* NON_MATCHING: only mode 2 swaps the old-state and current-slot address registers. */
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"

static __inline void renderCtxSetBlend(RenderCtxA *context, s32 state)
{
    renderStackSet(&context->stackB, state);
}

extern "C" {
extern RenderCtxA *g_renderCtx;

/* Select the packed blend-state preset for the requested draw mode. */
void FUN_002ff8e8(u32 mode)
{
    RenderCtxA *context = g_renderCtx;
    switch (mode) {
    case 0:
    case 1:
        renderCtxSetBlend(context, packNibblesAndByte(6, 7, 0));
        break;
    case 2:
        renderCtxSetBlend(context, packNibblesAndByte(6, 1, 0));
        break;
    case 3:
    case 4:
        renderCtxSetBlend(context, packNibblesAndByte(6, 1, 2));
        break;
    case 5:
    case 6:
        renderCtxSetBlend(context, packNibblesAndByte(5, 0, 1));
        break;
    }
}
}
