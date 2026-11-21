/* NON_MATCHING: only the render-state pops' stack address differs: retail loads g_titleScene into r0 and adds the
 * stack offset into r4 (ldr r0; add r4, r0, #4096), this build loads it into r4 directly. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "classes/AocMenu.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"


extern "C" {


void gxResetColorQuadToWhite(void);


s32 renderCtxPackPassFlags(s32 a, s32 b);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
f32 renderCtxCalculateStereoParallax(RenderCtx* ctx, f32 depth);
void texDrawCompositeSprite(s32 layer, s32 group, s32 index, s32 x, s32 y, s32 z);
void effectRenderTransformedInstance(void* instance, f32 offset);
void renderCtxResetColorScale(RenderCtx* scene);

// Draws the menu screen (frame, shadow and its 24 effect instances) and then runs the
// selected entry's handler.
void aocMenuDrawScreen(AocMenu* screen)
{
    if ((s32)screen->step <= 0) return;
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 7, 0));
    s32 x = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.38f);
    texDrawCompositeSprite(2, 0x11, 0, 0, 0, 0xb);
    efctSetSpeed(vec2GetSpeed((const UiSpriteState *)screen->animated.effects[24]));
    texDrawTableEntryAtStoredOrigin(2, 0x1d, 2000, x, 0, 0xb);
    efctSetSpeed(1.0f);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.36f);
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    for (s32 i = 0; i < 24; i++) {
        effectRenderTransformedInstance(screen->animated.effects[i], (f32)shift);
    }
    renderStackPopCounted(&g_titleScene->stackB);
    renderStackPopCounted(&g_titleScene->stackB);
    renderStackPopCounted(&g_titleScene->stackA);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);

    if (screen->callbacks.draw[screen->step] != NULL) {
        (screen->*screen->callbacks.draw[screen->step])();
    }
}

} /* extern "C" */
