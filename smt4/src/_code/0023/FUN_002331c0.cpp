/* NON_MATCHING: instruction scheduling/register choice: retail keeps the scene pointer in r0 apart from the stack pointer (r4) and orders the top decrement after the first load */
#include "common.h"

extern "C" {

typedef struct StateStack {
    /* 0x00 */ s32 top;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 items[4];
    /* 0x18 */ u8 pending;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void (*callback)(void);
} StateStack;

typedef struct TitleScene {
    /* 0x0000 */ u8 unk0000[0x12AC];
    /* 0x12AC */ StateStack stack;
} TitleScene;

extern TitleScene *g_titleScene;

/* Pops the title scene's state stack; when a change is pending or the new top differs, runs the callback and clears the pending flag. */
void FUN_002331c0(void)
{
    StateStack *stack = &g_titleScene->stack;
    s32 popped = stack->items[stack->top];
    s32 current;

    stack->top--;
    current = stack->items[stack->top];
    if (stack->pending != 0 || popped != current) {
        stack->callback();
        stack->pending = 0;
    }
}

} /* extern "C" */
