#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
void titleSceneDrawEffectMenuHandler3(void);

s32 FUN_00388a20(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    titleSceneDrawEffectMenuHandler3();
    return 0;
}

} /* extern "C" */
