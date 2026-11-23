/* NON_MATCHING: 124 raw / 76 shape; same calls, blocks and registers as retail except in three places.
 * Retail's frame is 44 bytes against this build's 20: the same three addresses are spilled (the state byte's,
 * the fill sprite's and the glow sprite's) but each has a slot of its own among six unused ones, where this
 * build shares one slot between the two sprites; every stack offset after `sub sp` differs for that. The two
 * fades multiply as `vmul s0, s16, s0` (opacity first; built: the getter's result first, whichever way the
 * product is written). In state 2, the second blend-state change keeps the packed state in r1 (`mov r1, r0`
 * before the depth load); built: in r0 like the other five. */
#include "ui/UiSpriteApi.h"
#include "battle/ActorCardAnimations.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

f32 jobGetScalarValue(void);
void pairSetHalves(UiSpriteState *sprite, s32 x, s32 y); // declcheck: local (sys/RuntimeObjects_Smt4a.h declares it for an opaque Holder with u16 halves; the sprite callers pass signed centres, as btlPartnerMessageSetSlot does)
void fadeObjectResetIfActive(UiSpriteState *sprite);

enum {
    GAUGE_TABLE = 0xd,
    GAUGE_SEGMENTS = 8,
    GAUGE_FIRST_ROW = 6          /* segments from this one on take their places from a second run of entries */
};

/* The full gauge (state 4): its label and all eight segments, each with its own sprite's opacity. A function of
 * its own in retail, inlined: this path copies x into r8 and the display into fp instead of using the caller's,
 * and its saved opacity ends in the caller's tail call. Written in place the build is 448 lines off. */
static void gaugeDrawFull(ActorCardAnimationsA *ui, s32 x, s32 y, s32 lift)
{
    f32 savedAlpha = jobGetScalarValue();
    f32 alpha = vec2GetSpeed(&ui->gaugeSegments[5]);
    efctSetSpeed(alpha);
    TextureTableEntryIV *label = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfc0);
    texDrawTableEntryAtStoredOrigin(2, GAUGE_TABLE, 0xfbd, label->x + x, label->y + y - lift, 0x47);
    efctSetSpeed(alpha);
    for (s32 i = 0; i < GAUGE_SEGMENTS; i++) {
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfb0);
        if (i >= GAUGE_FIRST_ROW) {
            entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfbf);
        }
        f32 segmentAlpha = vec2GetSpeed(&ui->gaugeSegments[i]);
        efctSetSpeed(segmentAlpha);
        texDrawTableEntryAtStoredOrigin(2, GAUGE_TABLE, 0xfaf, entry->x + x, entry->y + y - lift, 0x42);
        efctSetSpeed(segmentAlpha);
    }
    efctSetSpeed(savedAlpha);
}

/* Draws the battle party display's eight-segment gauge at (x, y - lift): the empty segments, the filled ones
 * (the newest fading in), and in states 2 and 3 the glow over them with its animated sprites. */
void btlPartyDisplayDrawGauge(ActorCardAnimationsA *ui, s32 x, s32 y, s32 lift, f32 alpha)
{
    s32 i;
    TextureTableEntryIV *entry;

    for (i = 0; i < GAUGE_SEGMENTS; i++) {
        entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfa2);
        if (i >= GAUGE_FIRST_ROW) {
            entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfbd);
        }
        texDrawTableEntryAtStoredOrigin(2, GAUGE_TABLE, 0xfa1, entry->x + x, entry->y + y - lift, 0x42);
    }
    if (ui->gaugeState == 4) {
        gaugeDrawFull(ui, x, y, lift);
        return;
    }

    s32 filled = ui->gaugeFilled;
    for (i = 0; i < filled; i++) {
        entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfb0);
        if (i >= GAUGE_FIRST_ROW) {
            entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfbf);
        }
        if (i == filled - 1 && uiSpriteGetCompletionState(&ui->gaugeFill) == 0) {
            efctSetSpeed(alpha * vec2GetSpeed(&ui->gaugeFill));
        }
        texDrawTableEntryAtStoredOrigin(2, GAUGE_TABLE, 0xfaf, entry->x + x, entry->y + y - lift, 0x42);
        efctSetSpeed(alpha);
    }

    if (ui->gaugeState == 2 || ui->gaugeState == 3) {
        efctSetSpeed(alpha * vec2GetSpeed(&ui->gaugeGlow));
        for (i = 0; i < GAUGE_SEGMENTS; i++) {
            entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfb7);
            if (i >= GAUGE_FIRST_ROW) {
                entry = asdTMTexTableEntryAt(GAUGE_TABLE, i + 0xfc1);
            }
            texDrawTableEntryAtStoredOrigin(2, GAUGE_TABLE, 0xfb6, entry->x + x, entry->y + y - lift, 0x42);
        }
        efctSetSpeed(alpha);

        UiSpriteState *spark = &ui->gaugeSpark;
        if (ui->gaugeState == 2) {
            entry = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfc1);
            pairSetHalves(&ui->gaugeGlow, (s16)(entry->x + x), (s16)(entry->y + y));
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
            fadeObjectResetIfActive(&ui->gaugeGlow);
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));

            entry = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfc2);
            TextureTableEntryIV *origin = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfbf);
            pairSetHalves(spark, (s16)(entry->x + x - origin->x), (s16)(entry->y + y - origin->y));
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
            fadeObjectResetIfActive(spark);
            renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));

            entry = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfc0);
            pairSetHalves(&ui->gaugeBadge, (s16)(entry->x + x), (s16)(entry->y + y));
            fadeObjectResetIfActive(&ui->gaugeBadge);
        } else if (ui->gaugeState == 3) {
            if (ui->state != 0x27) {
                entry = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfc1);
                TextureTableEntryIV *origin = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfbf);
                pairSetHalves(&ui->gaugeGlow, (s16)(entry->x + x), (s16)(entry->y + y - lift));
                pairSetHalves(spark, (s16)(entry->x + x - origin->x), (s16)(entry->y + y - lift - origin->y));
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
                fadeObjectResetIfActive(spark);
                renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
            }
            entry = asdTMTexTableEntryAt(GAUGE_TABLE, 0xfc0);
            texDrawTableEntryAtStoredOrigin(2, GAUGE_TABLE, 0xfbd, entry->x + x, entry->y + y - lift, 0x47);
        }
    }
    efctSetSpeed(alpha);
}

} /* extern "C" */
