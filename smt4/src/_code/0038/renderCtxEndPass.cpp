#include "title/titleMain.h"

extern "C" {

void FUN_002c18e4(TitleScene *scene);
void renderCtxApplyTransforms(TitleScene *scene);

extern TitleScene *g_titleScene;

void renderCtxEndPass(TitleDbgBgObj *bg)
{
    if (bg->unk04 > 2) {
        renderCtxApplyTransforms(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
}

} /* extern "C" */
