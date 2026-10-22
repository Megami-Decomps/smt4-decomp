#include "title/titleMain.h"

extern "C" {

void effectRestoreSavedRenderPairs(TitleScene *scene, u32 value);
u32 FUN_002c501c(void);

extern TitleScene *g_titleScene;

u32 renderCtxApplyCurrentA(void)
{
    u32 value;

    if (FUN_002c501c() != 0) {
        value = FUN_002c501c();
        effectRestoreSavedRenderPairs(g_titleScene, value);
    }
    return 0;
}

} /* extern "C" */
