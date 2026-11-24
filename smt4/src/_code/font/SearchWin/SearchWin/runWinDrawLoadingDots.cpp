/* NON_MATCHING: 10 lines. The pushes and pops match, but the label's x/y sums use different core registers. */
#include "font/SearchWin/RunWin.h"
#include "ui/UiSpriteApi.h"
#include "gfx/SpritePartDraw.h"
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "gfx/StereoParallax.h"
#include "util/BitsAndBytes_VariantA.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern RunWinWork *g_searchWin;

void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 alpha);

/* Draws the run window's title, its loading dots (a 3x3 grid where two dots are lit and their
 * predecessors dimmed, advancing every 5 frames) and the label. Returns 0. */
u8 runWinDrawLoadingDots(void)
{
    RunWinWork *win = g_searchWin;
    if (win->state == 0) {
        return 0;
    }
    if (win->active == 0) {
        return 0;
    }
    {
        renderCtxSelectStereoLayout(g_titleScene);
        RenderCtx *scene = g_titleScene;
        s32 state = renderCtxPackPassFlags(1, false);
        renderStackPushCounted(scene->stacks + RENDER_STACK_A, state);
        s32 x = vec2GetXInt(&win->window) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        s32 y = vec2GetYInt(&win->window);
        efctSetSpeed(win->window.alpha);
        texDrawCompositeSprite(2, 14, 0x14, x, y, 101);
        scene = g_titleScene;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPushCounted(scene->stacks + RENDER_STACK_B, state);
        texDrawCompositeSprite(2, 14, 0x15, x, y, 102);
        renderCtxPopCounted(g_titleScene, RENDER_STACK_B);
        TextureTableEntryIV *labelPoint = asdTMTexTableEntryAt(14, 0x16F);
        textDrawString((f32)(labelPoint->x + x), (f32)(labelPoint->y + y), 0.56640625f, 4, 0.0f,
                       0xF49800FF, win->window.alpha, (const char *)win->text);
        s32 lit = (win->counter / 5) % 8;
        s32 litPrevious = (lit + 7) % 8;
        s32 lit2 = (win->counter / 5 + 4) % 8;
        s32 lit2Previous = (lit2 + 7) % 8;
        for (s32 row = 0; row < 3; row++) {
            for (s32 column = 0; column < 3; column++) {
                s32 index = row * 3 + column;
                TextureTableEntryIV *dot = asdTMTexTableEntryAt(14, 0x170 + index);
                if (lit == index || lit2 == index)
                    texDrawTableEntryAtStoredOrigin(2, 14, 0x155, dot->x + x, dot->y, 111);
                else if (litPrevious == index || lit2Previous == index)
                    texDrawTableEntryAtStoredOrigin(2, 14, 0x156, dot->x + x, dot->y, 111);
                else
                    texDrawTableEntryAtStoredOrigin(2, 14, 0x154, dot->x + x, dot->y, 111);
            }
        }
        gxResetColorQuadToWhite();
        efctSetSpeed(1.0f);
        renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    }
    return 0;
}

} /* extern "C" */
