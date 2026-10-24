/* NON_MATCHING: the effect-speed constant and the pushed-state bookkeeping are scheduled differently (retail holds 1.0f in s16 across the pops and spreads the float arguments of the overlay call over s0-s4). */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* A title-scene overlay object: flags at 0 (0x80: fade overlay), a state at 4 (drawn from 3 on) and
 * its fade amount at 0x208. */
typedef struct TitleOverlay {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ u8 unk008[0x200];
    /* 0x208 */ f32 fade;
} TitleOverlay;

extern RenderCtx *g_titleScene;

void FUN_002c39a4(RenderCtx *ctx);
void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
s32 FUN_002c5d80(u32 kind, u32 arg);
void FUN_002c1b64(RenderCtx *ctx, u32 handle);
u32 asdGxPresetsGetByKind(u32 kind);
u32 FUN_002c15ac(u32 kind);
void FUN_002c0944(u32 a, u32 b, u32 c, u32 d, f32 e, f32 f, f32 g, f32 h, f32 i);
void FUN_0038368c(TitleOverlay *overlay);
void FUN_002c198c(RenderCtx *ctx);
void FUN_002c18e4(RenderCtx *ctx);

/* Draws the title overlay once it is past state 2: under a pushed render state, an optional
 * full-screen fade of the scene's preset, then the overlay itself. */
void FUN_003844a0(TitleOverlay *overlay)
{
    if (overlay->state <= 2) {
        return;
    }
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    if ((overlay->flags & 0x80) != 0) {
        u8 alpha = (u8)(u32)(overlay->fade * 192.0f);

        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        FUN_002c1b64(g_titleScene, 0);
        f32 preset = (f32)asdGxPresetsGetByKind(*(u32 *)((u8 *)g_titleScene + 0x528));
        f32 factor = (f32)FUN_002c15ac(*(u32 *)((u8 *)g_titleScene + 0x528));
        FUN_002c0944(alpha, alpha, alpha, alpha, 0.0f, 0.0f, factor, preset, 0.0f);
        renderStackPop(&g_titleScene->stackA);
    }
    FUN_0038368c(overlay);
    renderStackPop(&g_titleScene->stackA);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}

}
