/* NON_MATCHING: float-constant registers are loaded in the opposite order (retail s17=0.0, s16=1.0), the render-stack push is scheduled differently, and the list branch is laid out before the overlay branch; 160 rows each. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_EffectColor.h"

/* The debug list job's work (observed fields). */
struct DebugListWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 listMode;         /* 1: draw the item list, otherwise the fade overlay */
    /* 0x14 */ u8 unk14[0x4C];
    /* 0x60 */ s32 itemCount;
    /* 0x64 */ u8 *items;            /* itemCount records of 0x228 bytes */
    /* 0x68 */ s32 cursor;
    /* 0x6C */ f32 fade;
};

#define DEBUG_LIST_ROWS 10
#define DEBUG_ITEM_SIZE 0x228

extern "C" {

extern RenderCtx *g_titleScene;

DebugListWork *jobGetWork(void);
void FUN_002c18e4(RenderCtx *context);
void renderCtxSelectStereoLayout(RenderCtx *context);
s32 FUN_002c5d80(u32 mode, u32 option);
void FUN_0032accc(void);
void FUN_002b76d0(const EffectColor *first, const EffectColor *second, const EffectColor *third,
                  const EffectColor *fourth, f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_0026281c(char *text, const u8 *item, s32 size);
void textDrawString(s32 layer, u32 color, const char *text, f32 x, f32 y, f32 scale, f32 a, f32 b);

/* Draws the debug list job: a screen-wide fade overlay, or (in list mode) a window of up to ten item
 * names with the cursor row marked. */
u32 FUN_00201830(void)
{
    DebugListWork *work = jobGetWork();

    if (work->listMode != 1) {
        renderCtxApplyTransforms(g_titleScene);
        renderCtxSelectStereoLayout(g_titleScene);
        FUN_0032accc();
        if (work->fade != 0.0f) {
            EffectColor color;

            color.red = 1.0f;
            color.green = 1.0f;
            color.blue = 1.0f;
            color.alpha = 1.0f;
            renderCtxSelectStereoLayout(g_titleScene);
            renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
            color.red = 1.0f;
            color.green = 1.0f;
            color.blue = 1.0f;
            color.alpha = work->fade;
            renderCtxSelectTexture(g_titleScene, 0);
            FUN_002b76d0(&color, &color, &color, &color, 0.0f, 0.0f, 400.0f, 240.0f, 0.9570312f);
            renderStackPop(&g_titleScene->stackA);
        }
    } else {
        s8 rows = DEBUG_LIST_ROWS;
        s32 first = 0;
        s32 i;

        if (work->itemCount < DEBUG_LIST_ROWS) {
            rows = work->itemCount;
            if (rows < 1) {
                renderCtxApplyTransforms(g_titleScene);
                FUN_002c18e4(g_titleScene);
                return 0;
            }
        } else if (work->cursor >= DEBUG_LIST_ROWS) {
            first = work->cursor - (DEBUG_LIST_ROWS - 1);
        }
        for (i = 0; i < rows; i++) {
            u32 color = 0xFFFFFFFF;
            char text[64];

            if (work->cursor == i + first) {
                textDrawString(2, 0xFF00FF, "> ", 8.0f, (f32)(i * 14), 0.1f, 0.0f, 1.0f);
                color = 0xFF00FF;
            }
            FUN_0026281c(text, work->items + (i + first) * DEBUG_ITEM_SIZE, 0x40);
            textDrawString(2, color, text, 20.0f, (f32)(i * 14), 0.1f, 1.0f, 1.0f);
        }
    }
    renderCtxApplyTransforms(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}

} /* extern "C" */
