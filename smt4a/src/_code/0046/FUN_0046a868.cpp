/* NON_MATCHING: the effect-speed constant and the pushed-state bookkeeping are scheduled differently (retail holds 1.0f in s16 across the pops and spreads the float arguments of the overlay call over s0-s4). */
#include "common.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

/* A title-scene overlay object: flags at 0 (0x80: fade overlay, 0x200: extra pass), a state at 4
 * (drawn from 3 on) and its fade amount at 0x200. */
typedef struct TitleOverlayA {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ u8 unk008[0x1F8];
    /* 0x200 */ f32 fade;
} TitleOverlayA;


void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);
s32 FUN_001692ac(u32 kind, u32 arg);
void FUN_0046868c(TitleOverlayA *overlay);
void FUN_0016c4b8(RenderCtxA *ctx, u32 handle);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void FUN_0014e314(u32 a, u32 b, u32 c, u32 d, f32 e, f32 f, f32 g, f32 h, f32 i);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
void renderCtxResetColorScale(RenderCtxA *ctx);

/* Draws the title overlay once it is past state 2: under a pushed render state, an optional extra
 * pass, an optional full-screen fade of the scene's preset, then resets the matrices and color. */
void FUN_0046a868(TitleOverlayA *overlay)
{
    if (overlay->state <= 2) {
        return;
    }
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    if ((overlay->flags & 0x200) != 0) {
        FUN_0046868c(overlay);
    }
    if ((overlay->flags & 0x80) != 0) {
        u8 alpha = (u8)(u32)(overlay->fade * 192.0f);

        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
        FUN_0016c4b8(g_renderCtx, 0);
        f32 preset = (f32)asdGxPresetsGetByKind(g_renderCtx->stereoMode);
        f32 height = (f32)asdGxPresetsGetHeightByKind(g_renderCtx->stereoMode);
        FUN_0014e314(alpha, alpha, alpha, alpha, 0.0f, 0.0f, height, preset, 0.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    renderStackPop(&g_renderCtx->stackA);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
