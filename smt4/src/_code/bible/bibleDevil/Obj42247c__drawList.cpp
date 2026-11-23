/* NON_MATCHING: 232 raw / 78 shape lines. Retail sets the layer pass's `work` and `raised` arguments once ahead of
 * the switch (here each case sets r0 itself) and builds the icon pass's owned flag in r0 before moving it to r1.
 * (`raised` is s32, as its callees take it; a u32 parameter, chosen from a type grid, scored 57 shape.) */
#include "classes/Obj42247c.h"
#include "bible/BibleDevilList.h"
#include "code/Code0029.h"
#include "shard/Shard004A.h"
#include "shard/W6_W6Match3_BattleQueue.h"
#include "ui/AnimatedMessage.h"

/* A screen position or offset of the list. */
struct BibleDevilPoint {
    f32 x;
    f32 y;
};

enum {
    BIBLE_DEVIL_STEP_BROWSE = 2,    /* the step in which the cursor's entry is drawn raised */
    BIBLE_DEVIL_IMAGE_FRAME = 0x4A4, /* the first of the four frame images */
    BIBLE_DEVIL_IMAGE_HEADER = 0x4A2,
    BIBLE_DEVIL_IMAGE_COMPARE_HEADER = 0x4A3
};

/* The passes an entry is drawn in, back to front. */
enum BibleDevilLayer {
    BIBLE_DEVIL_LAYER_CURSOR,
    BIBLE_DEVIL_LAYER_ICON,
    BIBLE_DEVIL_LAYER_RACE,
    BIBLE_DEVIL_LAYER_NAME,
    BIBLE_DEVIL_LAYER_STAT,
    BIBLE_DEVIL_LAYER_COST
};

extern "C" {

void uiMenuAnchorGetOffset(const u8 *layout, BibleDevilPoint *offset);
void uiRectDrawAtBottomRight(const u8 *layout, u32 id, s32 dx, s32 dy, u32 layer);
void FUN_00231bcc(const u8 *layout, u32 image, s32 x, s32 y, u32 layer, u32 flags);
s32 rangeLimitMin(void *list);
u32 flaggedEntryGetValueByState(void *list);
s8 touchSelectionGetSelected(const BibleDevilTouchSelection *selection);
void uiDrawScrollingSelectionEntry(BibleDevilWork *work, s32 row, u32 layer, s32 selected);
void demonIconPanelDrawRow(BibleDevilWork *work, s32 showOwned, s32 devil, s32 row, s32 raised, u32 layer);
void bibleDevilDrawRace(BibleDevilWork *work, u32 devil, s32 row, s32 raised, s32 layer);
void bibleDevilDrawName(BibleDevilWork *work, u32 devil, u32 row, s32 raised, s32 layer);
void bibleDevilDrawStat(BibleDevilWork *work, s32 value, s32 row, s32 raised, u32 layer, u32 color);
void digitsDrawAtAreaCorner(const u8 *layout, s32 x, s32 y, u32 layer, const char *digits);
void drawSetColorFromRGBA8(u32 color);
void scrollMenuDrawLayer(BibleDevilWork *work, u32 layer);

} /* extern "C" */

/* Whether the list's anchor is horizontally on screen. */
static __inline bool bibleDevilListOnScreen(BibleDevilWork *work)
{
    BibleDevilPoint position;
    BibleDevilPoint offset;

    pairCopy(reinterpret_cast<u32 *>(work->layout), reinterpret_cast<u32 *>(&position));
    uiMenuAnchorGetOffset(work->layout, &offset);
    return position.x + offset.x < 320.0f && position.x + offset.x > -320.0f;
}

/* Sets the cost text's colour for `row`, unless the row before already set the same one. */
static __inline void bibleDevilSetCostColor(s32 row)
{
    if (row == 0) {
        drawSetColorFromRGBA8(g_bibleDevilRowCostColor[0]);
    } else if (g_bibleDevilRowCostColor[row - 1] != g_bibleDevilRowCostColor[row]) {
        drawSetColorFromRGBA8(g_bibleDevilRowCostColor[row]);
    }
}

/* Draws one pass of the entry in `row` (Apocalypse keeps this out of line: FUN_004a3238). */
static __inline void bibleDevilDrawEntryLayer(BibleDevilWork *work, s32 row, s32 pass, s32 raised, s32 devil)
{
    u32 layer = work->touchSelection.drawLayer;

    switch (pass) {
    case BIBLE_DEVIL_LAYER_CURSOR:
        if (raised != 0) {
            uiDrawScrollingSelectionEntry(work, row, layer, touchSelectionGetSelected(&work->touchSelection));
        }
        break;
    case BIBLE_DEVIL_LAYER_ICON: {
        s32 showOwned = 0;

        if (work->mode == 0) {
            showOwned = 1;
        }
        demonIconPanelDrawRow(work, showOwned, devil, row, raised, layer);
        break;
    }
    case BIBLE_DEVIL_LAYER_RACE:
        bibleDevilDrawRace(work, devil, row, raised, layer);
        break;
    case BIBLE_DEVIL_LAYER_NAME:
        bibleDevilDrawName(work, devil, row, raised, layer);
        break;
    case BIBLE_DEVIL_LAYER_STAT:
        bibleDevilDrawStat(work, g_bibleDevilRowValue[row], row, raised, layer, g_bibleDevilRowColor[row]);
        break;
    case BIBLE_DEVIL_LAYER_COST:
        bibleDevilSetCostColor(row);
        digitsDrawAtAreaCorner(work->layout, g_bibleDevilRowCostX[row], g_bibleDevilRowCostY[row], layer,
            g_bibleDevilRowCostText[row]);
        break;
    }
}

/* Draws every pass of the entry in `row`, one layer up when it is raised (Apocalypse keeps this out of line:
 * FUN_004a2a30). */
static __inline void bibleDevilDrawEntry(BibleDevilWork *work, s32 row, s32 raised, s32 devil)
{
    u32 layer = work->touchSelection.drawLayer;
    s32 showOwned;

    if (raised != 0) {
        layer++;
    }
    if (raised != 0) {
        uiDrawScrollingSelectionEntry(work, row, layer, touchSelectionGetSelected(&work->touchSelection));
    }
    showOwned = 0;
    if (work->mode == 0) {
        showOwned = 1;
    }
    demonIconPanelDrawRow(work, showOwned, devil, row, raised, layer);
    bibleDevilDrawRace(work, devil, row, raised, layer);
    bibleDevilDrawName(work, devil, row, raised, layer);
    bibleDevilDrawStat(work, g_bibleDevilRowValue[row], row, raised, layer, g_bibleDevilRowColor[row]);
    drawSetColorFromRGBA8(g_bibleDevilRowCostColor[row]);
    digitsDrawAtAreaCorner(work->layout, g_bibleDevilRowCostX[row], g_bibleDevilRowCostY[row], layer,
        g_bibleDevilRowCostText[row]);
    gxResetColorQuadToWhite();
}

/* Draws the devil list: its frame, the visible entries pass by pass (the cursor's entry skipped while
 * browsing), then the cursor's entry raised above them. */
void Obj42247c::drawList()
{
    /* The entries and the mode at 0x5A4 belong to the list's derived menus (a class hierarchy still to recover), so
     * the drawer reads the object through the list's work view. */
    BibleDevilWork *work = reinterpret_cast<BibleDevilWork *>(this);

    if (!bibleDevilListOnScreen(work)) {
        return;
    }
    u32 layer = work->touchSelection.drawLayer;
    uiRectDrawAtBottomRight(work->layout, 2, 0, 0, layer);
    FUN_00231bcc(work->layout, BIBLE_DEVIL_IMAGE_FRAME, 0, 0, layer, 1);
    FUN_00231bcc(work->layout, BIBLE_DEVIL_IMAGE_FRAME + 1, 0, 0, layer, 1);
    FUN_00231bcc(work->layout, BIBLE_DEVIL_IMAGE_FRAME + 2, 0, 0, layer, 1);
    FUN_00231bcc(work->layout, BIBLE_DEVIL_IMAGE_FRAME + 3, 0, 0, layer, 1);
    if (work->mode == 0) {
        FUN_00231bcc(work->layout, BIBLE_DEVIL_IMAGE_HEADER, 0, 0, layer, 1);
    } else {
        FUN_00231bcc(work->layout, BIBLE_DEVIL_IMAGE_COMPARE_HEADER, 0, 0, layer, 1);
    }
    if (work->list.count == 0) {
        return;
    }

    s32 first = FUN_0029e924(&work->list);
    s32 visible = rangeLimitMin(&work->list);
    BibleDevilEntry *entries = work->entries;
    s32 pass;
    s32 row;
    for (pass = BIBLE_DEVIL_LAYER_ICON; pass <= BIBLE_DEVIL_LAYER_STAT; pass++) {
        for (row = 0; row < visible; row++) {
            if (work->step != BIBLE_DEVIL_STEP_BROWSE || flaggedEntryGetValueByState(&work->list) != row) {
                bibleDevilDrawEntryLayer(work, row, pass, 0, (s16)entries[first + row].devilId);
            }
        }
    }
    /* Retail sets the pass again here (`mov r9, #5`) although the loop above leaves it at the cost pass. */
    pass = BIBLE_DEVIL_LAYER_COST;
    for (row = 0; row < visible; row++) {
        if (work->step == BIBLE_DEVIL_STEP_BROWSE && flaggedEntryGetValueByState(&work->list) == row) {
            bibleDevilSetCostColor(row);
        } else {
            bibleDevilDrawEntryLayer(work, row, pass, 0, (s16)entries[first + row].devilId);
        }
    }
    gxResetColorQuadToWhite();

    if (work->step == 2 || work->step == 3 || work->step == 7 || work->step == 4 || work->step == 5 ||
        work->step == 8) {
        s32 devil = (s16)entries[flaggedValueHolderGetTotal(&work->list)].devilId;

        bibleDevilDrawEntry(work, flaggedEntryGetValueByState(&work->list), 1, devil);
    }
    scrollMenuDrawLayer(work, layer);
}
