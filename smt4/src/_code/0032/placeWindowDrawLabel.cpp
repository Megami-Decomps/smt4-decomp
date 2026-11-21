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
    if (!window->state) {
        return 0;
    }
    if (!window->visible) {
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
    textDrawString(static_cast<f32>(x + frame->x), static_cast<f32>(y + frame->y), 0.56640625f,
        3, 0.0f,
        0xffffffff, 1.0f, window->text);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}
}
