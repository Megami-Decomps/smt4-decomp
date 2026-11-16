#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtx *g_titleScene;
void renderCtxSelectStereoLayout(RenderCtx *context);
void gxResetColorQuadToWhite(void);
u32 renderCtxPackPassFlags(u32 slot, u32 flags);
void FUN_00383f70(void *work);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws `work` through FUN_00383f70 under render state renderCtxPackPassFlags(1, 0) on the title scene's first stack. */
void FUN_00384ad8(void *work)
{
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxSelectTexture(g_titleScene, 0);
    FUN_00383f70(work);
    renderStackPop(&g_titleScene->stackA);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

} /* extern "C" */
