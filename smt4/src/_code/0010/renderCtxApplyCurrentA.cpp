#include "title/titleMain.h"

extern "C" {

void FUN_002c4f8c(TitleScene *scene, u32 value);
u32 FUN_002c501c(void);

extern TitleScene *g_titleScene;

u32 renderCtxApplyCurrentA(void)
{
    u32 value;

    if (FUN_002c501c() != 0) {
        value = FUN_002c501c();
        FUN_002c4f8c(g_titleScene, value);
    }
    return 0;
}

} /* extern "C" */
