/* NON_MATCHING: x is now one expression (offset + parallax) and the text position adds the frame offset second, like retail; remaining: the text call loads its color/depth constants in a different order and the zero return is materialised before the stack restore. */
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"

extern "C" {
extern PlaceWindow *g_placeWin;
u32 renderCtxPackPassFlags(u32 slot, u32 flags);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void texDrawCompositeSprite(s32 layer, u32 group, u32 frame, s32 x, s32 y, s32 flags);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);

u32 placeWindowDrawLabel(void)
{
    PlaceWindow *window = g_placeWin;
    if (!window->state || !window->visible) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    u32 state = renderCtxPackPassFlags(1, 0);
    renderCtxPushA(context, state);
    s32 x = vec2GetXInt(&window->animation) + static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
    s32 y = vec2GetYInt(&window->animation);
    texDrawCompositeSprite(2, 0xe, 0xe, x, y, 0x65);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0xe, 0x10b);
    textDrawString(3, 0xffffffff, window->text,
        static_cast<f32>(x + frame->x), static_cast<f32>(y + frame->y),
        0.56640625f, 0.0f, 1.0f);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
