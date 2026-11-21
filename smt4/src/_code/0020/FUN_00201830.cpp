/* NON_MATCHING: 14 lines, all in the list branch: the cursor marker's colour copy (mov r7, fp) is scheduled after its draw call's arguments, and the item address takes r0/r1 the other way round. Both colour resets use effectColorSet: field stores for the first one give 6, only by moving registers in the unrelated list branch. */
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/ColoredQuad.h"

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


DebugListWork *jobGetWork(void);
void renderCtxResetColorScale(RenderCtx *context);
void renderCtxSelectStereoLayout(RenderCtx *context);
s32 renderCtxPackPassFlags(u32 mode, u32 option);
void FUN_0032accc(void);
void FUN_0026281c(char *text, const u8 *item, s32 size);

/* Draws the debug list job: a screen-wide fade overlay, or (in list mode) a window of up to ten item
 * names with the cursor row marked. */
u32 FUN_00201830(void)
{
    DebugListWork *work = jobGetWork();

    if (work->listMode == 1) {
        s32 rows = DEBUG_LIST_ROWS;
        s32 first = 0;
        s32 i;

        if (work->itemCount < DEBUG_LIST_ROWS) {
            rows = work->itemCount;
        } else if (work->cursor >= DEBUG_LIST_ROWS) {
            first = work->cursor - (DEBUG_LIST_ROWS - 1);
        }
        for (i = 0; i < rows; i++) {
            u32 color = 0xFFFFFFFF;
            char text[64];

            if (work->cursor == i + first) {
                textDrawString(8.0f, (f32)(i * 14), 0.1f, 2, 0.0f, 0xFF00FF, 1.0f, ">");
                color = 0xFF00FF;
            }
            FUN_0026281c(text, work->items + (i + first) * DEBUG_ITEM_SIZE, 0x40);
            textDrawString(20.0f, (f32)(i * 14), 0.1f, 2, 1.0f, color, 1.0f, text);
        }
    } else {
        renderCtxApplyTransforms(g_titleScene);
        renderCtxSelectStereoLayout(g_titleScene);
        FUN_0032accc();
        if (work->fade != 0.0f) {
            EffectColor color;

            effectColorSet(&color, 1.0f, 1.0f, 1.0f, 1.0f);
            renderCtxSelectStereoLayout(g_titleScene);
            renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
            effectColorSet(&color, 1.0f, 1.0f, 1.0f, work->fade);
            renderCtxSelectTexture(g_titleScene, 0);
            gfxDrawQuadFourColors(0.0f, 0.0f, 400.0f, 240.0f, &color, &color, &color, &color, 0.95703125f);
            renderStackPop(&g_titleScene->stackA);
        }
    }
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
