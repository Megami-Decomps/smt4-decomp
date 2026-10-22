/* NON_MATCHING: two stack-index address calculations are scheduled in the opposite order. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *);
s32 FUN_002c5d80(u32, u32);
void FUN_002c198c(RenderCtx *);
void FUN_002c18e4(RenderCtx *);
}

/* Apply and restore the temporary title render state before finalizing the context. */
extern "C" u32 FUN_0018b2a4(void)
{
    FUN_002c39a4(g_titleScene);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}
