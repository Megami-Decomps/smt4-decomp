/* NON_MATCHING: dots, pool order and divisions now match; the label coordinates load point.y/point.x into other registers (and schedule the z/width float loads and r2 argument differently), and retail sets r0=0 before releasing the frame. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "gfx/SpritePartDraw.h"
#include "gfx/SpritePartDraw.h"
#include "text/TextDraw.h"
#include "util/MathFunctions.h"
#include "gfx/StereoParallax.h"
#include "util/BitsAndBytes_VariantA.h"
#include "camp/RenderCtx.h"

/* The run window (only the fields read here). */
struct RunWin {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 active;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 frame;
    /* 0x14 */ u8 visible;
    /* 0x15 */ u8 unk15[0x23];
    /* 0x38 */ u8 anchor[0x20];
    /* 0x58 */ f32 alpha;
    /* 0x5C */ u8 unk5C[0x68];
    /* 0xC4 */ u8 label[1];
};

struct LayoutPoint {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

extern "C" {
extern RunWin *g_runWin;
extern RenderCtx *g_titleScene;

LayoutPoint *asdTMTexTableEntryAt(s32 group, s32 part);
void gxResetColorQuadToWhite(void);
s32 vec2GetYInt(void *vec);
void efctSetSpeed(f32 alpha);

/* Draws the run window's title, its loading dots (a 3x3 grid where two dots are lit and their
 * predecessors dimmed, advancing every 5 frames) and the label. Returns 0. */
u8 runWinDraw(void)
{
    RunWin *win = g_runWin;
    if (win->active != 0 && win->visible != 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        texDrawTableEntryAtStoredOrigin(2, 14, 0x14F, 0, 0, 109);
        s32 x = vec2GetXInt(win->anchor) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        s32 y = vec2GetYInt(win->anchor);
        efctSetSpeed(win->alpha);
        texDrawCompositeSprite(2, 14, 19, x, y, 110);
        RenderCtx *scene = g_titleScene;
        s32 state = packNibblesAndByte(6, 1, 0);
        renderStackPushCountedDirect(&scene->stackB, state);
        texDrawTableEntryAtStoredOrigin(2, 14, 0x150, x, 0, 111);
        texDrawTableEntryAtStoredOrigin(2, 14, 0x151, x, 0, 111);
        renderStackPop(&g_titleScene->stackB);
        LayoutPoint *labelPoint = asdTMTexTableEntryAt(14, 0x153);
        u32 color = 0xF49800FF;
        f32 labelY = (f32)(labelPoint->y + y);
        f32 labelX = (f32)(labelPoint->x + (x - 14));
        textDrawString(4, color, reinterpret_cast<const char *>(win->label), labelX, labelY, 0.56640625f, 0.0f, win->alpha);
        s32 lit = (win->frame / 5) % 8;
        s32 litPrevious = (lit + 7) % 8;
        s32 lit2 = (win->frame / 5 + 4) % 8;
        s32 lit2Previous = (lit2 + 7) % 8;
        for (s32 row = 0; row < 3; row++) {
            for (s32 column = 0; column < 3; column++) {
                s32 index = row * 3 + column;
                LayoutPoint *dot = asdTMTexTableEntryAt(14, 0x157 + index);
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
    }
    return 0;
}

} /* extern "C" */
