#include "title/titleMain.h"

extern "C" {

extern TitleScene *g_titleScene;
extern void FUN_002c39a4(TitleScene *scene);

/* Updates the title scene and reports success. */
s32 FUN_001036e0(void)
{
    FUN_002c39a4(g_titleScene);
    return 0;
}

} /* extern "C" */
