/* A render-state stack: a value stack with a change callback (shared by the camp and title draw code). */
#ifndef GFX_RENDERSTATESTACK_H
#define GFX_RENDERSTATESTACK_H

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

typedef char RenderStateStackSizeCheck[sizeof(RenderStateStack) == 0x20 ? 1 : -1];

/* Whether a new top state has to be applied: the stack was marked dirty or the state changed. */
static __inline bool renderStackNeedsApply(RenderStateStack *st, int prev, int state)
{
    return st->dirty != 0 || prev != state;
}

/* Pushes `state`; the state is re-applied if it differs from the previous top. */
static __inline void renderStackPush(RenderStateStack *st, int state)
{
    int prev = st->entries[st->count];

    st->count++;
    st->entries[st->count] = state;
    if (renderStackNeedsApply(st, prev, state)) {
        st->apply(state);
        st->dirty = 0;
    }
}

/* The same push written the way retail's title/search-window inlines read: the depth is loaded once
 * into a local and the new top is stored through that local, where renderStackPush re-reads
 * st->count after incrementing it. Semantically identical; it is a different source expression, and
 * armcc emits a different load/add order for it (each retail caller uses exactly one of the two). */
static __inline void renderStackPushCounted(RenderStateStack *st, int state)
{
    int top = st->count;
    int prev = st->entries[top];

    top = top + 1;
    st->count = top;
    st->entries[top] = state;
    if (renderStackNeedsApply(st, prev, state)) {
        st->apply(state);
        st->dirty = 0;
    }
}

/* renderStackPushCounted with the apply condition written out instead of through
 * renderStackNeedsApply (the run-window draws; the predicate helper changes their register order). */
static __inline void renderStackPushCountedDirect(RenderStateStack *st, int state)
{
    int top = st->count;
    int prev = st->entries[top];

    top = top + 1;
    st->count = top;
    st->entries[top] = state;
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

/* The same replacement with the depth read once and kept in a local. */
static __inline void renderStackSetCounted(RenderStateStack *st, int state)
{
    int top = st->count;
    int previous = st->entries[top];

    st->entries[top] = state;
    if (st->dirty != 0 || previous != state) {
        st->apply(state);
        st->dirty = 0;
    }
}

#endif
