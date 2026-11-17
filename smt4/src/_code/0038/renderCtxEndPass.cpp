#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void renderCtxResetColorScale(RenderCtx *scene);
void renderCtxApplyTransforms(RenderCtx *scene);


void renderCtxEndPass(TitleDbgBgObj *bg)
{
    if (bg->unk04 > 2) {
        renderCtxApplyTransforms(g_titleScene);
        renderCtxResetColorScale(g_titleScene);
    }
}

} /* extern "C" */
