/* NON_MATCHING: the context pointer is loaded into r4 rather than retail's r1 before the stack offset is added. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;

void FUN_0032cef8(s32 state)
{
    renderCtxPushB(g_renderCtx, state);
}
}
