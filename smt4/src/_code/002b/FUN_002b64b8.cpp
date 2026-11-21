#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* Pops the scissor stacks (on/off, maximum, minimum). */
extern "C" u32 FUN_002b64b8(void)
{
    renderStackPop(g_titleScene->stacks + RENDER_STACK_SCISSOR);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_SCISSOR_MAXIMUM);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_SCISSOR_MINIMUM);
    return 1;
}
