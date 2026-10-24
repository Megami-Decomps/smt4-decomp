/* A render-state stack: a value stack with a change callback that runs when the
 * value on top differs from the one below (or the dirty flag is set). */
#ifndef GFX_TITLESCENESTACK_H
#define GFX_TITLESCENESTACK_H

#include "common.h"

struct StateStack {
    /* 0x00 */ s32 top;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 slots[4];
    /* 0x18 */ u8 dirty;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void (*onChange)(void);
};

typedef char StateStackSizeCheck[sizeof(StateStack) == 0x20 ? 1 : -1];

/* Pushes a value: the callback runs when it differs from the previous top or the stack is dirty. */
static inline void stateStackPush(StateStack *stack, s32 value)
{
    s32 depth = stack->top;
    s32 previous = stack->slots[depth];
    s32 next = depth + 1;
    stack->top = next;
    stack->slots[next] = value;
    if (stack->dirty || previous != value) {
        stack->onChange();
        stack->dirty = 0;
    }
}

/* Pops the top value: the callback runs when the value restored differs from the one popped. */
static inline void stateStackPop(StateStack *stack)
{
    s32 depth = stack->top;
    s32 popped = stack->slots[depth];
    s32 next = depth - 1;
    stack->top = next;
    s32 restored = stack->slots[next];
    if (stack->dirty || popped != restored) {
        stack->onChange();
        stack->dirty = 0;
    }
}

/* Replaces the top value without pushing: the callback runs when it differs from the old top. */
static inline void stateStackReplaceTop(StateStack *stack, s32 value)
{
    s32 previous = stack->slots[stack->top];
    stack->slots[stack->top] = value;
    if (stack->dirty || previous != value) {
        stack->onChange();
        stack->dirty = 0;
    }
}

#endif
