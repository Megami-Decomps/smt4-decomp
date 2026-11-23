/* NON_MATCHING: control flow, calls, arguments and registers are retail's but for three things (73 rows, 55 by
 * shape). Retail's frame is 8 bytes larger: it keeps the list pointer at [sp, #60] behind three unused words
 * (built: at [sp, #48] before one unused word), with the name buffer right after it in both. For the scroll bar
 * retail holds the last argument's 0 in r3 and stores it on its own (built: in ip, in one stm with the layer), and
 * it loads the cursor row's mark x after the slot's. */
#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "camp/CampStateQueries.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "gamedata/GameDataAccess.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match1_Table24Record.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 uiSearchPrimary(ScrollSelection *list);
Table24Record *dataTable24FindById(u32 id);
u8 bitTableIndexIsClear(u32 index);
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                  u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                  u32 arrowBRegion, s32 layer, s32 horizontal);

enum {
    UNITE_SPRITES = 26,         /* the fusion screen's sprite table */
    OPTION_ROW_SLOT = 0x2e,     /* first of the row slots */
    OPTION_CURSOR_SLOT = 0x3f   /* first of the cursor slots, one per row */
};

/* Draws the fusion screen's option list at (x, y) with the given opacity: the frame, every row but the cursor's
 * with its name and "new" mark, then the cursor row with its highlight (the pressed set while its button is
 * touched), shine and name, and the scroll bar. */
void uniteDrawPanelRows(s32 x, s32 y, f32 opacity)
{
    UniteWorkA *work = (UniteWorkA *)uniteGetWork();
    char name[0x40];

    if (work == NULL) {
        return;
    }
    efctSetSpeed(opacity);
    texDrawCompositeSprite(2, UNITE_SPRITES, 6, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d2, x, y, 0x6a);

    s32 top = resourceRunOperationIfUnblocked((Object *)&work->optionListA.list);
    for (s32 row = 0; row < uiSearchPrimary(&work->optionListA.list); row++) {
        if (uiSpriteGetCompletionState(&work->sprites.open) != 0 && listCursorGetRowIfUnblocked(&work->optionListA.list) == row) {
            continue;
        }
        const TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_SPRITES, row + OPTION_ROW_SLOT);
        Table24Record *record = dataTable24FindById(work->optionListA.ids[top + row]);
        if (record == NULL) {
            continue;
        }
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d3, slot->x + x, slot->y + y, 0x6a);
        sprintf(name, "%s", record->name);
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d5);
        textDrawString((f32)(slot->x + label->x + x), (f32)(slot->y + label->y + y), 0.5859375f, 2, 0.0f, 0xffffffff,
                       opacity, name);
        if (bitTableIndexIsClear(work->optionListA.ids[top + row]) != 0) {
            const TextureTableEntryIV *mark = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d4);
            texDrawCompositeSprite(2, UNITE_SPRITES, 7, slot->x + mark->x + x, mark->y + slot->y + y, 0x6a);
        }
    }

    top = resourceRunOperationIfUnblocked((Object *)&work->optionListA.list);
    s32 selected = listCursorGetRowIfUnblocked(&work->optionListA.list) + top;
    Table24Record *record = dataTable24FindById(work->optionListA.ids[selected]);
    if (uiSpriteGetCompletionState(&work->sprites.open) != 0 && record != NULL) {
        const TextureTableEntryIV *slot =
            asdTMTexTableEntryAt(UNITE_SPRITES, listCursorGetRowIfUnblocked(&work->optionListA.list) + OPTION_CURSOR_SLOT);
        efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x38, slot->x + x, slot->y + y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x39, slot->x + x, slot->y + y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3a, slot->x + x, slot->y + y, 0x79);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3b, slot->x + x, slot->y + y, 0x7e);
        s32 touch = recordGetModeForId(work->touchA.rowRegions[listCursorGetRowIfUnblocked(&work->optionListA.list)]);
        if (touch == 1 || touch == 2 || touch == 6) {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x27f, slot->x + x, slot->y + y, 0x7e);
        } else {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x245, slot->x + x, slot->y + y, 0x7e);
        }
        if (touch == 1 || touch == 2 || touch == 6) {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x27c, slot->x + x, slot->y + y, 0x7e);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x27d, slot->x + x, slot->y + y, 0x7e);
        } else {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3c, slot->x + x, slot->y + y, 0x7e);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3d, slot->x + x, slot->y + y, 0x7e);
        }

        /* The shine slides across the row. */
        efctSetSpeed(vec2GetSpeed(&work->sprites.slide) * opacity);
        if (touch == 1 || touch == 2 || touch == 6) {
            s32 shineY = vec2GetYInt(&work->sprites.slide) + y + slot->y;
            s32 shineX = vec2GetXInt(&work->sprites.slide) + x + slot->x;
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x27e, shineX, shineY, 0x83);
        } else {
            s32 shineY = vec2GetYInt(&work->sprites.slide) + y + slot->y;
            s32 shineX = vec2GetXInt(&work->sprites.slide) + x + slot->x;
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3e, shineX, shineY, 0x83);
        }
        efctSetSpeed(opacity);

        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d6, slot->x + x, slot->y + y, 0x83);
        sprintf(name, "%s", record->name);
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d8);
        if (touch == 1 || touch == 2 || touch == 6) {
            textDrawString((f32)(slot->x + label->x + x), (f32)(slot->y + label->y + y), 0.48828125f, 3, 0.0f,
                           SKILL_NAME_COLOR_PRESSED, 1.0f, name);
        } else {
            textDrawString((f32)(slot->x + label->x + x), (f32)(slot->y + label->y + y), 0.48828125f, 3, 0.0f,
                           SKILL_NAME_COLOR, 1.0f, name);
        }
        if (bitTableIndexIsClear(work->optionListA.ids[selected]) != 0) {
            const TextureTableEntryIV *mark = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d7);
            texDrawCompositeSprite(2, UNITE_SPRITES, 7, mark->x + slot->x + x, slot->y + mark->y + y, 0x83);
        }
    }
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x272, x, y, 0x97);
    uiDrawListScrollBar((Object *)&work->optionListA.list, x, y, UNITE_SPRITES, 0x23, 0x24, 0x25, 0x1f, 0x21, 0x20, 0x22,
                        work->touchA.scrollThumbRegion, work->touchA.scrollUpRegion, work->touchA.scrollDownRegion,
                        0x97, 0);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
