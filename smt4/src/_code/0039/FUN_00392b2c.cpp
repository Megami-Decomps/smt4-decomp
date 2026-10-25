/* NON_MATCHING: canonical render context, animation getter and native add-on menu member callbacks recovered; render-state pop expression/register order still differs. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "classes/AocMenu.h"


extern "C" {

extern RenderCtx* g_titleScene;

void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
void renderCtxSelectStereoLayout(RenderCtx* scene);
s32 FUN_002c5d80(s32 a, s32 b);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
f32 renderCtxCalculateStereoParallax(RenderCtx* ctx, f32 depth);
void FUN_002bf380(s32 layer, s32 group, s32 index, s32 x, s32 y, s32 z);
void effectRenderTransformedInstance(void* instance, f32 offset);
void FUN_002c198c(RenderCtx* scene);
void FUN_002c18e4(RenderCtx* scene);
f32 vec2GetSpeed(const void *animation);

// Draws the menu screen (frame, shadow and its 24 effect instances) and then runs the
// selected entry's handler.
void FUN_00392b2c(AocMenu* screen)
{
    if ((s32)screen->step <= 0) return;
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 7, 0));
    s32 x = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.38f);
    FUN_002bf380(2, 0x11, 0, 0, 0, 0xb);
    efctSetSpeed(vec2GetSpeed(screen->animated.effects[24]));
    FUN_002bf288(2, 0x1d, 2000, x, 0, 0xb);
    efctSetSpeed(1.0f);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.36f);
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    for (s32 i = 0; i < 24; i++) {
        effectRenderTransformedInstance(screen->animated.effects[i], (f32)shift);
    }
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackA);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);

    if (screen->callbacks.draw[screen->step] != NULL) {
        (screen->*screen->callbacks.draw[screen->step])();
    }
}

} /* extern "C" */
