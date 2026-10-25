/* NON_MATCHING: readable rebuild from asm of the run window's loading-dots draw; armcc here keeps the frame divisions (retail: magic-number /5, then %8 via shifts) and the two spilled neighbour indices in different registers, and orders the stereo-parallax float convert differently. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "gfx/SpritePartDraw.h"
#include "gfx/SpritePartDraw.h"
#include "text/TextDraw.h"
#include "util/Vec2Fixed.h"
#include "gfx/StereoParallax.h"

/* The title scene (its second state stack lives at 0x12AC). */
struct TitleScene {
    /* 0x0000 */ u8 unk0000[0x12AC];
    /* 0x12AC */ RenderStateStack secondStack;
};

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
extern TitleScene *g_titleScene;

void renderCtxSelectStereoLayout(TitleScene *scene);
LayoutPoint *FUN_002bf4f8(s32 group, s32 part);
void FUN_002bed3c(void);
s32 vec2GetYInt(void *vec);
void efctSetSpeed(f32 alpha);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);

/* Draws the run window's title, its loading dots (a 3x3 grid where two dots are lit and their
 * predecessors dimmed, advancing every 5 frames) and the label. Returns 0. */
u8 FUN_0018f278(void)
{
    RunWin *win = g_runWin;
    if (win->active != 0 && win->visible != 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        FUN_002bf288(2, 14, 0x14F, 0, 0, 109);
        s32 x = vec2GetXInt(win->anchor) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        s32 y = vec2GetYInt(win->anchor);
        efctSetSpeed(win->alpha);
        FUN_002bf380(2, 14, 19, x, y, 110);
        TitleScene *scene = g_titleScene;
        s32 state = packNibblesAndByte(6, 1, 0);
        renderStackPushCountedDirect(&scene->secondStack, state);
        FUN_002bf288(2, 14, 0x150, x, 0, 111);
        FUN_002bf288(2, 14, 0x151, x, 0, 111);
        renderStackPop(&g_titleScene->secondStack);
        LayoutPoint *labelPoint = FUN_002bf4f8(14, 0x153);
        FUN_002be5a4(4, 0xF49800FF, reinterpret_cast<const char *>(win->label), (f32)(labelPoint->x + (x - 14)), (f32)(labelPoint->y + y), 0.56640625f, 0.0f,
                     win->alpha);
        s32 step = win->frame / 5;
        s32 lit = step % 8;
        s32 litPrevious = (lit + 7) % 8;
        s32 lit2 = (step + 4) % 8;
        s32 lit2Previous = (lit2 + 7) % 8;
        for (s32 row = 0; row < 3; row++) {
            for (s32 column = 0; column < 3; column++) {
                s32 index = row * 3 + column;
                LayoutPoint *dot = FUN_002bf4f8(14, 0x157 + index);
                if (lit == index || lit2 == index)
                    FUN_002bf288(2, 14, 0x155, dot->x + x, dot->y, 111);
                else if (litPrevious == index || lit2Previous == index)
                    FUN_002bf288(2, 14, 0x156, dot->x + x, dot->y, 111);
                else
                    FUN_002bf288(2, 14, 0x154, dot->x + x, dot->y, 111);
            }
        }
        FUN_002bed3c();
        efctSetSpeed(1.0f);
    }
    return 0;
}

} /* extern "C" */
