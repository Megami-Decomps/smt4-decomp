#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void renderCtxSelectStereoLayout(RenderCtx *context);
void gxResetColorQuadToWhite(void);
void debugItemListDraw(void *work);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws `work` through debugItemListDraw under render state renderCtxPackPassFlags(1, 0) on the title scene's first stack. */
void FUN_00384ad8(void *work)
{
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxSelectTexture(g_titleScene, 0);
    debugItemListDraw(work);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

} /* extern "C" */
