/* NON_MATCHING: register allocation only: retail forms the old top address in r3 and loads the old top into r1; built uses r1 for the address and r3 for the new top address. */
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

typedef struct TitleScene {
    /* 0x0000 */ u8 unk0000[0x12AC];
    /* 0x12AC */ StateStack stack;
} TitleScene;

extern TitleScene *g_titleScene;

static __inline void stateStackPush(StateStack *stack, s32 value)
{
    s32 count = stack->count;
    s32 next = count + 1;
    s32 previous = stack->values[count];

    stack->count = next;
    stack->values[next] = value;
    if (stack->dirty != 0 || previous != value) {
        stack->apply(value);
        stack->dirty = 0;
    }
}

/* Pushes a render state; when it changes (or the stack is dirty) the new state is applied. */
void renderStatePush(s32 value)
{
    stateStackPush(&g_titleScene->stack, value);
}

} /* extern "C" */
