/* NON_MATCHING: allocation only (7 rows). Retail holds the row mark's y in r2 and the slot's in r1 (built: r1 and
 * r2), converts the cursor row's name coordinates through s0/s2 (built: in s1/s0, as both do for the other rows'
 * names) and loads the cursor row's mark x after the slot's.
 * Tried without gain (14 or worse): all sixteen operand orders of the two marks' sums (none beats this one, and
 * changing one site moves the other); `slot`, `record`, `label` and `mark` declared once for both blocks; the name
 * coordinates as int or float locals (64 to 133) or with explicit casts; the depth as a double literal or a
 * quotient; the shine coordinates written in the call (26); `touch` as u8/u32; an unsigned row counter (20). */
#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/CampStateQueries.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match1_Table24Record.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "code/Code0029.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
Table24Record *dataTable24FindById(u32 id);
u8 ifTouchGetSelectionModeForRegion(int id);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
void uiDrawListScrollBar(void *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId,
    u32 arrowAId, u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
    u32 arrowBRegion, s32 layer, s32 horizontal);

enum {
    UNITE_SPRITES = 0x24,       /* the fusion screen's sprite table */
    OPTION_ROW_SLOT = 0x2e,     /* first of the row slots */
    OPTION_CURSOR_SLOT = 0x3f   /* first of the cursor slots, one per row */
};

/* Draws the fusion screen's option list at (x, y): the frame, every row but the cursor's with its
 * name and "new" mark, then the cursor row with its highlight, clipped shine and name, and the
 * scroll bar. */
void uniteOptionListDraw(s32 x, s32 y)
{
    UniteWork *work = reinterpret_cast<UniteWork *>(uniteGetWork());
    char name[0x40];

    if (work == NULL) {
        return;
    }
    texDrawCompositeSprite(2, UNITE_SPRITES, 6, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d2, x, y, 0x6a);

    s32 top = resourceRunOperationIfUnblocked(&work->optionListIV.list);
    for (s32 row = 0; row < (s32)uiListGetVisibleCount(&work->optionListIV.list); row++) {
        if (uiSpriteGetCompletionState(&work->sprites.open) != 0 && listCursorGetRowIfUnblocked(&work->optionListIV.list) == row) {
            continue;
        }
        TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_SPRITES, row + OPTION_ROW_SLOT);
        Table24Record *record = dataTable24FindById(work->optionListIV.ids[top + row]);
        if (record == NULL) {
            continue;
        }
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d3, slot->x + x, slot->y + y, 0x6a);
        sprintf(name, "%s", record->name);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d5);
        textDrawString(slot->x + label->x + x, slot->y + label->y + y, 0.5859375f, 2, 0.0f, 0xff, 1.0f, name);
        if (FUN_00200574(work->optionListIV.ids[top + row]) != 0) {
            TextureTableEntryIV *mark = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d4);
            texDrawCompositeSprite(2, UNITE_SPRITES, 7, slot->x + mark->x + x, mark->y + slot->y + y, 0x6a);
        }
    }

    top = resourceRunOperationIfUnblocked(&work->optionListIV.list);
    s32 selected = listCursorGetRowIfUnblocked(&work->optionListIV.list) + top;
    Table24Record *record = dataTable24FindById(work->optionListIV.ids[selected]);
    if (uiSpriteGetCompletionState(&work->sprites.open) != 0 && record != NULL) {
        TextureTableEntryIV *slot =
            asdTMTexTableEntryAt(UNITE_SPRITES, listCursorGetRowIfUnblocked(&work->optionListIV.list) + OPTION_CURSOR_SLOT);
        efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x38, slot->x + x, slot->y + y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x39, slot->x + x, slot->y + y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3a, slot->x + x, slot->y + y, 0x79);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3b, slot->x + x, slot->y + y, 0x7e);
        s32 touch = ifTouchGetSelectionModeForRegion(work->touchIV.rowRegions[listCursorGetRowIfUnblocked(&work->optionListIV.list)]);
        if (touch == 1 || touch == 2 || touch == 6) {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3d, slot->x + x, slot->y + y, 0x7e);
        } else {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3c, slot->x + x, slot->y + y, 0x7e);
        }

        /* The shine slides across the row, clipped to the plate. */
        TextureTableEntryIV *plate = asdTMTexTableEntryAt(UNITE_SPRITES, 0x3c);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
        gxSetMirroredClippedScissor(slot->x + plate->x + x, slot->y + plate->y + y, plate->placement->width,
                                    plate->placement->height, 1);
        s32 shineY = vec2GetYInt(&work->sprites.slide) + y + slot->y;
        s32 shineX = vec2GetXInt(&work->sprites.slide) + x + slot->x;
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3e, shineX, shineY, 0x83);
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);

        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d6, slot->x + x, slot->y + y, 0x83);
        sprintf(name, "%s", record->name);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d8);
        textDrawString(slot->x + label->x + x, slot->y + label->y + y, 0.48828125f, 3, 0.0f, 0xffffffff, 1.0f, name);
        if (FUN_00200574(work->optionListIV.ids[selected]) != 0) {
            TextureTableEntryIV *mark = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d7);
            texDrawCompositeSprite(2, UNITE_SPRITES, 7, mark->x + slot->x + x, slot->y + mark->y + y, 0x83);
        }
    }
    uiDrawListScrollBar(&work->optionListIV.list, x, y, UNITE_SPRITES, 0x23, 0x24, 0x25, 0x1f, 0x21, 0x20, 0x22,
                        work->touchIV.scrollThumbRegion, work->touchIV.scrollUpRegion, work->touchIV.scrollDownRegion,
                        0x97, 0);
}

} /* extern "C" */
