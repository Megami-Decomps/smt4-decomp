/* NON_MATCHING: only the two pops' base differs: retail loads g_titleScene into r0 and builds the stack address in r4
 * (add r4, r0, #4096), the build loads it into r4 directly. */
#include "common.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* A title-scene overlay object: flags at 0 (0x80: fade overlay), a state at 4 (drawn from 3 on) and
 * its fade amount at 0x208. */
typedef struct TitleOverlay {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ u8 unk008[0x1E0];
    /* 0x1E8 */ UiSpriteState fadeAnimation;
} TitleOverlay;


void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
void FUN_0038368c(TitleOverlay *overlay);
void renderCtxResetColorScale(RenderCtx *ctx);

/* Draws the title overlay once it is past state 2: under a pushed render state, an optional
 * full-screen fade of the scene's preset, then the overlay itself. */
void FUN_003844a0(TitleOverlay *overlay)
{
    if (overlay->state <= 2) {
        return;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    if ((overlay->flags & 0x80) != 0) {
        u8 alpha = (u8)(u32)(vec2GetSpeed(&overlay->fadeAnimation) * 192.0f);

        renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
        renderCtxSelectTexture(g_titleScene, 0);
        f32 preset = (f32)asdGxPresetsGetByKind(renderCtxGetStereoMode(g_titleScene));
        f32 factor = (f32)asdGxPresetsGetHeightByKind(renderCtxGetStereoMode(g_titleScene));
        gxSubmitDrawZeroExtraParams(0.0f, 0.0f, factor, preset, alpha, alpha, alpha, 0.0f, alpha);
        renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_A);
    }
    FUN_0038368c(overlay);
    renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_A);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

}
