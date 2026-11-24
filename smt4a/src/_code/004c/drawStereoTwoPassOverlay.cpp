/* NON_MATCHING: first renderStackPopChecked now matches; remaining: stereo parallax vcvt uses s1 in retail (built reuses s0) and first pop loads g_renderCtx into r0 instead of r4 (12 diff lines).
 * Wave 91: an extra accessor, renderStackPopCounted(renderCtxStackAt(g_renderCtx, RENDER_STACK_A)) at both pops (with the
 * parallax cast in a renderCtxStereoPixelOffset inline) is IDENTICAL here and in its siblings, but it is a third spelling
 * of renderCtxPopCounted chosen by score: renderCtxPopCounted written through it loses guestWinDraw (both games) and
 * runWinDraw, so it is not kept. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// A sprite effect owner (observed fields).
struct StereoSpriteEffect {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 visible;
    /* 0x26 */ u8 unk26[0x0a];
    /* 0x30 */ f32 speed;       // effect speed of the narrow sprite
};

extern "C" {
void efctSetSpeed(f32 speed);
void texDrawTableEntryAtStoredOrigin(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 color);
void gxResetColorQuadToWhite(void);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);

// Draws the wide and the narrow sprite of the effect with a stereo offset, each between a render-state push and pop.
void drawStereoTwoPassOverlay(StereoSpriteEffect *effect)
{
    if (effect->visible == 0) {
        return;
    }
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    asdTMTexTableEntryAt(0x22, 3000);
    f32 wideOffset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
    texDrawTableEntryAtStoredOrigin(2, 0x22, 3000, wideOffset, 0, 2);
    renderStackPopChecked(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(effect->speed);
    gxResetColorQuadToWhite();
    asdTMTexTableEntryAt(0x22, 1000);
    f32 narrowOffset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.28f);
    texDrawTableEntryAtStoredOrigin(2, 0x22, 1000, narrowOffset, 0, 6);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
}
}
