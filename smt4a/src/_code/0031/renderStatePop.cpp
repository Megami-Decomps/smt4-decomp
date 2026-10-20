#include "common.h"

extern "C" {

typedef struct StateStack {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 values[4];      /* values[count] is the current top */
    /* 0x18 */ u8 dirty;           /* set while the state must be reapplied */
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void (*apply)(s32 value);
} StateStack;

typedef struct RenderCtx {
    /* 0x0000 */ u8 unk0000[0x12B8];
    /* 0x12B8 */ StateStack stack;
} RenderCtx;

extern RenderCtx *g_renderCtx;

static __inline void stateStackPop(StateStack *stack)
{
    s32 count = stack->count;
    s32 previous = stack->values[count];
    s32 next = count - 1;
    s32 top;

    stack->count = next;
    top = stack->values[next];
    if (stack->dirty != 0 || previous != top) {
        stack->apply(top);
        stack->dirty = 0;
    }
}

/* Pops a render state; when the state below differs (or the stack is dirty) it is applied. */
void renderStatePop(void)
{
    stateStackPop(&g_renderCtx->stack);
}

} /* extern "C" */
