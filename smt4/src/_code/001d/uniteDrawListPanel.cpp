/* NON_MATCHING: 197 lines (346 vs 345 rows); control flow, calls and arguments are retail's (the IV twin of
 * Apocalypse's uniteDrawListPanel). Retail keeps x in r9 and the row count in sl (this build sl and r9) and puts
 * the text buffer above the spilled criteria, row y, list address and list top (this build puts the criteria and
 * row y above the buffer). */
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UnitePreferences.h"
#include "camp/CampStateQueries.h"
#include "code/Code001a_Smt4.h"
#include "code/Code0029.h"
#include "code/Code0029_VariantB.h"
#include "gamedata/SearchTable.h"
#include "runtime/Stdio.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum {
    UNITE_TEX_TABLE = 36,
    UNITE_ROW_ANCHOR = 169,   /* table entry of the first list row's position */
    UNITE_ROW_SLIDE_FRAMES = 4,
    /* dataTable24Sub0GetRecord: what a row of the fusion menu is */
    UNITE_ROW_ENTRY = 0,
    UNITE_ROW_SEARCH = 1,
    UNITE_ROW_OPTION = 2
};

extern "C" {
s32 resourceRunOperationIfUnblocked(const ScrollSelection *selection);
void textDrawFormattedAligned(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *format, ...);
u32 fusionPlayerLevelCapGet(void);
void uiSlotEntryDraw(f32 speed, void *panel, u32 id, s32 x, s32 y, s32 selected);
void FUN_001a7810(void *owner, u32 id, s32 x, s32 y, s32 highlighted, s32 alternate, f32 speed);

/* How many option rows precede row `index` (each option row has its own saved switch). */
static __inline s32 uniteCountOptionRows(s32 index)
{
    s32 count = 0;
    for (s32 i = 0; i < index; i++) {
        if (dataTable24Sub0GetRecord(i) == UNITE_ROW_OPTION) {
            count++;
        }
    }
    return count;
}

/* Draws the fusion menu's list panel at (x, y): the fusion level limit, every visible row (sliding from or to
 * the cursor row while `mode` is 1 or 2) and, last, the row under the cursor. */
void uniteDrawListPanel(s32 x, s32 y, s32 mode)
{
    UniteWork *work = (UniteWork *)uniteGetWork();
    const FusionCatalogCriteria *criteria = uniteGetCatalogCriteria();
    if (work == NULL) {
        return;
    }
    s32 rowX = 0;
    s32 rowY = 0;
    f32 fade = 1.0f;    /* the panel's opacity: a parameter in Apocalypse's uniteDrawListPanel */
    char text[64];

    texDrawCompositeSprite(2, UNITE_TEX_TABLE, 1, x, y, 101);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 138, x, y, 101);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEX_TABLE, 74, x, y, 101);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 73);
    __2sprintf(text, "\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8f\x82\x8e\x81\x40\x82\x6f\x82\x8f\x82\x93\x82\x93\x82\x89\x82\x82\x82\x8c\x82\x85\x81\x46"); /* "Fusion Possible:" (full width) */
    textDrawString((f32)(anchor->x + x), (f32)(anchor->y + y), 0.55f, 2, 0.0f, 0xFFFFFFFF, fade, text);
    anchor = asdTMTexTableEntryAt(UNITE_TEX_TABLE, 76);
    textDrawFormattedAligned(0, anchor->x + x, anchor->y + y, 1, 2, 101, "%d", fusionPlayerLevelCapGet());

    s32 top = resourceRunOperationIfUnblocked(&work->selectionListsIV.sourceList);
    s32 visible = uiListGetVisibleCount(&work->selectionListsIV.sourceList);
    for (s32 row = 0; row < visible; row++) {
        if (listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) == row) {
            continue;
        }
        f32 opacity = 1.0f;
        efctSetSpeed(opacity);
        s32 index = top + row;
        u32 kind = dataTable24Sub0GetRecord(index);
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(UNITE_TEX_TABLE, row + UNITE_ROW_ANCHOR);
        if (mode == 0) {
            rowY = position->y;
            rowX = position->x;
        } else if (mode == 1) {
            /* The rows below the cursor slide out of the cursor row. */
            if ((s32)work->transition.frame <= UNITE_ROW_SLIDE_FRAMES && (s32)listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) < row) {
                const TextureTableEntryIV *from =
                    asdTMTexTableEntryAt(UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) + UNITE_ROW_ANCHOR);
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
            if ((s32)work->transition.frame <= UNITE_ROW_SLIDE_FRAMES && (s32)listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) < row) {
                const TextureTableEntryIV *to =
                    asdTMTexTableEntryAt(UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) + UNITE_ROW_ANCHOR);
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
            uiSlotEntryDraw(opacity, work, index, x + rowX, y + rowY, 0);
        } else if (kind == UNITE_ROW_SEARCH) {
            FUN_001af670(work, index, x + rowX, y + rowY, 0, opacity);
        } else if (kind == UNITE_ROW_OPTION) {
            const s8 *active = &criteria->rowsUnlocked[uniteCountOptionRows(index)];
            FUN_001a7810(work, index, x + rowX, y + rowY, 0, *active, opacity);
            if (*active == 0) {
                break;
            }
        }
        efctSetSpeed(opacity);
    }

    /* The row under the cursor is drawn over the others. */
    s32 selected = resourceRunOperationIfUnblocked(&work->selectionListsIV.sourceList) + listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList);
    u32 kind = dataTable24Sub0GetRecord(selected);
    const TextureTableEntryIV *position =
        asdTMTexTableEntryAt(UNITE_TEX_TABLE, listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) + UNITE_ROW_ANCHOR);
    if (kind == UNITE_ROW_ENTRY) {
        uiSlotEntryDraw(fade, work, selected, position->x + x, position->y + y, 1);
    } else if (kind == UNITE_ROW_SEARCH) {
        FUN_001af670(work, selected, position->x + x, position->y + y, 1, fade);
    } else if (kind == UNITE_ROW_OPTION) {
        FUN_001a7810(work, selected, position->x + x, position->y + y, 1,
                     criteria->rowsUnlocked[uniteCountOptionRows(selected)], fade);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
