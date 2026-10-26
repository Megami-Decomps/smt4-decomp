/* The camp screens' draw context: render-state stacks (shared by the camp UI draw functions). */
#ifndef CAMP_RENDERCTX_H
#define CAMP_RENDERCTX_H

#include "common.h"
#include <stddef.h>

#include "gfx/RenderStateStack.h"

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
        struct {
            u8 unk052C[0xCB8];
            /* 0x11E4 */ struct AsdTexture *selectedTexture; /* texture renderCtxSelectTexture keeps applied */
            /* 0x11E8 */ s8 selectedTextureDirty;            /* forces the texture to be applied again */
            /* 0x11E9 */ u8 selectedTextureState;            /* 0/1: texture bound, 3: just applied */
            /* 0x11EA */ u8 unk11EA[2];
            /* 0x11EC */ RenderStateStack stackD;
            /* 0x120C */ RenderStateStack stackE;
            /* 0x122C */ RenderStateStack stackF;
        } depthStacks;
    };
    /* 0x124C */ RenderStateStack stackA;
    union {
        /* 0x126C */ u8 unk126C[0x40];
        struct {
            /* 0x126C */ RenderStateStack stackC;
            /* 0x128C */ RenderStateStack stackG;
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
    union {
        /* 0x05F8 */ u8 unk5F8;
        /* 0x05F8 */ u8 shownMode;   /* display area last switched to by FUN_00157558 */
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
    /* 0x06FC */ u32 unk6FC;
    union {
        /* 0x0700 */ u8 unk0700[0xB58];
        struct {
            /* 0x0700 */ u8 unk0700[0xAD8];
            /* 0x11D8 */ f32 colorScale[4];
            /* 0x11E8 */ u8 colorScaleDirty;
            /* 0x11E9 */ u8 unk11E9[0x6F];
        } color;
        struct {
            u8 unk0700[0xA98];
            /* 0x1198 */ u8 target[0x40];
        } display;
        struct {
            u8 unk0700[0xAF0];
            /* 0x11F0 */ struct AsdTexture *selectedTexture; /* texture renderCtxSelectTexture keeps applied */
            /* 0x11F4 */ s8 selectedTextureDirty;            /* forces the texture to be applied again */
            /* 0x11F5 */ u8 selectedTextureState;            /* 0/1: texture bound, 3: just applied */
            /* 0x11F6 */ u8 unk11F6[2];
            /* 0x11F8 */ RenderStateStack stackD;
            /* 0x1218 */ RenderStateStack stackE;
            /* 0x1238 */ RenderStateStack stackF;
        } depthStacks;
    };
    /* 0x1258 */ RenderStateStack stackA;
    union {
        /* 0x1278 */ u8 unk1278[0x40];
        struct {
            /* 0x1278 */ RenderStateStack stackC;
            /* 0x1298 */ RenderStateStack stackG;
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
typedef char RenderCtxADisplayAreaOffsetCheck[
    offsetof(RenderCtxA, shownMode) == 0x5F8 &&
    offsetof(RenderCtxA, displayAreas.areaA) == 0x5FC &&
    offsetof(RenderCtxA, displayAreas.areaB) == 0x63C &&
    offsetof(RenderCtxA, display.target) == 0x1198 ? 1 : -1];

/* Pushes `state` on the context's first stack; the stack is located after `state` is evaluated. */
static __inline void renderCtxPushA(RenderCtx *context, int state)
{
    renderStackPush(&context->stackA, state);
}

static __inline void renderCtxPushA(RenderCtxA *context, int state)
{
    renderStackPush(&context->stackA, state);
}

/* Pushes the evaluated state on the context's fourth stack (at 0x11EC). */
static __inline void renderCtxPushD(RenderCtx *context, int state)
{
    renderStackPush(&context->depthStacks.stackD, state);
}

static __inline void renderCtxPushD(RenderCtxA *context, int state)
{
    renderStackPush(&context->depthStacks.stackD, state);
}

/* Pushes the evaluated state on the context's third stack. */
static __inline void renderCtxPushC(RenderCtx *context, int state)
{
    renderStackPush(&context->additional.stackC, state);
}

static __inline void renderCtxPushC(RenderCtxA *context, int state)
{
    renderStackPush(&context->additional.stackC, state);
}

/* Pushes the evaluated state on the context's second stack. */
static __inline void renderCtxPushB(RenderCtx *context, int state)
{
    renderStackPush(&context->stackB, state);
}

static __inline void renderCtxPushB(RenderCtxA *context, int state)
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

/* Pushes the evaluated state on the context's fifth stack. */
static __inline void renderCtxPushE(RenderCtx *context, int state)
{
    renderStackPush(&context->depthStacks.stackE, state);
}

/* Pushes the evaluated state on the context's sixth stack. */
static __inline void renderCtxPushF(RenderCtx *context, int state)
{
    renderStackPush(&context->depthStacks.stackF, state);
}

/* Pushes the evaluated state on the context's seventh stack. */
static __inline void renderCtxPushG(RenderCtx *context, int state)
{
    renderStackPush(&context->additional.stackG, state);
}

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
extern "C" void FUN_00157558(RenderCtxA *context);
#endif

typedef char RenderCtxSelectedTextureOffsetCheck[
    offsetof(RenderCtx, depthStacks.selectedTexture) == 0x11E4 &&
    offsetof(RenderCtx, depthStacks.selectedTextureDirty) == 0x11E8 &&
    offsetof(RenderCtx, depthStacks.selectedTextureState) == 0x11E9 &&
    offsetof(RenderCtxA, depthStacks.selectedTexture) == 0x11F0 &&
    offsetof(RenderCtxA, depthStacks.selectedTextureDirty) == 0x11F4 &&
    offsetof(RenderCtxA, depthStacks.selectedTextureState) == 0x11F5 ? 1 : -1];


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
