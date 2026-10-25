/* NON_MATCHING: readable rebuild from asm of the search window's loading-dots draw (title-scene variant of FUN_0023a5f8); armcc here keeps the frame divisions (retail: magic-number /5, then %8 via shifts) and the two spilled neighbour indices in different registers, and orders the stereo-parallax float convert differently. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"

/* The title scene (its state stacks live at 0x1258 and 0x12B8). */
struct TitleScene {
    /* 0x0000 */ u8 unk0000[0x1258];
    /* 0x1258 */ RenderStateStack firstStack;
    /* 0x1278 */ u8 unk1278[0x40];
    /* 0x12B8 */ RenderStateStack secondStack;
};

/* Pushes the evaluated state on the title scene's first stack. */
static __inline void titleScenePushFirst(TitleScene *scene, s32 state)
{
    renderStackPushCounted(&scene->firstStack, state);
}

/* Pushes the evaluated state on the title scene's second stack. */
static __inline void titleScenePushSecond(TitleScene *scene, s32 state)
{
    renderStackPushCounted(&scene->secondStack, state);
}

/* Pops the title scene's first stack. */
static __inline void titleScenePopFirst(TitleScene *scene)
{
    renderStackPop(&scene->firstStack);
}

/* Pops the title scene's second stack. */
static __inline void titleScenePopSecond(TitleScene *scene)
{
    renderStackPop(&scene->secondStack);
}

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
extern RunWin *DAT_0057f584;
extern TitleScene *g_renderCtx;

void FUN_00157558(TitleScene *scene);
void FUN_00164b5c(s32 a, s32 b, s32 sprite, s32 x, s32 y, s32 order);
LayoutPoint *FUN_001834a4(s32 group, s32 part);
void FUN_00162790(s32 a, u32 color, void *label, f32 x, f32 y, f32 scale, f32 shear, f32 alpha);
void FUN_00183bb0(void);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
f32 renderCtxCalculateStereoParallax(TitleScene *scene, f32 depth);
void efctSetSpeed(f32 alpha);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
u32 FUN_001692ac(s32 a, s32 b);

/* Draws the run window's title, its loading dots (a 3x3 grid where two dots are lit and their
 * predecessors dimmed, advancing every 5 frames) and the label. Returns 0. */
u8 FUN_0023a5f8(void)
{
    RunWin *win = DAT_0057f584;
    if (win->active != 0 && win->visible != 0) {
        FUN_00157558(g_renderCtx);
        TitleScene *first = g_renderCtx;
        titleScenePushFirst(first, FUN_001692ac(1, 0));
        s32 x = vec2GetXInt(win->anchor) + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        s32 y = vec2GetYInt(win->anchor);
        efctSetSpeed(win->alpha);
        FUN_00164b5c(2, 8, 0x14, x, y, 101);
        TitleScene *scene = g_renderCtx;
        titleScenePushSecond(scene, packNibblesAndByte(6, 1, 0));
        FUN_00164b5c(2, 8, 0x15, x, y, 102);
        titleScenePopSecond(g_renderCtx);
        LayoutPoint *labelPoint = FUN_001834a4(8, 0x16F);
        FUN_00162790(4, 0x57D8FFFF, win->label, (f32)(labelPoint->x + x), (f32)(labelPoint->y + y), 0.56640625f, 0.0f,
                     win->alpha);
        s32 step = win->frame / 5;
        s32 lit = step % 8;
        s32 litPrevious = (lit + 7) % 8;
        s32 lit2 = (step + 4) % 8;
        s32 lit2Previous = (lit2 + 7) % 8;
        for (s32 row = 0; row < 3; row++) {
            for (s32 column = 0; column < 3; column++) {
                s32 index = row * 3 + column;
                LayoutPoint *dot = FUN_001834a4(8, 0x170 + index);
                if (lit == index || lit2 == index)
                    FUN_001835b4(2, 8, 0x155, dot->x + x, dot->y, 111);
                else if (litPrevious == index || lit2Previous == index)
                    FUN_001835b4(2, 8, 0x156, dot->x + x, dot->y, 111);
                else
                    FUN_001835b4(2, 8, 0x154, dot->x + x, dot->y, 111);
            }
        }
        FUN_00183bb0();
        efctSetSpeed(1.0f);
        titleScenePopFirst(g_renderCtx);
    }
    return 0;
}

} /* extern "C" */
