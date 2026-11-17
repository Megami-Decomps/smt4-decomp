#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "font/InfoWin.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void renderCtxSelectStereoLayout(RenderCtx *context);
s32 renderCtxPackPassFlags(u32 preset, u32 index);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void FUN_002b659c(s32 x, s32 y, s32 width, s32 height);
void FUN_002b75ec(void *text, s32 x, s32 y, s32 layer, f32 scale, s32 mode, s32 index);
void FUN_002b64b8(void);

/* Draw the information window: frame, clipped scrolling text and decorations. */
s32 infoWinDraw(u32 job)
{
    InfoWindow *window = g_infoWin;
    if (window->state == 0) {
        return 0;
    }
    if (window->shown == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    s32 x = vec2GetXInt(&window->background) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
    s32 y = vec2GetYInt(&window->background);
    texDrawTableEntryAtStoredOrigin(2, 14, 135, x, y, 21);
    texDrawTableEntryAtStoredOrigin(2, 14, 136, x, y, 21);
    if (window->hasText != 0) {
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(14, 135);
        FUN_002b659c(frame->x + x, frame->y + y, frame->placement->width, frame->placement->height);
        TextureTableEntryIV *textBox = asdTMTexTableEntryAt(14, 137);
        if (window->style != 0) {
            FUN_002b75ec(window->text, textBox->x + x, textBox->y + y, 201, 1.0f, 6, 0);
        } else {
            FUN_002b75ec(window->text, textBox->x + window->labelX + x, textBox->y + y, 201, 1.0f, 6, 0);
            if (window->wideText != 0) {
                FUN_002b75ec(window->text, textBox->x + window->textRight + x, textBox->y + y, 201, 1.0f, 6, 0);
            }
        }
        FUN_002b64b8();
    }
    texDrawTableEntryAtStoredOrigin(2, 14, 134, x, y, 31);
    texDrawTableEntryAtStoredOrigin(2, 14, 258, x, y, 31);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}

}
