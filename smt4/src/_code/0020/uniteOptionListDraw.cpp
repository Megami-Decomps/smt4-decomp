/* NON_MATCHING: allocation only (13 rows). Retail copies x and y to r7/r6 after reserving the frame, converts the
 * first name's coordinates in s1/s0 (built: through s0/s2, as both do for the cursor row's name), loads the row
 * mark's y offsets into r2/r1 and loads the cursor name's depth after the layer. */
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
    for (s32 row = 0; row < (s32)FUN_0029d644(&work->optionListIV.list); row++) {
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
        textDrawString(2, 0xff, name, slot->x + label->x + x, slot->y + label->y + y, 0.5859375f, 0.0f, 1.0f);
        if (FUN_00200574(work->optionListIV.ids[top + row]) != 0) {
            TextureTableEntryIV *mark = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d4);
            texDrawCompositeSprite(2, UNITE_SPRITES, 7, slot->x + mark->x + x, slot->y + mark->y + y, 0x6a);
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
        renderStackSet(&g_titleScene->scissor, 3);
        gxSetMirroredClippedScissor(slot->x + plate->x + x, slot->y + plate->y + y, plate->placement->width,
                                    plate->placement->height, 1);
        s32 shineY = vec2GetYInt(&work->sprites.slide) + y + slot->y;
        s32 shineX = vec2GetXInt(&work->sprites.slide) + x + slot->x;
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x3e, shineX, shineY, 0x83);
        renderStackSet(&g_titleScene->scissor, 0);

        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1d6, slot->x + x, slot->y + y, 0x83);
        sprintf(name, "%s", record->name);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d8);
        textDrawString(3, 0xffffffff, name, slot->x + label->x + x, slot->y + label->y + y, 0.48828125f, 0.0f, 1.0f);
        if (FUN_00200574(work->optionListIV.ids[selected]) != 0) {
            TextureTableEntryIV *mark = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1d7);
            texDrawCompositeSprite(2, UNITE_SPRITES, 7, slot->x + mark->x + x, mark->y + slot->y + y, 0x83);
        }
    }
    uiDrawListScrollBar(&work->optionListIV.list, x, y, UNITE_SPRITES, 0x23, 0x24, 0x25, 0x1f, 0x21, 0x20, 0x22,
                        work->touchIV.scrollThumbRegion, work->touchIV.scrollUpRegion, work->touchIV.scrollDownRegion,
                        0x97, 0);
}

} /* extern "C" */
