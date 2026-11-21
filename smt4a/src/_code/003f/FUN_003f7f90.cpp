/* NON_MATCHING: retail materialises the overlay's sprite id (0xAC) in r4 before the first efctSetSpeed call, as an
   inlined draw-at-speed helper taking the id would; no such helper is known, so the draw is written in place. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"
#include "Model/MoriModelShadowMap.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantC.h"

struct PositionedMenuDrawWork {
    u8 unk000[0x14];
    u32 state;
    u8 unk018[0x154];
    UiSpriteState position;
};
extern "C" {
s32 renderCtxPackPassFlags(u32 first, u32 second);
void FUN_003f66dc(PositionedMenuDrawWork *work, s32 x, s32 y, f32 speed);
void efctSetSpeed(f32 speed);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the menu list at its sprite position, then the state overlay: the draw body between the render push and
 * pop, as howToScreenDrawStates is in FUN_0049f488. */
static void drawStates(PositionedMenuDrawWork *work)
{
    s32 x = vec2GetXInt(&work->position);
    s32 y = vec2GetYInt(&work->position);
    f32 speed = vec2GetSpeed(&work->position);
    FUN_003f66dc(work, x, y, speed);
    switch (work->state) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 11:
        break;
    default:
        efctSetSpeed(speed);
        texDrawTableEntryAtStoredOrigin(2, 0x31, 0xAC, x, y, 0x33);
        efctSetSpeed(1.0f);
        break;
    }
    efctSetSpeed(1.0f);
}

s32 FUN_003f7f90(PositionedMenuDrawWork *work, s32 value)
{
    if (work->state == 0 || work->state == 1)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    drawStates(work);
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    skinObjectUpdateMatrices((SkinObject *)g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
