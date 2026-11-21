#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* Inline copy of renderStackPushIndexed: pushes on the selected stack and applies a changed state. */
static __inline void renderCtxPushIndexed(RenderCtx *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}

extern "C" {

/* Pushes a render state on the title scene's stack B; when it changes (or the stack is dirty) the new state is applied. */
void renderStatePush(s32 value)
{
    renderCtxPushIndexed(g_titleScene, RENDER_STACK_B, value);
}

} /* extern "C" */
