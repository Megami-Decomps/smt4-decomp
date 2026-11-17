/* NON_MATCHING: task handle and signed rotating-marker remainder contract restored; message-ID initialization lifetime and marker-grid temporaries still differ. */
#include "common.h"
#include "addon/aocMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
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

s32 renderCtxPackPassFlags(s32 a, s32 b);
void texDrawCompositeSprite(u32 a, u32 b, u32 id, s32 x, s32 y, u32 tag);
void FUN_00473754(AocMain *aoc, s32 text, u8 buffer[1024]);
s32 curveEvaluateStandard(u8 *buffer, u32 kind);

/* Draws the loading message with its spinning marker: the message text for the current index,
 * centred in its frame, and a 3x3 grid of dots where the lit pair rotates every five frames.
 * Always returns 0. */
s32 FUN_00478ac4(u32 job)
{
    LoadingWork *work = (LoadingWork *)jobGetWork(job);
    AocMain *aoc = g_aocMain;
    u32 frame = work->frame;
    u8 text[1024];
    u32 messageIds[4] = {0x6E, 0x6F, 0x70, 0x71};

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    texDrawCompositeSprite(2, 0x2F, 5, 0, 0, 0x81);
    s32 body = FUN_00473910(aoc, messageIds[work->messageIndex]);

    FUN_00473754(aoc, body, text);
    s32 width = curveEvaluateStandard(text, 3);
    TextureTableEntryIV *frameLayout = asdTMTexTableEntryAt(0x2F, 0x2D);
    s32 left = (frameLayout->x + (frameLayout->placement->width >> 1) - (width >> 1)) - 9;

    textDrawString(3, 0x57D8FFFF, (const char *)text, (f32)left, (f32)frameLayout->y, 0.5f, 0.0f, 1.0f);
    s32 step = frame / 5;
    s32 first = step % 8;
    s32 second = (step + 4) % 8;
    s32 firstTrail = (first + 7) % 8;
    s32 secondTrail = (second + 7) % 8;

    for (s32 row = 0; row < 3; row++) {
        for (s32 column = 0; column < 3; column++) {
            u32 index = row * 3 + column;
            TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x2F, 0x31);
            TextureTableEntryIV *dot = asdTMTexTableEntryAt(0x2F, index + 0x31);
            s32 x = (dot->x - origin->x) + left + width + 4;

            if (index == first || index == second) {
                texDrawTableEntryAtStoredOrigin(2, 8, 0x155, x, dot->y, 0x81);
            } else if (index == firstTrail || index == secondTrail) {
                texDrawTableEntryAtStoredOrigin(2, 8, 0x156, x, dot->y, 0x81);
            } else {
                texDrawTableEntryAtStoredOrigin(2, 8, 0x154, x, dot->y, 0x81);
            }
        }
    }
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}

}
