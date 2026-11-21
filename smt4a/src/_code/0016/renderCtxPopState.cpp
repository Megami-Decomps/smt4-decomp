#include "camp/RenderCtx.h"

/* Pops the context's stack `index` (RenderStackKind) and returns the state popped, applying the newly exposed
 * state if needed. */
extern "C" s32 renderCtxPopState(RenderCtxA *context, u32 index)
{
    RenderStateStack *stack = &context->stacks[index];
    s32 previous = stack->entries[stack->count];
    --stack->count;
    s32 current = stack->entries[stack->count];
    if (stack->dirty != 0 || previous != current) {
        stack->apply(current);
        stack->dirty = 0;
    }
    return previous;
}
