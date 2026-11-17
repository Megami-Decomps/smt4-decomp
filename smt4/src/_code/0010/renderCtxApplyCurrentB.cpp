#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void effectRestoreSavedRenderPairs(RenderCtx *scene, u32 value);
u32 asdCameraGetSavedRenderPairs(void);


u32 renderCtxApplyCurrentB(void)
{
    u32 value;

    if (asdCameraGetSavedRenderPairs() != 0) {
        value = asdCameraGetSavedRenderPairs();
        effectRestoreSavedRenderPairs(g_titleScene, value);
    }
    return 0;
}

} /* extern "C" */
