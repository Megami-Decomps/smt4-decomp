/* NON_MATCHING: shared renderStackPush emits different count/previous-state registers and load scheduling. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;

void FUN_0032cef8(s32 state)
{
    renderStackPush(&g_renderCtx->stackB, state);
}
}
