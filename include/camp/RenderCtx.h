/* The camp screens' draw context: render-state stacks (shared by the camp UI draw functions). */
#ifndef CAMP_RENDERCTX_H
#define CAMP_RENDERCTX_H

#include "common.h"

/* A stack of render states: the current state is entries[count], and `apply` re-applies it
 * whenever the top state changes (or `dirty` is set). */
typedef struct RenderStateStack {
    /* 0x00 */ s32 count;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 entries[4];
    /* 0x18 */ u8 dirty;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void (*apply)(int state);
} RenderStateStack;

/* The draw context (IV layout), which holds several render-state stacks. */
typedef struct RenderCtx {
    /* 0x0000 */ u8 unk0000[0x528];
    /* 0x0528 */ u32 unk0528;
    /* 0x052C */ u8 unk052C[0xD20];
    /* 0x124C */ RenderStateStack stackA;
    union {
        /* 0x126C */ u8 unk126C[0x40];
        struct {
            /* 0x126C */ RenderStateStack stackC;
            /* 0x128C */ u8 unk128c[0x20];
        } additional;
    };
    /* 0x12AC */ RenderStateStack stackB;
} RenderCtx;

/* Apocalypse layout: the stacks are 0xC further on. */
typedef struct RenderCtxA {
    /* 0x0000 */ u8 unk0000[0x52C];
    /* 0x052C */ u32 unk052C;
    /* 0x0530 */ u8 unk0530[0xD28];
    /* 0x1258 */ RenderStateStack stackA;
    union {
        /* 0x1278 */ u8 unk1278[0x40];
        struct {
            /* 0x1278 */ RenderStateStack stackC;
            /* 0x1298 */ u8 unk1298[0x20];
        } additional;
    };
    /* 0x12B8 */ RenderStateStack stackB;
} RenderCtxA;

/* Pushes `state`; the state is re-applied if it differs from the previous top. */
static __inline void renderStackPush(RenderStateStack *st, int state)
{
    int prev = st->entries[st->count];

    st->count++;
    st->entries[st->count] = state;
    if (st->dirty != 0 || prev != state) {
        st->apply(state);
        st->dirty = 0;
    }
}

/* Pops the top state; the state below is re-applied if it differs. */
static __inline void renderStackPop(RenderStateStack *st)
{
    int top = st->entries[st->count];
    int cur;

    st->count--;
    cur = st->entries[st->count];
    if (st->dirty != 0 || top != cur) {
        st->apply(cur);
        st->dirty = 0;
    }
}

/* Replaces the current state without changing the stack depth. */
static __inline void renderStackSet(RenderStateStack *st, int state)
{
    int previous = st->entries[st->count];
    st->entries[st->count] = state;
    if (st->dirty != 0 || previous != state) {
        st->apply(state);
        st->dirty = 0;
    }
}

#endif
