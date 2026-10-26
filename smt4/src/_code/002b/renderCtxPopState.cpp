#include "camp/RenderCtx.h"

// Indexed view of the complete seven-stack bank, including the named stacks in RenderCtx.
struct IndexedRenderStates {
    /* 0x0000 */ u8 unk0000[0x11ec];
    /* 0x11EC */ RenderStateStack stacks[7];
};

// Pop and return the previous render state, applying the newly exposed state if needed.
extern "C" s32 renderCtxPopState(IndexedRenderStates *context, u32 index)
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
