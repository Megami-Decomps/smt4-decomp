#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 slot, u32 flags);
void FUN_002c1b64(RenderCtx *context, s32 value);
void effMenuCallHandler(s32 handler, s32 value);

/* Runs effect-menu handler 3 under render state FUN_002c5d80(1, 1) pushed on the title scene's first stack. */
void FUN_002d7d84(void)
{
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 1));
    FUN_002c1b64(g_titleScene, 0);
    effMenuCallHandler(3, 1);
    renderStackPop(&g_titleScene->stackA);
}

} /* extern "C" */
