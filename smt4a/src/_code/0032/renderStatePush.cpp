#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

/* Inline copy of renderStackPushIndexed: pushes on the selected stack and applies a changed state. */
static __inline void renderCtxPushIndexed(RenderCtxA *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}

extern "C" {

/* Pushes a render state on the draw context's stack B; when it changes (or the stack is dirty) the new state is applied. */
void renderStatePush(s32 state)
{
    renderCtxPushIndexed(g_renderCtx, RENDER_STACK_B, state);
}

} /* extern "C" */
