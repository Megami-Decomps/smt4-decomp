#include "title/titleMain.h"

extern "C" {

void FUN_002c18e4(TitleScene *scene);
void FUN_002c198c(TitleScene *scene);

extern TitleScene *g_titleScene;

void renderCtxEndPass(TitleDbgBgObj *bg)
{
    if (bg->unk04 > 2) {
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
}

} /* extern "C" */
