#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" void titleSceneDrawEffectMenuHandler3(void);

/* Update the title scene's callback data and finish the title operation. */
extern "C" s32 titleSceneFinishCallback(void)
{
    renderCtxSelectStereoLayout(g_titleScene);
    titleSceneDrawEffectMenuHandler3();
    return 0;
}
