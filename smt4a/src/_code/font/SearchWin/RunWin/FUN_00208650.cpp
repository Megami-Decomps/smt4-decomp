/* NON_MATCHING: corrected retail parallax (0.25f) and label color (0x57d8ffff); label coordinate conversion, signed /5 and %8 scheduling, and zero-result epilogue still differ. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

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


extern "C" {
extern RunWin *g_runWin;

void FUN_00164b5c(s32 a, s32 b, s32 sprite, s32 x, s32 y, s32 order);
void FUN_00183bb0(void);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
f32 renderCtxCalculateStereoParallax(RenderCtxA *scene, f32 depth);
void efctSetSpeed(f32 alpha);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);

/* Draws the run window's title, its loading dots (a 3x3 grid where two dots are lit and their
 * predecessors dimmed, advancing every 5 frames) and the label. Returns 0. */
u8 FUN_00208650(void)
{
    RunWin *win = g_runWin;
    if (win->active != 0 && win->visible != 0) {
        FUN_00157558(g_renderCtx);
        FUN_001835b4(2, 8, 0x14F, 0, 0, 109);
        s32 x = vec2GetXInt(win->anchor) + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        s32 y = vec2GetYInt(win->anchor);
        efctSetSpeed(win->alpha);
        FUN_00164b5c(2, 8, 19, x, y, 110);
        RenderCtxA *scene = g_renderCtx;
        s32 state = packNibblesAndByte(6, 1, 0);
        renderStackPushCountedDirect(&scene->stackB, state);
        FUN_001835b4(2, 8, 0x150, x, 0, 111);
        FUN_001835b4(2, 8, 0x151, x, 0, 111);
        renderStackPop(&g_renderCtx->stackB);
        TextureTableEntryIV *labelPoint = asdTMTexTableEntryAt(8, 0x153);
        textDrawString(4, 0x57D8FFFF, (const char *)win->label, (f32)(labelPoint->x + (x - 20)), (f32)(labelPoint->y + y), 0.56640625f, 0.0f,
                     win->alpha);
        s32 step = win->frame / 5;
        s32 lit = step % 8;
        s32 litPrevious = (lit + 7) % 8;
        s32 lit2 = (step + 4) % 8;
        s32 lit2Previous = (lit2 + 7) % 8;
        for (s32 row = 0; row < 3; row++) {
            for (s32 column = 0; column < 3; column++) {
                s32 index = row * 3 + column;
                TextureTableEntryIV *dot = asdTMTexTableEntryAt(8, 0x157 + index);
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
    }
    return 0;
}

} /* extern "C" */
