/* NON_MATCHING: only saved-register numbers differ (retail zero r6, x r7, y reuses r5); the jump table and render-stack calls now match. */
#include "ui/HowToScreen.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "util/PackNibbles.h"
extern "C" {
s32 FUN_001692ac(u32 first, u32 second);
s32 vec2GetXInt(const UiSpriteState *sprite);
s32 vec2GetYInt(const UiSpriteState *sprite);
void FUN_0049d244(HowToScreenWork *screen, s32 x, s32 y, f32 progress);
void FUN_0049e3f8(HowToScreenWork *screen);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw active tutorial states, including their choice text, under a temporary render mode.
u32 FUN_0049f488(HowToScreenWork *screen)
{
    if (!screen->mode.state || screen->mode.state == 2)
        return 0;
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    HowToScreenWork *work = screen;
    s32 x = vec2GetXInt(&work->sprites[0]);
    s32 y = vec2GetYInt(&work->sprites[0]);
    FUN_0049d244(work, x, y, vec2GetSpeed(&work->sprites[0]));
    switch (work->mode.state) {
    case 5:
    case 6:
    case 8:
    case 9:
        FUN_0049e3f8(work);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
        break;
    }
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
