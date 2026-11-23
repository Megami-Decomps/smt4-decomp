#include "ui/UiSpriteApi.h"
#include "ui/HowToScreen.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "util/BitsAndBytes.h"
extern "C" {
s32 renderCtxPackPassFlags(u32 first, u32 second);
void FUN_0049d244(HowToScreenWork *screen, s32 x, s32 y, f32 progress);
void listPanelDraw(HowToScreenWork *screen);
void efctSetSpeed(f32 speed);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the tutorial page at its sprite's position, then the choice text of the states showing it.
static void howToScreenDrawStates(HowToScreenWork *work)
{
    s32 x = vec2GetXInt(&work->sprites[0]);
    s32 y = vec2GetYInt(&work->sprites[0]);
    FUN_0049d244(work, x, y, vec2GetSpeed(&work->sprites[0]));
    switch (work->mode.state) {
    case 5:
    case 6:
    case 8:
    case 9:
        listPanelDraw(work);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 7:
        break;
    }
}

// Draw active tutorial states, including their choice text, under a temporary render mode.
u32 FUN_0049f488(HowToScreenWork *screen)
{
    if (!screen->mode.state || screen->mode.state == 2)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    howToScreenDrawStates(screen);
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
