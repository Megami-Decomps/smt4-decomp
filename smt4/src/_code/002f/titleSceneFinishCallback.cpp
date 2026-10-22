#include "title/titleMain.h"

extern "C" TitleScene *g_titleScene;
extern "C" void FUN_002c39a4(void *data);
extern "C" void FUN_002d7d84(void);

/* Update the title scene's callback data and finish the title operation. */
extern "C" s32 titleSceneFinishCallback(void)
{
    FUN_002c39a4(g_titleScene);
    FUN_002d7d84();
    return 0;
}
