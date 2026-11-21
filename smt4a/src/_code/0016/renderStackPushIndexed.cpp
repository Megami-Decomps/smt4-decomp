#include "camp/RenderCtx.h"

extern "C" {
/* Pushes a value onto the context's stack `index` (RenderStackKind) and applies a changed state. */
void renderStackPushIndexed(RenderCtxA *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}
}
