#include "title/titleMain.h"

extern "C" {

void renderCtxResetColorScale(TitleScene *scene);
void renderCtxApplyTransforms(TitleScene *scene);

extern TitleScene *g_titleScene;

void renderCtxEndPass(TitleDbgBgObj *bg)
{
    if (bg->unk04 > 2) {
        renderCtxApplyTransforms(g_titleScene);
        renderCtxResetColorScale(g_titleScene);
    }
}

} /* extern "C" */
