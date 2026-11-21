#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

/* Pops the scissor stacks (on/off, maximum, minimum). */
extern "C" u32 renderPopStateStacks(void)
{
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_SCISSOR);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_SCISSOR_MAXIMUM);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_SCISSOR_MINIMUM);
    return 1;
}
