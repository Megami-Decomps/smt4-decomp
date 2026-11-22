/* NON_MATCHING: 224 lines (142 by shape). The row body is retail's twice (same calls, constants and spills), written as
 * one inline helper: its by-value x/y give retail's stack copies and the row's own x/y registers, where the same body
 * written in place twice is 380 lines off. Open: the frame is 196 bytes against retail's 180, retail holds
 * &g_messageMain in r4 and &g_renderCtx in r8 at entry (swapped here), adds the queue rows' offset after the scaled
 * index (`add r0, r0, r4, lsl #2; add #0xC00; add #0x1BC`, the build pools 0xDBC), lays the queue-pending test out
 * after the found row, and converts the name's y before its x. */
#include "runtime/Stdio.h"
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "addon/LookupRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "camp/RenderCtxA.h"
#include "code/Code0018.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "gfx/StereoParallax.h"
#include "text/TextDraw.h"

extern "C" {

extern const char DAT_00530b54[];   /* "%s" */
extern const char DAT_00530b58[];   /* the level's number format */

s32 FUN_00184ed0(void);
f32 jobGetScalarValue();
void rt_aeabi_memclr(void *memory, s32 size);
void drawSetColorFromRGBA8(u32 packed);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);
void numberFontDrawFormatted(s32 font, s32 x, s32 y, s32 align, s32 digits, s32 z, const char *text);

enum {
    NOTICE_TABLE = 0x14,            /* the notification rows' sprite table */
    NOTICE_SPRITE_PANEL = 17,       /* MessageWindowA.sprites: the panel the stock rows hang from */
    NOTICE_SPRITE_CURSOR = 43,
    NOTICE_ROW_FRAME = 0xC34,       /* per-row layout entries: the frame, ... */
    NOTICE_ROW_LEVEL_LABEL = 0xC3B, /* the level label, */
    NOTICE_ROW_ICON = 0xC42,        /* the devil's icon, */
    NOTICE_ROW_NAME = 0xC49,        /* the name box, */
    NOTICE_ROW_LEVEL = 0xC52,       /* and the level digits (three entries per row) */
    NOTICE_LAYER = 0xBF
};

/* Draws one row of the demon notification list at (x, y): its frame (tinted while the list cursor is on it), the
 * devil's icon, level and name. */
static __inline void drawNoticeRow(MessageWindowA *banner, s32 row, PartySlotA *slot, s32 x, s32 y, f32 alpha)
{
    char level[0x50];
    char name[0x40];

    efctSetSpeed(alpha);
    TextureTableEntryIV *part = asdTMTexTableEntryAt(NOTICE_TABLE, row + NOTICE_ROW_FRAME);
    s32 partX = part->x + x;
    s32 partY = part->y + y;
    s32 frameId = 0xBBA;
    if (row == 0) {
        frameId = 0xBB9;
    }
    if (banner->queueCursorShown != 0 && FUN_00184ed0() == row) {
        drawSetColorFromRGBA8(0x57D8FFFF);
    }
    texDrawTableEntryAtStoredOrigin(2, NOTICE_TABLE, 0xC12, partX, partY, NOTICE_LAYER);
    if (banner->queueCursorShown != 0 && FUN_00184ed0() == row) {
        gxResetColorQuadToWhite();
    }
    texDrawTableEntryAtStoredOrigin(2, NOTICE_TABLE, frameId, partX, partY, NOTICE_LAYER);

    part = asdTMTexTableEntryAt(NOTICE_TABLE, row + NOTICE_ROW_ICON);
    partX = part->x + x;
    partY = part->y + y;
    uiDrawItemOrStatusIcon((s16)slot->record.id, partX, partY, 0xC4, 0);
    part = asdTMTexTableEntryAt(NOTICE_TABLE, row + NOTICE_ROW_LEVEL_LABEL);
    partX = part->x + x;
    partY = part->y + y;
    texDrawTableEntryAtStoredOrigin(2, NOTICE_TABLE, 0xBC2, partX, partY, NOTICE_LAYER);

    __2sprintf(level, DAT_00530b58, slot->record.level);
    part = asdTMTexTableEntryAt(NOTICE_TABLE, row * 3 + NOTICE_ROW_LEVEL);
    partX = part->x + x;
    partY = part->y + y;
    drawSetColorFromRGBA8(0xFFFFFFFF);
    numberFontDrawFormatted(0, partX, partY, 1, 3, 0xCE, level);
    gxResetColorQuadToWhite();

    /* The name, centred in its box. */
    rt_aeabi_memclr(name, sizeof(name));
    __2sprintf(name, DAT_00530b54, table01RecordLookupForContent(slot->record.id));
    part = asdTMTexTableEntryAt(NOTICE_TABLE, row + NOTICE_ROW_NAME);
    s32 width = fontMeasureLineAdvance(name, 2);
    s32 centred = part->x + (part->placement->width - width) / 2;
    textDrawString((f32)(x + centred), (f32)(part->y + y), 1.0f, 2, 0.0f, 0xFF, alpha, name);
}

/* Draws the demon notification list: a row for every occupied stock slot by rank (at its queue row's sprite while
 * it is queued, else under the panel), then the queued special rows, then the list cursor. */
void messageDrawDemonNoticeList(void)
{
    MessageWindowA *banner = g_messageMain.banner;
    s32 i;

    /* The panel's position and opacity are read here and not used: retail keeps the three calls. */
    vec2GetXInt(&g_messageMain.banner->sprites[NOTICE_SPRITE_PANEL]);
    vec2GetYInt(&g_messageMain.banner->sprites[NOTICE_SPRITE_PANEL]);
    vec2GetSpeed(&g_messageMain.banner->sprites[NOTICE_SPRITE_PANEL]);
    renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
    gxResetColorQuadToWhite();
    renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);

    s32 row = 0;
    for (s32 rank = 0; rank < 12; rank++) {
        PartySlotA *slot = FUN_00187068(rank);
        bool queued = false;
        if (!partySlotIsOccupied(slot)) {
            continue;
        }
        s32 x = vec2GetXInt(&g_messageMain.banner->sprites[NOTICE_SPRITE_PANEL]);
        s32 y = vec2GetYInt(&g_messageMain.banner->sprites[NOTICE_SPRITE_PANEL]);
        f32 alpha = vec2GetSpeed(&g_messageMain.banner->sprites[NOTICE_SPRITE_PANEL]);
        i = 0;
        while (i < 12) {
            if (i > banner->queueIndex) {
                break;
            }
            PartySlotA *queuedSlot = saveSlotFindById((u16)banner->queueIds[i]);
            if (banner->queueSpecial[i] == 0 && slot->id == queuedSlot->id) {
                x = vec2GetXInt(&g_messageMain.banner->queueSprites.rows[i]);
                y = vec2GetYInt(&g_messageMain.banner->queueSprites.rows[i]);
                alpha = vec2GetSpeed(&g_messageMain.banner->queueSprites.rows[i]);
                queued = true;
                break;
            }
            i++;
        }
        if (banner->queuePending != 0) {
            if (queued) {
                continue;
            }
            y += banner->queueRowOffsetY[rank];
        }
        x += (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        drawNoticeRow(banner, row, slot, x, y, alpha);
        row++;
    }

    i = 0;
    while (i < 12) {
        if (i > banner->queueIndex) {
            break;
        }
        if (banner->queueStates[i] != 0 && banner->queueSpecial[i] != 0 && banner->queueIds[i] != 0) {
            PartySlotA *slot = saveSlotFindById((u16)banner->queueIds[i]);
            s32 x = vec2GetXInt(&g_messageMain.banner->queueSprites.rows[i]);
            s32 y = vec2GetYInt(&g_messageMain.banner->queueSprites.rows[i]);
            f32 alpha = vec2GetSpeed(&g_messageMain.banner->queueSprites.rows[i]);
            drawNoticeRow(banner, row, slot, x, y, alpha);
            row++;
        }
        i++;
    }

    if (banner->queueCursorShown != 0) {
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        f32 savedAlpha = jobGetScalarValue();
        efctSetSpeed(1.0f);
        s32 selected = FUN_00184ed0();
        if (selected >= 0) {
            TextureTableEntryIV *part = asdTMTexTableEntryAt(NOTICE_TABLE, selected + NOTICE_ROW_FRAME);
            s32 x = part->x + (parallax - 2);
            s32 y = part->y - 2;
            efctSetSpeed(vec2GetSpeed(&banner->sprites[NOTICE_SPRITE_CURSOR]) * 1.0f);
            texDrawTableEntryAtStoredOrigin(2, NOTICE_TABLE, 0xBE2, x, y, 0xC9);
            texDrawTableEntryAtStoredOrigin(2, NOTICE_TABLE, 0xBE3, x, y, 0xC9);
            texDrawTableEntryAtStoredOrigin(2, NOTICE_TABLE, 0xBE4, x, y, 0xC9);
            gxResetColorQuadToWhite();
        }
        efctSetSpeed(savedAlpha);
    }
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    renderCtxPopState(g_renderCtx, 3);
}

} /* extern "C" */
