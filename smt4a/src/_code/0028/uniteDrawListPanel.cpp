/* NON_MATCHING: control flow, calls and arguments are retail's. Retail keeps the fade in s16 and loads 1.0 into
 * s18 at entry (copying it to s17 for the row loop), keeps the list pointer in r4 as well as on the stack, tests
 * the mode in r1 and uses other scratch registers for the two slide interpolations. */
#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UnitePreferences.h"
#include "camp/CampStateQueries.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "gamedata/SearchTable.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum {
    UNITE_TEX_TABLE = 26,
    UNITE_ROW_ANCHOR = 169,   /* table entry of the first list row's position */
    UNITE_ROW_SLIDE_FRAMES = 4,
    /* dataTableGetEntry24Byte1: what a row of the fusion menu is */
    UNITE_ROW_ENTRY = 0,
    UNITE_ROW_SEARCH = 1,
    UNITE_ROW_OPTION = 2
};

extern "C" {
void numberFontDrawFormatted(s32 kind, s32 x, s32 y, s32 align, s32 digits, u32 slot, const char *format, ...);
s32 uiListGetVisibleCount(ScrollSelection *list);
s32 uniteIsStateTwentyTwo(void);
void uiDrawDataEntryRow(UniteWorkA *work, s32 index, s32 x, s32 y, f32 baseSpeed, f32 speed, s32 selected);
void FUN_0023dcec(UniteWorkA *work, s32 row, s32 x, s32 y, s32 selected, f32 baseScale, f32 factor);
void uniteDrawOptionRow(UniteWorkA *work, s32 index, s32 x, s32 y, s32 selected, s32 active, f32 opacity, f32 fade);

/* How many option rows precede row `index` (each option row has its own saved switch). */
static __inline s32 uniteCountOptionRows(s32 index)
{
    s32 count = 0;
    for (s32 i = 0; i < index; i++) {
        if (dataTableGetEntry24Byte1(i) == UNITE_ROW_OPTION) {
            count++;
        }
    }
    return count;
}

/* Draws the fusion menu's list panel at (x, y): the fusion limit, every visible row (sliding from or to the
 * cursor row while `mode` is 1 or 2) and, last, the row under the cursor. */
void uniteDrawListPanel(s32 x, s32 y, s32 mode, f32 fade)
{
    UniteWorkA *work = (UniteWorkA *)uniteGetWork();
    const FusionCatalogCriteria *criteria = uniteGetCatalogCriteria();
    if (work == NULL) {
        return;
    }
    s32 rowX = 0;
    s32 rowY = 0;
    char text[64];

    efctSetSpeed(fade);
    texDrawCompositeSprite(2, UNITE_TEX_TABLE, 1, x, y, 101);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 138, x, y, 101);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 73);
    sprintf(text, "\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8f\x82\x8e\x81\x40\x82\x6b\x82\x89\x82\x8d\x82\x89\x82\x94\x81\x46"); /* "Fusion Limit:" (full width) */
    textDrawString((f32)(anchor->x + x), (f32)(anchor->y + y), 0.55f, 2, 0.0f, 0xFFFFFFFF, fade, text);
    if (999 <= computeCountLimit()) {
        anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 633);
        sprintf(text, "\x82\x6d\x82\x8f\x82\x8e\x82\x85"); /* "None" (full width) */
        textDrawString((f32)(anchor->x + x), (f32)(anchor->y + y), 0.0f, 2, 0.0f, 0xFFFF57FF, fade, text);
    } else if (computeCountLimit() > 99) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 74, x, y, 101);
        anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 595);
        numberFontDrawFormatted(0, anchor->x + x, anchor->y + y, 1, 3, 101, "%d", computeCountLimit());
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 74, x, y, 101);
        anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 76);
        numberFontDrawFormatted(0, anchor->x + x, anchor->y + y, 1, 2, 101, "%d", computeCountLimit());
    }

    ScrollSelection *list = &work->selectionLists.sourceList;
    s32 top = resourceRunOperationIfUnblocked((Object *)list);
    s32 visible = uiListGetVisibleCount(list);
    for (s32 row = 0; row < visible; row++) {
        if (uniteIsStateTwentyTwo() == 0 && listCursorGetRowIfUnblocked(list) == row) {
            continue;
        }
        s32 index = top + row;
        if ((s32)work->optionNamesA.ids[index] < 0) {
            break;
        }
        f32 opacity = 1.0f;
        efctSetSpeed(fade);
        u32 kind = dataTableGetEntry24Byte1(index);
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(UNITE_TEX_TABLE, row + UNITE_ROW_ANCHOR);
        if (mode == 0) {
            rowY = position->y;
            rowX = position->x;
        } else if (mode == 1) {
            /* The rows below the cursor slide out of the cursor row. */
            if ((s32)work->transition.frame <= UNITE_ROW_SLIDE_FRAMES && listCursorGetRowIfUnblocked(list) < row) {
                const TextureTableEntryIV *from =
                    asdTMTexTableEntryAt(UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(list) + UNITE_ROW_ANCHOR);
                rowX = from->x +
                       (((position->x - from->x) << 12) / UNITE_ROW_SLIDE_FRAMES * (s32)work->transition.frame >> 12);
                rowY = from->y +
                       (((position->y - from->y) << 12) / UNITE_ROW_SLIDE_FRAMES * (s32)work->transition.frame >> 12);
            } else {
                rowX = position->x;
                rowY = position->y;
            }
        } else if (mode == 2) {
            /* The rows below the cursor slide back into the cursor row. */
            if ((s32)work->transition.frame <= UNITE_ROW_SLIDE_FRAMES && listCursorGetRowIfUnblocked(list) < row) {
                const TextureTableEntryIV *to =
                    asdTMTexTableEntryAt(UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(list) + UNITE_ROW_ANCHOR);
                rowX = position->x +
                       (((to->x - position->x) << 12) / UNITE_ROW_SLIDE_FRAMES * (s32)work->transition.frame >> 12);
                rowY = position->y +
                       (((to->y - position->y) << 12) / UNITE_ROW_SLIDE_FRAMES * (s32)work->transition.frame >> 12);
            } else {
                rowX = position->x;
                rowY = position->y;
            }
        }
        if (kind == UNITE_ROW_ENTRY) {
            uiDrawDataEntryRow(work, index, x + rowX, y + rowY, opacity, fade, 0);
        } else if (kind == UNITE_ROW_SEARCH) {
            FUN_0023dcec(work, index, x + rowX, y + rowY, 0, opacity, fade);
        } else if (kind == UNITE_ROW_OPTION) {
            const s8 *active = &criteria->optionActive[uniteCountOptionRows(index)];
            uniteDrawOptionRow(work, index, x + rowX, y + rowY, 0, *active, opacity * fade, fade);
            if (*active == 0) {
                break;
            }
        }
        efctSetSpeed(fade);
    }

    /* The row under the cursor is drawn over the others. */
    s32 selected = resourceRunOperationIfUnblocked((Object *)list) + listCursorGetRowIfUnblocked(list);
    if (uniteIsStateTwentyTwo() == 0) {
        u32 kind = dataTableGetEntry24Byte1(selected);
        const TextureTableEntryIV *position =
            asdTMTexTableEntryAt(UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(list) + UNITE_ROW_ANCHOR);
        if (kind == UNITE_ROW_ENTRY) {
            uiDrawDataEntryRow(work, selected, position->x + x, position->y + y, 1.0f, fade, 1);
        } else if (kind == UNITE_ROW_SEARCH) {
            FUN_0023dcec(work, selected, position->x + x, position->y + y, 1, 1.0f, fade);
        } else if (kind == UNITE_ROW_OPTION) {
            uniteDrawOptionRow(work, selected, position->x + x, position->y + y, 1,
                               criteria->optionActive[uniteCountOptionRows(selected)], 1.0f, fade);
        }
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
