/* NON_MATCHING: 173 lines (131 by shape). Retail's frame is 8 bytes larger (0x7c against 0x74), keeps the category
 * list's address in r4 and the first row offset in r6 (built: r6 and r4), converts each label's coordinates
 * straight into s1/s0 (built: through s0/s2, as in uniteOptionListDraw) and loads the cursor slot's coordinates in
 * each arm of the slide. */
#include "camp/Unite/UniteWork.h"
#include "camp/CampStateQueries.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "gamedata/SearchTable.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 resourceRunOperationIfUnblocked(const ScrollSelection *list);
u8 ifTouchGetSelectionModeForRegion(int id);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
u8 FUN_001b079c(UniteWork *menu, s32 kind, char *label, s32 entry);

enum {
    UNITE_SPRITES = 0x24,        /* the fusion screen's sprite table */
    FILTER_ROW_SLOT = 0xb6,      /* first of the eight row slots */
    FILTER_CURSOR_SLOT = 200,    /* first of the cursor slots, one per row */
    FILTER_ROWS = 8,
    FILTER_OPEN_FRAMES = 4,      /* the rows slide out of the chosen category's row for this many frames */
    FILTER_ROW_REGION = 10       /* the rows' first touch region in UniteWork::touchIV.rowRegions */
};

/* Where a row sliding from `from` to `to` sits on `frame` of the FILTER_OPEN_FRAMES opening frames (20.12 fixed
 * point). */
static __inline s32 filterSlide(s32 from, s32 to, s32 frame)
{
    return from + ((((to - from) << 12) / FILTER_OPEN_FRAMES * frame) >> 12);
}

/* Where the slot `to` is drawn on `frame`: in place once the list is open, on its way from the slot `from` before. */
static __inline void filterSlidePosition(const TextureTableEntryIV *from, const TextureTableEntryIV *to, s32 frame,
                                         s32 *x, s32 *y)
{
    s32 toX = to->x;
    s32 toY = to->y;
    if (frame >= FILTER_OPEN_FRAMES) {
        *x = toX;
        *y = toY;
    } else {
        *x = filterSlide(from->x, toX, frame);
        *y = filterSlide(from->y, toY, frame);
    }
}

/* Draws the search filter's value list at (x, y): the eight value rows sliding out of the selected category's
 * row while the list opens, each with its label (highlighted when it is the current filter), then the cursor row
 * with its highlight, clipped shine and label. */
void uniteFilterValueListDraw(s32 x, s32 y)
{
    UniteWork *work = (UniteWork *)uniteGetWork();
    char label[0x40];

    if (work == NULL) {
        return;
    }
    s32 top = resourceRunOperationIfUnblocked(&work->selectionListsIV.sourceList);
    u32 kind =
        dataTable24Sub0GetRecordS90X(listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) + top);
    TextureTableEntryIV *origin =
        asdTMTexTableEntryAt(UNITE_SPRITES,
                             listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) + FILTER_ROW_SLOT);
    if ((s32)work->transition.frame >= FILTER_OPEN_FRAMES) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xb5, x, y, 0x97);
    }

    top = resourceRunOperationIfUnblocked(&work->selectionListsIV.partnerList);
    for (s32 row = 0; row < FILTER_ROWS; row++) {
        TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_SPRITES, row + FILTER_ROW_SLOT);
        s32 rowX;
        s32 rowY;
        filterSlidePosition(origin, slot, work->transition.frame, &rowX, &rowY);
        rowY = y + rowY;
        rowX = x + rowX;
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xb1, rowX, rowY, 0x9c);
        if ((s32)gridNavigationGetItemCount(&work->selectionListsIV.partnerList) > top + row) {
            TextureTableEntryIV *text = asdTMTexTableEntryAt(UNITE_SPRITES, 0xb2);
            u32 color = FUN_001b079c(work, kind, label, top + row) ? 0x8400ff : 0xff;
            textDrawString(text->x + rowX, text->y + rowY, 0.0f, 2, 0.0f, color, 1.0f, label);
        }
    }

    origin = asdTMTexTableEntryAt(
        UNITE_SPRITES, listCursorGetRowIfUnblocked(&work->selectionListsIV.sourceList) + FILTER_CURSOR_SLOT);
    top = resourceRunOperationIfUnblocked(&work->selectionListsIV.partnerList);
    s32 selected = top + listCursorGetRowIfUnblocked(&work->selectionListsIV.partnerList);
    TextureTableEntryIV *slot =
        asdTMTexTableEntryAt(
            UNITE_SPRITES, listCursorGetRowIfUnblocked(&work->selectionListsIV.partnerList) + FILTER_CURSOR_SLOT);
    s32 cursorX;
    s32 cursorY;
    filterSlidePosition(origin, slot, work->transition.frame, &cursorX, &cursorY);
    efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
    cursorY = cursorY + y;
    cursorX = x + cursorX;
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xbe, cursorX, cursorY, 0xab);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xbf, cursorX, cursorY, 0xab);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xc0, cursorX, cursorY, 0xab);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xc1, cursorX, cursorY, 0xb5);
    s32 touch = ifTouchGetSelectionModeForRegion(
        work->touchIV.rowRegions[FILTER_ROW_REGION + listCursorGetRowIfUnblocked(&work->selectionListsIV.partnerList)]);
    if (touch == 1 || touch == 2 || touch == 6) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xc3, cursorX, cursorY, 0xba);
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xc2, cursorX, cursorY, 0xba);
    }

    /* The shine slides across the row, clipped to the plate. */
    TextureTableEntryIV *plate = asdTMTexTableEntryAt(UNITE_SPRITES, 0xc2);
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
    gxSetMirroredClippedScissor(plate->x + cursorX, plate->y + cursorY, plate->placement->width,
                                plate->placement->height, 1);
    s32 shineY = vec2GetYInt(&work->sprites.slide) + cursorY;
    s32 shineX = vec2GetXInt(&work->sprites.slide) + cursorX;
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0xc4, shineX, shineY, 0xbf);
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);

    TextureTableEntryIV *text = asdTMTexTableEntryAt(UNITE_SPRITES, 0xc5);
    u32 color = FUN_001b079c(work, kind, label, selected) ? 0x8400ff : 0xffffffff;
    textDrawString(text->x + cursorX, text->y + cursorY, 0.25f, 3, 0.0f, color, 1.0f, label);
}

} /* extern "C" */
