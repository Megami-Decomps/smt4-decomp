/* NON_MATCHING: in the push, retail reuses r3 for the new top's address after loading the old top; armcc computes it into ip beforehand. */
#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
u32 FUN_002c5d80(u32 slot, u32 flags);
void FUN_002c1b64(RenderCtx *context, s32 value);
void FUN_00383f70(void *work);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws `work` through FUN_00383f70 under render state FUN_002c5d80(1, 0) on the title scene's first stack. */
void FUN_00384ad8(void *work)
{
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    FUN_002c1b64(g_titleScene, 0);
    FUN_00383f70(work);
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}

} /* extern "C" */
