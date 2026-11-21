/* NON_MATCHING: 32 rows in two places; same calls, constants, frame (0x424, the message-id table at sp+0x408,
 * the trailing pair at sp+0x418) and block layout as retail. (1) Retail reads the message frame's y and width
 * before its x, converts y first and loads the 0.5 depth before the layer; the plain call reads x first.
 * (2) Retail computes and stores the first trailing index before the second lit index; the pair's initialiser
 * runs after both lit indices.
 * The trailing indices are a brace-initialised pair: as two scalars they are spilled and the table moves behind
 * six unused spill slots (frame 0x440), unless the table is declared with the first locals, which copies it at
 * entry instead of after the sprite. The layout is fragile: single-use locals for the frame's width and y fix
 * (1) but bring the unused slots back. */
#include "common.h"
#include "addon/aocMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "shard/JobWork.h"
#include "addon/aocApplication.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* The job work area (only the fields read here). */
typedef struct LoadingWork {
    /* 0x0000 */ u8 unk0000[0x1798];
    /* 0x1798 */ u32 frame;
    /* 0x179C */ s32 messageIndex;
} LoadingWork;

/* Splits encoded text into at most eight 64-character lines; returns the line count. */
s32 FUN_00473754(void *aoc, const u16 *text, u16 (*lines)[64]);
/* Measures `text` in the font of `layer` (by drawing it off screen). */
s32 textMeasureOnLayer(const char *text, u32 layer);

/* Draws the loading message with its spinning marker: the message text for the current index,
 * centred in its frame, and a 3x3 grid of dots where the lit pair rotates every five frames.
 * Always returns 0. */
s32 FUN_00478ac4(u32 job)
{
    LoadingWork *work = (LoadingWork *)jobGetWork(job);
    AocMain *aoc = g_aocMain;
    u32 frame = work->frame;
    u16 lines[8][64];

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    texDrawCompositeSprite(2, 0x2F, 5, 0, 0, 0x81);
    u32 messageIds[4] = {0x6E, 0x6F, 0x70, 0x71};
    const u16 *body = (const u16 *)FUN_00473910(aoc, messageIds[work->messageIndex]);

    FUN_00473754(aoc, body, lines);
    s32 width = textMeasureOnLayer((const char *)lines[0], 3);
    TextureTableEntryIV *frameLayout = asdTMTexTableEntryAt(0x2F, 0x2D);
    s32 left = (frameLayout->x + (frameLayout->placement->width >> 1) - (width >> 1)) - 9;

    textDrawString((f32)left, (f32)frameLayout->y, 0.5f, 3, 0.0f, 0x57D8FFFF, 1.0f, (const char *)lines[0]);

    /* The lit dots sit opposite each other and advance one place every five frames; each trails a dimmer one
     * (the place before it). */
    s32 step = frame / 5;
    s32 first = step % 8;
    s32 second = (step + 4) % 8;
    s32 trail[2] = {(first + 7) % 8, (second + 7) % 8};

    for (s32 row = 0; row < 3; row++) {
        for (s32 column = 0; column < 3; column++) {
            s32 index = row * 3 + column;
            s32 originX = asdTMTexTableEntryAt(0x2F, 0x31)->x;
            TextureTableEntryIV *dot = asdTMTexTableEntryAt(0x2F, index + 0x31);
            s32 x = (dot->x - originX) + (left + width) + 4;
            s32 y = dot->y;

            if (first == index || second == index) {
                texDrawTableEntryAtStoredOrigin(2, 8, 0x155, x, y, 0x81);
            } else if (trail[0] == index || trail[1] == index) {
                texDrawTableEntryAtStoredOrigin(2, 8, 0x156, x, y, 0x81);
            } else {
                texDrawTableEntryAtStoredOrigin(2, 8, 0x154, x, y, 0x81);
            }
        }
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}

}
