#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code0030.h"

extern "C" {

u32 renderCtxPackPassFlags(u32 slot, u32 flags);

/* Runs effect-menu handler 3 under render state renderCtxPackPassFlags(1, 1) pushed on the title scene's first stack. */
void FUN_002d7d84(void)
{
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_titleScene, 0);
    effMenuCallHandler(3, 1);
    renderStackPop(&g_titleScene->stackA);
}

} /* extern "C" */
