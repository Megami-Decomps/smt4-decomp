/* The camp screens' draw context: render-state stacks (shared by the camp UI draw functions). */
#ifndef CAMP_RENDERCTX_H
#define CAMP_RENDERCTX_H

#include "common.h"
#include <stddef.h>

#include "gfx/RenderStateStack.h"

/* The draw context's render-state stacks, by index in its `stacks` array (IV from 0x11EC, Apocalypse
 * from 0x11F8). The letters are the order the camp draw code was found to use them in; what the
 * lettered stacks hold, and stacks 7 and 8, are not known yet. Fields keep their width and name this
 * enum in a comment. */
enum RenderStackKind {
    RENDER_STACK_D = 0,
    RENDER_STACK_E = 1,
    RENDER_STACK_F = 2,
    RENDER_STACK_A = 3,
    RENDER_STACK_C = 4,
    RENDER_STACK_G = 5,
    RENDER_STACK_B = 6,
    RENDER_STACK_SCISSOR = 9,          /* scissoring on (RENDER_STATE_SCISSOR) or off */
    RENDER_STACK_SCISSOR_MINIMUM = 10, /* y | x << 16 */
    RENDER_STACK_SCISSOR_MAXIMUM = 11,
    RENDER_STACK_COUNT = 12
};

/* The scissor stack's state with scissoring on. */
enum { RENDER_STATE_SCISSOR = 3 };

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
        /* 0x052C */ u8 unk052C[0xCB8];
        struct {
            u8 unk052C[0xC8];
            /* 0x05F4 */ u8 type;
        } cameraSelection;
    };
    /* 0x11E4 */ struct AsdTexture *selectedTexture; /* texture renderCtxSelectTexture keeps applied */
    /* 0x11E8 */ s8 selectedTextureDirty;            /* forces the texture to be applied again */
    /* 0x11E9 */ u8 selectedTextureState;            /* 0/1: texture bound, 3: just applied */
    /* 0x11EA */ u8 unk11EA[2];
    /* 0x11EC */ RenderStateStack stacks[RENDER_STACK_COUNT]; /* indexed by RenderStackKind */
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
            union {
                u8 unk0518[8];
                struct {
                    /* 0x0518 */ f32 depth;
                    /* 0x051C */ f32 scale;
                } defaultView;
            };
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
    union {
        /* 0x05F8 */ u8 unk5F8;
        /* 0x05F8 */ u8 shownMode;   /* display area last switched to by renderCtxSelectDisplayAreaForStereoMode */
    };
    /* 0x05F9 */ u8 unk05F9[3];
    union {
        /* 0x05FC */ u8 unk05FC[0x100];
        struct {
            /* 0x05FC */ u8 areaA[0x40];
            /* 0x063C */ u8 areaB[0x40];
            /* 0x067C */ u8 unk067C[0x80];
        } displayAreas;
    };
    union {
        /* 0x06FC */ u32 unk6FC;
        /* 0x06FC */ u8 *camera; /* the active camera's node (view matrix at +0x38) */
    };
    union {
        /* 0x0700 */ u8 unk0700[0xAF0];
        struct {
            /* 0x0700 */ u8 unk0700[0xAD8];
            /* 0x11D8 */ f32 colorScale[4];
            /* 0x11E8 */ s8 colorScaleDirty; /* forces the next colour-scale upload */
            /* 0x11E9 */ u8 unk11E9[7];
        } color;
        struct {
            u8 unk0700[0xA98];
            /* 0x1198 */ u8 target[0x40];
        } display;
    };
    /* 0x11F0 */ struct AsdTexture *selectedTexture; /* texture renderCtxSelectTexture keeps applied */
    /* 0x11F4 */ s8 selectedTextureDirty;            /* forces the texture to be applied again */
    /* 0x11F5 */ u8 selectedTextureState;            /* 0/1: texture bound, 3: just applied */
    /* 0x11F6 */ u8 unk11F6[2];
    /* 0x11F8 */ RenderStateStack stacks[RENDER_STACK_COUNT]; /* indexed by RenderStackKind */
} RenderCtxA;

typedef char RenderCtxSizeCheck[sizeof(RenderCtx) == 0x136C ? 1 : -1];
typedef char RenderCtxASizeCheck[sizeof(RenderCtxA) == 0x1378 ? 1 : -1];
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
    offsetof(RenderCtx, stereo.defaultView.scale) == 0x518 && sizeof(RenderCtx) == 0x136C ? 1 : -1];
typedef char RenderCtxAStereoOffsetCheck[
    offsetof(RenderCtxA, stereo.camera) == 0x4A0 &&
    offsetof(RenderCtxA, stereo.parameter) == 0x50C &&
    offsetof(RenderCtxA, stereo.minimum) == 0x510 &&
    offsetof(RenderCtxA, stereo.maximum) == 0x514 &&
    offsetof(RenderCtxA, stereo.transform) == 0x520 &&
    offsetof(RenderCtxA, stereoMode) == 0x52C ? 1 : -1];
typedef char RenderCtxADefaultViewOffsets[
    offsetof(RenderCtxA, stereo.defaultView.depth) == 0x518 &&
    offsetof(RenderCtxA, stereo.defaultView.scale) == 0x51C ? 1 : -1];
typedef char RenderCtxAColorScaleOffsetCheck[offsetof(RenderCtxA, color.colorScale) == 0x11D8 ? 1 : -1];
typedef char RenderCtxAColorDirtyOffsetCheck[offsetof(RenderCtxA, color.colorScaleDirty) == 0x11E8 ? 1 : -1];
typedef char RenderCtxStacksOffsetCheck[
    offsetof(RenderCtx, stacks) == 0x11EC &&
    offsetof(RenderCtx, stacks[RENDER_STACK_A]) == 0x124C &&
    offsetof(RenderCtx, stacks[RENDER_STACK_B]) == 0x12AC &&
    offsetof(RenderCtx, stacks[RENDER_STACK_SCISSOR]) == 0x130C &&
    offsetof(RenderCtxA, stacks) == 0x11F8 &&
    offsetof(RenderCtxA, stacks[RENDER_STACK_A]) == 0x1258 &&
    offsetof(RenderCtxA, stacks[RENDER_STACK_B]) == 0x12B8 &&
    offsetof(RenderCtxA, stacks[RENDER_STACK_SCISSOR]) == 0x1318 ? 1 : -1];
typedef char RenderCtxAColorTargetOffsetCheck[offsetof(RenderCtxA, colorTarget.colorScaleTarget) == 0x530 ? 1 : -1];
typedef char RenderCtxADisplayAreaOffsetCheck[
    offsetof(RenderCtxA, shownMode) == 0x5F8 &&
    offsetof(RenderCtxA, displayAreas.areaA) == 0x5FC &&
    offsetof(RenderCtxA, displayAreas.areaB) == 0x63C &&
    offsetof(RenderCtxA, display.target) == 0x1198 ? 1 : -1];

/* The current (top) state of the context's stack `kind` (RenderStackKind). */
static __inline s32 renderCtxStackTop(RenderCtx *context, s32 kind)
{
    return context->stacks[kind].entries[context->stacks[kind].count];
}

static __inline s32 renderCtxStackTop(RenderCtxA *context, s32 kind)
{
    return context->stacks[kind].entries[context->stacks[kind].count];
}

/* Replaces the current state of the context's stack `kind` (RenderStackKind), keeping its depth. */
static __inline void renderCtxSetStackTop(RenderCtx *context, s32 kind, s32 state)
{
    renderStackSetCounted(&context->stacks[kind], state);
}

static __inline void renderCtxSetStackTop(RenderCtxA *context, s32 kind, s32 state)
{
    renderStackSetCounted(&context->stacks[kind], state);
}

/* Pops the context's stack `kind` (RenderStackKind) with the depth read once: the inlined form of the
 * context's pop (renderCtxPopState is its out-of-line copy). Retail keeps the context in a scratch register
 * and forms the stack's address from it (`ldr r0; add r4, r0, #4096`), which naming the stack at the call
 * (`renderStackPopCounted(context->stacks + kind)`) does not give. */
static __inline void renderCtxPopCounted(RenderCtx *context, s32 kind)
{
    renderStackPopCounted(&context->stacks[kind]);
}

static __inline void renderCtxPopCounted(RenderCtxA *context, s32 kind)
{
    renderStackPopCounted(&context->stacks[kind]);
}

/* Pushes `state` on the context's first stack; the stack is located after `state` is evaluated. */
static __inline void renderCtxPushA(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_A, state);
}

static __inline void renderCtxPushA(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_A, state);
}

/* renderCtxPushA through renderStackPushCounted (depth kept in a local): the `pushCountedA` of smt4a
 * requestImageDraw and smt4 messageDrawSelectedImagePair. */
static __inline void renderCtxPushACounted(RenderCtx *context, int state)
{
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
}

static __inline void renderCtxPushACounted(RenderCtxA *context, int state)
{
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
}

/* renderCtxPushA through renderStackPushCountedDirect (depth kept in a local, apply condition written out). */
static __inline void renderCtxPushACountedDirect(RenderCtx *context, int state)
{
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_A, state);
}

static __inline void renderCtxPushACountedDirect(RenderCtxA *context, int state)
{
    renderStackPushCountedDirect(context->stacks + RENDER_STACK_A, state);
}

/* Pushes the evaluated state on the context's fourth stack (at 0x11EC). */
static __inline void renderCtxPushD(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_D, state);
}

static __inline void renderCtxPushD(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_D, state);
}

/* Pushes the evaluated state on the context's third stack. */
static __inline void renderCtxPushC(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_C, state);
}

static __inline void renderCtxPushC(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_C, state);
}

/* Pushes the evaluated state on the context's second stack. */
static __inline void renderCtxPushB(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_B, state);
}

static __inline void renderCtxPushB(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_B, state);
}

/* Replaces the second stack's current state after the argument has been evaluated. */
static __inline void renderCtxSetB(RenderCtx *context, int state)
{
    renderStackSet(context->stacks + RENDER_STACK_B, state);
}

static __inline void renderCtxSetB(RenderCtxA *context, int state)
{
    renderStackSet(context->stacks + RENDER_STACK_B, state);
}

/* Pushes the evaluated state on the context's fifth stack. */
static __inline void renderCtxPushE(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_E, state);
}

static __inline void renderCtxPushE(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_E, state);
}

/* Pushes the evaluated state on the context's sixth stack. */
static __inline void renderCtxPushF(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_F, state);
}

static __inline void renderCtxPushF(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_F, state);
}

/* Pushes the evaluated state on the context's seventh stack. */
static __inline void renderCtxPushG(RenderCtx *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_G, state);
}

static __inline void renderCtxPushG(RenderCtxA *context, int state)
{
    renderStackPush(context->stacks + RENDER_STACK_G, state);
}

extern "C" {
/* A render pass state: `value` shifted up by 4 (bit 0 set unless it is 1), the 0xf00 bits and, when `enabled`,
 * 0x1000 (smt4 0x2c5d80, smt4a 0x1692ac). */
u32 renderCtxPackPassFlags(u32 value, bool enabled);
u32 asdGxPresetsGetHeightByKind(u32 kind);
u32 asdGxPresetsGetByKind(u32 kind);
}

/* The size of the display the context is drawing to, long side first (the panel is mounted sideways, so the
 * preset's "height" is the picture's width). Each reads the context's stereo mode on its own: the screen
 * fills (smt4 renderCtxFillDisplay, smt4a renderCtxFillDisplay) load the field at both calls, where one scope would keep its
 * address in a register. */
static __inline f32 renderCtxDisplayWidth(RenderCtx *context)
{
    return (f32)asdGxPresetsGetHeightByKind(context->stereoMode);
}

static __inline f32 renderCtxDisplayWidth(RenderCtxA *context)
{
    return (f32)asdGxPresetsGetHeightByKind(context->stereoMode);
}

static __inline f32 renderCtxDisplayHeight(RenderCtx *context)
{
    return (f32)asdGxPresetsGetByKind(context->stereoMode);
}

static __inline f32 renderCtxDisplayHeight(RenderCtxA *context)
{
    return (f32)asdGxPresetsGetByKind(context->stereoMode);
}

/* A state held on one of the context's stacks for a scope: pushed when the object is made (the stack is
 * located after `state` is evaluated, as with the push wrappers above) and popped by its destructor, so a run
 * of them unwinds in reverse order through the stacks they refer to (the screen fills smt4 renderCtxFillDisplay and
 * smt4a renderCtxFillDisplay hold six each, and keep each stack's address in one register from push to pop). */
class RenderCtxStateScope {
public:
    RenderCtxStateScope(RenderCtx *context, s32 kind, int state) : stack(context->stacks[kind])
    {
        renderStackPush(&stack, state);
    }
    RenderCtxStateScope(RenderCtxA *context, s32 kind, int state) : stack(context->stacks[kind])
    {
        renderStackPush(&stack, state);
    }
    ~RenderCtxStateScope()
    {
        renderStackPopChecked(stack);
    }

private:
    RenderStateStack &stack;
};

/* Switches the draw context to the layout of its current stereo phase (IV). */
#ifdef __cplusplus
extern "C" void renderCtxSelectStereoLayout(RenderCtx *context);
#endif

/* Rebuilds the context's dirty or non-identity transform matrices and applies the combined matrix. */
#ifdef __cplusplus
extern "C" void renderCtxApplyTransforms(RenderCtx *context);
#endif

/* Applies `texture` (NULL: none) when it differs from the context's selected texture or a reload
 * is pending, and switches the texture binding on or off. */
#ifdef __cplusplus
/* renderCtxSelectTexture: per-game context type, declared in <game>/include/camp/RenderCtxSelect.h. */
#include "camp/RenderCtxSelect.h"
#endif

/* Switches the draw context to the display area for its stereo mode and records the area shown. */
#ifdef __cplusplus
extern "C" void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
#endif

typedef char RenderCtxSelectedTextureOffsetCheck[
    offsetof(RenderCtx, selectedTexture) == 0x11E4 &&
    offsetof(RenderCtx, selectedTextureDirty) == 0x11E8 &&
    offsetof(RenderCtx, selectedTextureState) == 0x11E9 &&
    offsetof(RenderCtxA, selectedTexture) == 0x11F0 &&
    offsetof(RenderCtxA, selectedTextureDirty) == 0x11F4 &&
    offsetof(RenderCtxA, selectedTextureState) == 0x11F5 ? 1 : -1];


extern "C" {
s32 FUN_001dd8f0(void);
}

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002ae210(u32 kind);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_004ab718(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 engineCleanupIsDone(void);

#ifdef __cplusplus
}
#endif

#endif
