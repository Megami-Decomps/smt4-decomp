/* NON_MATCHING: the effect-speed constant and the pushed-state bookkeeping are scheduled differently (retail holds 1.0f in s16 across the pops and spreads the float arguments of the overlay call over s0-s4). */
#include "common.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
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


void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
s32 renderCtxPackPassFlags(u32 kind, u32 arg);
void FUN_0046868c(TitleOverlayA *overlay);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void gxSubmitDrawZeroExtraParams(u32 a, u32 b, u32 c, u32 d, f32 e, f32 f, f32 g, f32 h, f32 i);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
void renderCtxResetColorScale(RenderCtxA *ctx);

/* Draws the title overlay once it is past state 2: under a pushed render state, an optional extra
 * pass, an optional full-screen fade of the scene's preset, then resets the matrices and color. */
void FUN_0046a868(TitleOverlayA *overlay)
{
    if (overlay->state <= 2) {
        return;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    if ((overlay->flags & 0x200) != 0) {
        FUN_0046868c(overlay);
    }
    if ((overlay->flags & 0x80) != 0) {
        u8 alpha = (u8)(u32)(overlay->fade * 192.0f);

        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
        renderCtxSelectTexture(g_renderCtx, 0);
        f32 preset = (f32)asdGxPresetsGetByKind(renderCtxGetStereoMode(g_renderCtx));
        f32 height = (f32)asdGxPresetsGetHeightByKind(renderCtxGetStereoMode(g_renderCtx));
        gxSubmitDrawZeroExtraParams(alpha, alpha, alpha, alpha, 0.0f, 0.0f, height, preset, 0.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    renderStackPop(&g_renderCtx->stackA);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
