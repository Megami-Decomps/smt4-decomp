#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

extern void renderCtxSelectStereoLayout(RenderCtx *scene);

/* Updates the title scene and reports success. */
s32 FUN_00103e18(void)
{
    renderCtxSelectStereoLayout(g_titleScene);
    return 0;
}

} /* extern "C" */
