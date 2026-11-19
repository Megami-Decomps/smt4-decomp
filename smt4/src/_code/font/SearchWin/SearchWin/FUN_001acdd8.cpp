/* NON_MATCHING: first render-stack push schedules depth and previous state differently; second pop loads the stack base into a different register. */
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

/* Pushes the evaluated state on the title scene's second stack. */
static __inline void titleScenePushSecond(RenderCtx *scene, s32 state)
{
    renderStackPushCounted(&scene->stackB, state);
}

/* Pops the title scene's first stack. */
static __inline void titleScenePopFirst(RenderCtx *scene)
{
    renderStackPop(&scene->stackA);
}

extern "C" {
extern RunWinWork *DAT_0043e170;

void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 alpha);
u32 renderCtxPackPassFlags(s32 a, s32 b);

/* Draws the run window's title, its loading dots (a 3x3 grid where two dots are lit and their
 * predecessors dimmed, advancing every 5 frames) and the label. Returns 0. */
u8 FUN_001acdd8(void)
{
    RunWinWork *win = DAT_0043e170;
    if (win->state == 0) {
        return 0;
    }
    if (win->active == 0) {
        return 0;
    }
    {
        renderCtxSelectStereoLayout(g_titleScene);
        RenderCtx *first = g_titleScene;
        renderCtxPushACountedDirect(first, renderCtxPackPassFlags(1, 0));
        s32 x = vec2GetXInt(&win->window) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        s32 y = vec2GetYInt(&win->window);
        efctSetSpeed(win->window.alpha);
        texDrawCompositeSprite(2, 14, 0x14, x, y, 101);
        RenderCtx *scene = g_titleScene;
        titleScenePushSecond(scene, packNibblesAndByte(6, 1, 0));
        texDrawCompositeSprite(2, 14, 0x15, x, y, 102);
        renderStackPopChecked(&g_titleScene->stackB);
        TextureTableEntryIV *labelPoint = asdTMTexTableEntryAt(14, 0x16F);
        textDrawString((f32)(labelPoint->x + x), (f32)(labelPoint->y + y), 0.56640625f, 4, 0.0f,
                       0xF49800FF, win->window.alpha, reinterpret_cast<const char *>(win->text));
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
        titleScenePopFirst(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
