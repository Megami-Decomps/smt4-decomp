#include "title/titleMain.h"

extern "C" {

extern TitleScene *g_titleScene;
extern void renderCtxSelectStereoLayout(TitleScene *scene);

/* Updates the title scene and reports success. */
s32 FUN_00103e18(void)
{
    renderCtxSelectStereoLayout(g_titleScene);
    return 0;
}

} /* extern "C" */
