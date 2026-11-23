/* NON_MATCHING: control flow, block layout, calls and arguments are retail's. Retail's frame is 8 bytes larger
 * (0x74: the label at sp+40, the source list's address at sp+36, the top row at sp+104); in the row loop it
 * forms x + rowX in r3 and copies it to r6 (the build: r6, copied to r3); and for the cursor it keeps the
 * x position in r7 and puts y + cursorY in r6 (the build: r6, then r7 and r4). */
#include "camp/Unite/UniteWork.h"
#include "camp/CampStateQueries.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code0029_VariantA.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SearchTable.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum {
    UNITE_TEX_TABLE = 26,
    UNITE_SOURCE_ROW_ANCHOR = 182,   /* table entry of the first value row's position */
    UNITE_VALUE_CURSOR_ANCHOR = 200, /* table entry of the cursor's position on the first row */
    UNITE_VALUE_ROWS = 8,
    UNITE_ROW_SLIDE_FRAMES = 4,
    /* recordGetModeForId: how a touch region is being touched */
    TOUCH_MODE_PRESSED = 1,
    TOUCH_MODE_HELD = 2,
    TOUCH_MODE_DRAGGED = 6
};

struct FilterMenuA;

extern "C" {
u8 FUN_00240210(FilterMenuA *menu, s32 kind, char *label, s32 entry);

/* Draws the value list that opens out of the fusion menu's cursor row at (x, y): its eight rows (sliding out of
 * the cursor row during the first frames), their labels and, last, the cursor with the selected value. */
void uniteDrawValueListPanel(s32 x, s32 y, f32 fade)
{
    UniteWorkA *work = (UniteWorkA *)uniteGetWork();
    if (work == NULL) {
        return;
    }
    char text[64];
    /* What the menu row under the cursor filters by. */
    u32 kind = dataTableGetEntry24Byte0(
        work->optionNamesA.ids[resourceRunOperationIfUnblocked((Object *)&work->selectionLists.sourceList) +
                               listCursorGetRowIfUnblocked(&work->selectionLists.sourceList)]);

    efctSetSpeed(fade);
    const TextureTableEntryIV *from = asdTMTexTableEntryAt(
        UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(&work->selectionLists.sourceList) + UNITE_SOURCE_ROW_ANCHOR);
    if ((s32)work->transition.frame >= UNITE_ROW_SLIDE_FRAMES) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 181, x, y, 151);
    }
    s32 top = resourceRunOperationIfUnblocked((Object *)&work->selectionLists.partnerList);
    for (s32 row = 0; row < UNITE_VALUE_ROWS; row++) {
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(UNITE_TEX_TABLE, row + UNITE_SOURCE_ROW_ANCHOR);
        s32 frame = work->transition.frame;
        s32 rowX;
        s32 rowY;
        if (frame >= UNITE_ROW_SLIDE_FRAMES) {
            rowX = position->x;
            rowY = position->y;
        } else {
            rowX = from->x + (((position->x - from->x) << 12) / UNITE_ROW_SLIDE_FRAMES * frame >> 12);
            rowY = from->y + (((position->y - from->y) << 12) / UNITE_ROW_SLIDE_FRAMES * frame >> 12);
        }
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 177, x + rowX, y + rowY, 156);
        if ((s32)gridNavigationGetItemCount(&work->selectionLists.partnerList) > top + row) {
            const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 178);
            textDrawString((f32)(anchor->x + x + rowX), (f32)(anchor->y + y + rowY), 0.0f, 2, 0.0f,
                           FUN_00240210((FilterMenuA *)work, kind, text, top + row) ? 0x57D8FFFF : 0xFFFFFFFF, fade,
                           text);
        }
    }

    /* The cursor slides from the menu row it opened on to the selected value. */
    from = asdTMTexTableEntryAt(
        UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(&work->selectionLists.sourceList) + UNITE_VALUE_CURSOR_ANCHOR);
    s32 selected = resourceRunOperationIfUnblocked((Object *)&work->selectionLists.partnerList) +
                   listCursorGetRowIfUnblocked(&work->selectionLists.partnerList);
    const TextureTableEntryIV *to = asdTMTexTableEntryAt(
        UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(&work->selectionLists.partnerList) + UNITE_VALUE_CURSOR_ANCHOR);
    s32 frame = work->transition.frame;
    s32 cursorX;
    s32 cursorY;
    if (frame >= UNITE_ROW_SLIDE_FRAMES) {
        cursorX = to->x;
        cursorY = to->y;
    } else {
        cursorX = from->x + (((to->x - from->x) << 12) / UNITE_ROW_SLIDE_FRAMES * frame >> 12);
        cursorY = from->y + (((to->y - from->y) << 12) / UNITE_ROW_SLIDE_FRAMES * frame >> 12);
    }
    efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
    cursorX += x;
    cursorY += y;
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 190, cursorX, cursorY, 171);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 191, cursorX, cursorY, 171);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 192, cursorX, cursorY, 171);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 193, cursorX, cursorY, 181);
    u32 touch = recordGetModeForId(
        work->selectionLists.valueRowRegions[listCursorGetRowIfUnblocked(&work->selectionLists.partnerList)]);
    if (touch == TOUCH_MODE_PRESSED || touch == TOUCH_MODE_HELD || touch == TOUCH_MODE_DRAGGED) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 647, cursorX, cursorY, 181);
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 583, cursorX, cursorY, 181);
    }
    if (touch == TOUCH_MODE_PRESSED || touch == TOUCH_MODE_HELD || touch == TOUCH_MODE_DRAGGED) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 644, cursorX, cursorY, 186);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 645, cursorX, cursorY, 186);
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 194, cursorX, cursorY, 186);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 195, cursorX, cursorY, 186);
    }
    efctSetSpeed(vec2GetSpeed(&work->sprites.slide) * fade);
    if (touch == TOUCH_MODE_PRESSED || touch == TOUCH_MODE_HELD || touch == TOUCH_MODE_DRAGGED) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 646, cursorX + vec2GetXInt(&work->sprites.slide),
                                        cursorY + vec2GetYInt(&work->sprites.slide), 191);
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 196, cursorX + vec2GetXInt(&work->sprites.slide),
                                        cursorY + vec2GetYInt(&work->sprites.slide), 191);
    }
    efctSetSpeed(fade);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 197);
    u32 color = FUN_00240210((FilterMenuA *)work, kind, text, selected) ? 0x57D8FFFF : 0x9FE7FFFF;
    if (touch == TOUCH_MODE_PRESSED || touch == TOUCH_MODE_HELD || touch == TOUCH_MODE_DRAGGED) {
        color = 0xF5FF9FFF;
    }
    textDrawString((f32)(anchor->x + cursorX), (f32)(anchor->y + cursorY), 0.25f, 3, 0.0f, color, fade, text);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
