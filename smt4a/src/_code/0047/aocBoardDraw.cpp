/* NON_MATCHING: typed port of its SMT IV twin aocBoardDraw (170 raw / 68 shape rows, 379 rows against retail's 381).
 * The calls, the saved registers and the guard returns (`ands r0, r0, #16`, the shared exit) are retail's. What
 * differs: retail's frame is 124 bytes against 92 (the spinner's cells at sp+8, its two tail steps at sp+104/108, the
 * parallax at sp+112: 24 unused bytes behind the cells and 8 at the top that no local here accounts for), which
 * moves every sp offset; the first blend-state set keeps the packed state in r2 and the depth in r0 where the build
 * (and retail's second set) keeps the state in r0; both pops load the context into r0 and form the stack's address
 * in r4 (`ldr r0; add r4, r0, #4096`); the third guard returns the masked flag (`ands r0, r0, #32`) through the
 * shared exit; and the faded line loads the point's y before it adds the parallax to x. */
#include "ui/UiSpriteApi.h"
#include "addon/AocBoard.h"
#include "shard/TextureDrawCall.h"
#include "shard/JobWork.h"
#include "camp/RenderCtxA.h"
#include "code/Code0023_Smt4a.h"
#include "gfx/StereoParallax.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantC.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The board's texture table and its entries. */
enum {
    AOC_BOARD_TABLE = 8,
    AOC_BOARD_FRAME = 0x106,
    AOC_BOARD_CURSOR = 0xDE,            /* drawn over AOC_BOARD_CURSOR + 1 */
    AOC_BOARD_ORIGIN_LONG = 0xE0,       /* the cursor's origin with five or more lines */
    AOC_BOARD_ORIGIN = 0xE1,
    AOC_BOARD_LINES_LONG = 0x69,        /* the first line's point with five or more lines */
    AOC_BOARD_LINES = 0x6B,
    AOC_BOARD_SPINNER_OFF = 0x154,
    AOC_BOARD_SPINNER_HEAD = 0x155,
    AOC_BOARD_SPINNER_TAIL = 0x156
};

enum {
    AOC_BOARD_SPINNER_SIDE = 3,
    AOC_BOARD_SPINNER_STEPS = 8,
    AOC_BOARD_SPINNER_FRAMES = 5        /* frames each step lasts */
};

/* unit-local: the spinner's nine cell offsets exist only as this function's table */
struct AocBoardSpinnerCells {
    s32 offsets[AOC_BOARD_SPINNER_SIDE * AOC_BOARD_SPINNER_SIDE][2];
};

extern "C" {

extern const AocBoardSpinnerCells DAT_00527134;
extern f32 DAT_00570284;
void renderCtxResetColorScale(RenderCtxA *context);
void effectRenderTransformedInstance(UiSpriteState *element, f32 value);
void textDrawRangeFaded(const void *text, s32 x, s32 y, s32 fade, u32 start, s32 length, f32 scale);

/* Draws the AOC board: its frame and the two animated panels, then, once the opening animation is over, the
 * page cursor or the busy spinner and the message lines. Returns 0. */
s32 aocBoardDraw(u32 job)
{
    AocBoardWork *work = (AocBoardWork *)jobGetWork(job);
    if (!(work->owner.control.flags & 0x10))
        return 0;
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, DAT_00570284);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(vec2GetSpeed(&work->sprites[0]));
    texDrawTableEntryAtStoredOrigin(2, AOC_BOARD_TABLE, AOC_BOARD_FRAME, 0, 0, 6);
    efctSetSpeed(1.0f);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    effectRenderTransformedInstance(&work->sprites[2], (f32)parallax);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
    effectRenderTransformedInstance(&work->sprites[0], (f32)parallax);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);

    if (uiSpriteGetCompletionState(&work->sprites[0]) == 0)
        return 0;
    if (uiSpriteGetScaleDone(&work->sprites[0]) == 0)
        return 0;
    if (!(work->owner.control.flags & 0x20))
        return 0;

    s32 x = vec2GetXInt(&work->sprites[1]) + parallax;
    s32 y = vec2GetYInt(&work->sprites[1]);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));

    TextureTableEntryIV *origin;
    if ((s32)work->owner.control.resource <= 4) {
        origin = asdTMTexTableEntryAt(AOC_BOARD_TABLE, AOC_BOARD_ORIGIN);
    } else {
        origin = asdTMTexTableEntryAt(AOC_BOARD_TABLE, AOC_BOARD_ORIGIN_LONG);
    }
    if (work->owner.enabled == 1) {
        texDrawTableEntryAtStoredOrigin(2, AOC_BOARD_TABLE, AOC_BOARD_CURSOR + 1, origin->x + x, origin->y + y, 19);
        texDrawTableEntryAtStoredOrigin(2, AOC_BOARD_TABLE, AOC_BOARD_CURSOR, origin->x + x, origin->y + y, 21);
    } else if (work->owner.enabled == 2) {
        /* Two lit cells half a turn apart run round the eight steps, each with a tail one step behind. */
        AocBoardSpinnerCells cells = DAT_00527134;
        s32 step = work->owner.spinnerFrame / AOC_BOARD_SPINNER_FRAMES;
        s32 head = step % AOC_BOARD_SPINNER_STEPS;
        s32 tail = (head + 7) % AOC_BOARD_SPINNER_STEPS;
        s32 secondHead = (step + 4) % AOC_BOARD_SPINNER_STEPS;
        s32 secondTail = (secondHead + 7) % AOC_BOARD_SPINNER_STEPS;
        for (s32 row = 0; row < AOC_BOARD_SPINNER_SIDE; row++) {
            for (s32 column = 0; column < AOC_BOARD_SPINNER_SIDE; column++) {
                s32 cell = row * AOC_BOARD_SPINNER_SIDE + column;
                s32 cellX = origin->x + cells.offsets[cell][0];
                s32 cellY = cells.offsets[cell][1] + origin->y;
                if (head == cell || secondHead == cell) {
                    texDrawTableEntryAtStoredOrigin(2, AOC_BOARD_TABLE, AOC_BOARD_SPINNER_HEAD, cellX, cellY, 21);
                } else if (tail == cell || secondTail == cell) {
                    texDrawTableEntryAtStoredOrigin(2, AOC_BOARD_TABLE, AOC_BOARD_SPINNER_TAIL, cellX, cellY, 21);
                } else {
                    texDrawTableEntryAtStoredOrigin(2, AOC_BOARD_TABLE, AOC_BOARD_SPINNER_OFF, cellX, cellY, 21);
                }
            }
        }
    }

    u32 color = FUN_0023b4a4(5);
    s32 firstLine;
    if ((s32)work->owner.control.resource <= 4) {
        firstLine = AOC_BOARD_LINES;
    } else {
        firstLine = AOC_BOARD_LINES_LONG;
    }
    if (work->owner.control.flags & 0x40) {
        for (s32 line = 0; line < (s32)work->owner.control.resource; line++) {
            TextureTableEntryIV *point = asdTMTexTableEntryAt(AOC_BOARD_TABLE, firstLine + line);
            s32 lineX = point->x + parallax;
            textDrawRangeFaded(work->owner.text, lineX, point->y, 19, 6, line, 1.0f);
        }
    } else {
        for (s32 line = 0; line < (s32)work->owner.control.resource; line++) {
            TextureTableEntryIV *point = asdTMTexTableEntryAt(AOC_BOARD_TABLE, firstLine + line);
            s32 lineX = point->x + parallax;
            s32 lineY = point->y;
            textDrawString((f32)lineX, (f32)lineY, 0.0f, 3, 0.0f, color, 1.0f, work->owner.lines[line]);
        }
    }
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    skinObjectUpdateMatrices((SkinObject *)g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
