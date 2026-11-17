#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void efctSetSpeed(f32 speed);
u32 renderCtxPackPassFlags(u32 mode, u32 option);
void renderCtxResetColorScale(RenderCtxA *context);
void FUN_0040307c(void *work);

// Draw the content list after initialization, restoring speed, blend and color state.
u32 contentListDraw(void *work)
{
    struct ContentListRenderView {
        u32 unk00;
        u8 state;
    };
    ContentListRenderView *view = static_cast<ContentListRenderView *>(work);
    if (view->state == 0 || view->state == 1)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    FUN_0040307c(work);
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    context = g_renderCtx;
    renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
