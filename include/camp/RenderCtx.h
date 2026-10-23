/* The camp screens' draw context: render-state stacks (shared by the camp UI draw functions). */
#ifndef CAMP_RENDERCTX_H
#define CAMP_RENDERCTX_H

#include "common.h"
#include <stddef.h>

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
    union {
        /* 0x0000 */ u8 unk0000[0x528];
        struct {
            u8 unk0000[0x4A0];
            /* 0x04A0 */ u8 camera[0x68];
            /* 0x0508 */ f32 parameter;
            /* 0x050C */ f32 minimum;
            /* 0x0510 */ f32 maximum;
            union {
                u8 unk0514[8];
                struct {
                    /* 0x0514 */ f32 depth;
                    /* 0x0518 */ f32 scale;
                } defaultView;
            };
            /* 0x051C */ f32 (*transform)(f32 value, f32 parameter);
        } stereo;
    };
    union {
        /* 0x0528 */ u32 unk0528;
        /* 0x0528 */ s32 stereoMode;
    };
    union {
        /* 0x052C */ u8 unk052C[0xD20];
        struct {
            u8 unk052C[0xC8];
            /* 0x05F4 */ u8 type;
        } cameraSelection;
    };
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
    union {
        /* 0x0000 */ u8 unk0000[0x52C];
        struct {
            u8 unk0000[0x4A0];
            /* 0x04A0 */ u8 camera[0x6C];
            /* 0x050C */ f32 parameter;
            /* 0x0510 */ f32 minimum;
            /* 0x0514 */ f32 maximum;
            u8 unk0518[8];
            /* 0x0520 */ f32 (*transform)(f32 value, f32 parameter);
        } stereo;
    };
    union {
        /* 0x052C */ u32 unk052C;
        /* 0x052C */ s32 stereoMode;
    };
    union {
        /* 0x0530 */ u8 unk0530[0xC8];
        struct {
            /* 0x0530 */ void *colorScaleTarget;
            /* 0x0534 */ u8 unk0534[0xC4];
        } colorTarget;
    };
    /* 0x05F8 */ u8 unk5F8;
    /* 0x05F9 */ u8 unk05F9[0x103];
    /* 0x06FC */ u32 unk6FC;
    union {
        /* 0x0700 */ u8 unk0700[0xB58];
        struct {
            /* 0x0700 */ u8 unk0700[0xAD8];
            /* 0x11D8 */ f32 colorScale[4];
            /* 0x11E8 */ u8 colorScaleDirty;
            /* 0x11E9 */ u8 unk11E9[0x6F];
        } color;
    };
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

typedef char RenderCtxSizeCheck[sizeof(RenderCtx) == 0x12CC ? 1 : -1];
typedef char RenderCtxASizeCheck[sizeof(RenderCtxA) == 0x12D8 ? 1 : -1];
typedef char RenderCtxCameraSelectionOffsetCheck[offsetof(RenderCtx, cameraSelection.type) == 0x5F4 ? 1 : -1];
typedef char RenderCtxStereoOffsetCheck[
    offsetof(RenderCtx, stereo.camera) == 0x4A0 &&
    offsetof(RenderCtx, stereo.parameter) == 0x508 &&
    offsetof(RenderCtx, stereo.minimum) == 0x50C &&
    offsetof(RenderCtx, stereo.maximum) == 0x510 &&
    offsetof(RenderCtx, stereo.transform) == 0x51C &&
    offsetof(RenderCtx, stereoMode) == 0x528 ? 1 : -1];
typedef char RenderCtxDefaultViewOffsetsCheck[
    offsetof(RenderCtx, stereo.defaultView.depth) == 0x514 &&
    offsetof(RenderCtx, stereo.defaultView.scale) == 0x518 && sizeof(RenderCtx) == 0x12CC ? 1 : -1];
typedef char RenderCtxAStereoOffsetCheck[
    offsetof(RenderCtxA, stereo.camera) == 0x4A0 &&
    offsetof(RenderCtxA, stereo.parameter) == 0x50C &&
    offsetof(RenderCtxA, stereo.minimum) == 0x510 &&
    offsetof(RenderCtxA, stereo.maximum) == 0x514 &&
    offsetof(RenderCtxA, stereo.transform) == 0x520 &&
    offsetof(RenderCtxA, stereoMode) == 0x52C ? 1 : -1];
typedef char RenderCtxAColorScaleOffsetCheck[offsetof(RenderCtxA, color.colorScale) == 0x11D8 ? 1 : -1];
typedef char RenderCtxAColorDirtyOffsetCheck[offsetof(RenderCtxA, color.colorScaleDirty) == 0x11E8 ? 1 : -1];
typedef char RenderCtxAColorTargetOffsetCheck[offsetof(RenderCtxA, colorTarget.colorScaleTarget) == 0x530 ? 1 : -1];

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

/* Pushes `state` on the context's first stack; the stack is located after `state` is evaluated. */
static __inline void renderCtxPushA(RenderCtx *context, int state)
{
    renderStackPush(&context->stackA, state);
}

static __inline void renderCtxPushA(RenderCtxA *context, int state)
{
    renderStackPush(&context->stackA, state);
}

/* Pushes the evaluated state on the context's second stack. */
static __inline void renderCtxPushB(RenderCtx *context, int state)
{
    renderStackPush(&context->stackB, state);
}

/* Replaces the second stack's current state after the argument has been evaluated. */
static __inline void renderCtxSetB(RenderCtx *context, int state)
{
    renderStackSet(&context->stackB, state);
}

static __inline void renderCtxSetB(RenderCtxA *context, int state)
{
    renderStackSet(&context->stackB, state);
}

#endif
