#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void renderCtxSelectStereoLayout(RenderCtx *);
s32 renderCtxPackPassFlags(u32, u32);
void renderCtxResetColorScale(RenderCtx *);
}

/* Apply and restore the temporary title render state before finalizing the context. */
extern "C" u32 FUN_0018b2a4(void)
{
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderStackPop(&g_titleScene->stackA);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
