/* NON_MATCHING: early returns give retail's shared zero-result epilogue and the one-expression x its add order; 6 lines remain: the textDrawString call loads its colour/text/0.0f/0.566f arguments in a different order (same in the run/search-window siblings). */
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"

extern "C" {
extern PlaceWindow *g_placeWin;
s32 renderCtxPackPassFlags(s32 mode, s32 flags);
f32 renderCtxCalculateStereoParallax(RenderCtxA *, f32 offset);
void texDrawCompositeSprite(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);

// Draw the active place-name window at its animated position.
u8 placeWinDraw(void)
{
    PlaceWindow *window = g_placeWin;
    if (!window->state)
        return 0;
    if (!window->visible)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    s32 translatedX = vec2GetXInt(&window->animation) + static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.25f));
    s32 y = vec2GetYInt(&window->animation);
    texDrawCompositeSprite(2, 8, 0xe, translatedX, y, 0x65);
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(8, 0x10b);
    textDrawString(3, 0xffffffff, window->text,
                  static_cast<f32>(sprite->x + translatedX),
                  static_cast<f32>(sprite->y + y), 0.56640625f, 0.0f, 1.0f);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
