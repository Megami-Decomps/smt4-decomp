/* NON_MATCHING: retail loads the text colour 0xF49800FF into a saved register before the message lookup and
 * keeps a 36-byte frame above the text buffer (the build: 64); the rest is the same. */
#include "addon/LoadingTask.h"
#include "addon/aocMain.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/AnimatedMessage.h"
#include "shard/JobWork.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
const void *FUN_0023478c(AocMain *main, u32 index); // declcheck: local (returns the message entry FUN_002347b8 splits; code/Code0023_VariantB.h declares it void)
s32 FUN_002347b8(AocMain *main, const void *entry, void *strings);
s32 textMeasureOnLayer(const void *text, s32 layer);

/* Draws the add-on loading indicator (the "Aoc loading DOWN" task): the request's message and a
 * three-by-three grid of dots whose two highlighted pairs chase each other round the grid. */
s32 aocLoadingTaskDraw(u32 task)
{
    AocLoadingTask *loading = (AocLoadingTask *)jobGetWork(task);
    AocMain *main = g_aocMain;
    u32 frame = loading->frame;
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    texDrawCompositeSprite(2, 0x3A, 5, 0, 0, 0x81);

    u32 messages[4] = {0x6E, 0x6F, 0x70, 0x71};
    u16 text[8][64];
    FUN_002347b8(main, FUN_0023478c(main, messages[loading->request]), text);
    s32 textWidth = textMeasureOnLayer(text, 3);
    const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x3A, 0x2D);
    s32 x = label->x + (label->placement->width >> 1) - (textWidth >> 1) - 9;
    textDrawString((f32)x, (f32)label->y, 0.5f, 3, 0.0f, 0xF49800FF, 1.0f, (const char *)text);

    s32 step = frame / 5;
    s32 lead = step % 8;
    s32 leadTail = (lead + 7) % 8;
    s32 chase = (step + 4) % 8;
    s32 chaseTail = (chase + 7) % 8;
    for (s32 row = 0; row < 3; row++) {
        for (s32 column = 0; column < 3; column++) {
            s32 dot = row * 3 + column;
            s32 left = asdTMTexTableEntryAt(0x3A, 0x31)->x;
            const TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x3A, dot + 0x31);
            s32 dotY = entry->y;
            s32 dotX = (entry->x - left) + (x + textWidth) + 4;
            if (lead == dot || chase == dot) {
                texDrawTableEntryAtStoredOrigin(2, 0xE, 0x155, dotX, dotY, 0x81);
            } else if (leadTail == dot || chaseTail == dot) {
                texDrawTableEntryAtStoredOrigin(2, 0xE, 0x156, dotX, dotY, 0x81);
            } else {
                texDrawTableEntryAtStoredOrigin(2, 0xE, 0x154, dotX, dotY, 0x81);
            }
        }
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}

} /* extern "C" */
