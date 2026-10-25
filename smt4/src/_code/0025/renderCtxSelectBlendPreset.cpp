#include "camp/RenderCtx.h"

static __inline void renderCtxSetBlend(RenderCtx *context, s32 state)
{
    renderStackSet(&context->stackB, state);
}

extern "C" {
extern RenderCtx *g_titleScene;
u32 packNibblesAndByte(s32, s32, u32);

/* Select the packed blend-state preset for the requested draw mode. */
void renderCtxSelectBlendPreset(u32 mode)
{
    RenderCtx *context = g_titleScene;
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
