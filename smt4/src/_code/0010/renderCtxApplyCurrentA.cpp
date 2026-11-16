#include "title/titleMain.h"

extern "C" {

void effectRestoreSavedRenderPairs(TitleScene *scene, u32 value);
u32 asdCameraGetSavedRenderPairs(void);

extern TitleScene *g_titleScene;

u32 renderCtxApplyCurrentA(void)
{
    u32 value;

    if (asdCameraGetSavedRenderPairs() != 0) {
        value = asdCameraGetSavedRenderPairs();
        effectRestoreSavedRenderPairs(g_titleScene, value);
    }
    return 0;
}

} /* extern "C" */
