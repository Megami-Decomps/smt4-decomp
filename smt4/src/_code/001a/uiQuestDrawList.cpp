/* NON_MATCHING: ported from Apocalypse's uiQuestDrawList; calls, constants, blocks, frame size and the callee-saved
 * register roles follow retail (119 raw / 99 shape rows, from 586). What differs: retail spills the list cursor at
 * sp+56 (the build: sp+60) and the row plate's colour in the outgoing-argument word sp+0 (the build: sp+16); the
 * x/y operand loads of four position sums (row plate, row name, clip window, focused name) are ordered
 * differently, retail converts the focused name's position through s0/s2, and the clip-rectangle height goes
 * through r9 where the build uses r7. */
#include "runtime/Stdio.h"
#include "quest_center/QuestText.h"
#include "shard/W4_W4Match2_UiQuest.h"
#include "ui/UiSpriteApi.h"
#include "ui/GridNavigation.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "quest_center/QuestStatus.h"
#include "text/TextDraw.h"
#include "code/Code0028_Smt4.h"
#include "code/Code0029.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {

u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
/* Draws a quest row's plate and returns the colour its name takes. */
u32 FUN_001af84c(s32 quest, u32 x, u32 y, u32 flags, s32 full);
void drawSkillCategoryLabel(u16 skill, s32 x, s32 y, u32 style);
u32 questIsCompleted(int index);
u8 ifTouchGetSelectionModeForRegion(int id);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
void uiDrawListScrollBar(void *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                         u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                         u32 arrowBRegion, s32 layer, s32 horizontal);

/* The quest menu's list draw: the list window, one row per visible quest (its plate, name, category icon
 * and status mark), the enlarged row under the cursor with its scrolling name, and the scroll bar. */
void uiQuestDrawList(void)
{
    UiQuest *quest = g_uiQuest;
    u8 *cursor;
    u16 *list;
    char text[64];
    s32 x = vec2GetXInt(&quest->sprites[0]);
    s32 y = vec2GetYInt(&quest->sprites[0]);

    if (quest->panelView.panel.detailMode) {
        cursor = quest->panelView.panel.alternate.cursor;
        list = quest->cursor.alternate.ids;
    } else {
        cursor = quest->cursor.data;
        list = quest->list;
    }
    texDrawCompositeSprite(2, 0x29, 8, x, y, 0x65);
    if (quest->panelView.panel.detailMode) {
        texDrawCompositeSprite(2, 0x29, 9, x, y, 0x65);
    } else {
        texDrawCompositeSprite(2, 0x29, 10, x, y, 0x65);
    }
    texDrawCompositeSprite(2, 0x29, 0xb, x, y, 0x65);
    if (quest->panelView.panel.detailMode) {
        texDrawTableEntryAtStoredOrigin(2, 0x29, 0x82, x, y, 0x6a);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x29, 0x83, x, y, 0x6a);
    }

    for (s32 row = 0; row < (s32)uiListGetVisibleCount(cursor); row++) {
        if (quest->state == 2 && listCursorGetRowIfUnblocked(cursor) == row) {
            continue;
        }
        u16 id = list[resourceRunOperationIfUnblocked((GridNavigation *)cursor) + row];
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x29, row + 0x9e);
        if (id == 0) {
            continue;
        }
        TextureTableEntryIV *plate = asdTMTexTableEntryAt(0x29, 0x9c);
        u32 color = FUN_001af84c(id, entry->x + plate->x + x, plate->y + entry->y + y, 0x6f, 0);
        TextureTableEntryIV *name = asdTMTexTableEntryAt(0x29, 0x9b);
        __2sprintf(text, "%s", FUN_002bcddc(id, 0));
        textDrawString((f32)(entry->x + name->x + x), (f32)(entry->y + name->y + y), 0.45f, 2, 0.0f, color, 1.0f, text);
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x29, 0x9a);
        drawSkillCategoryLabel(id, icon->x + entry->x + x, entry->y + icon->y + y, 0x6f);
        TextureTableEntryIV *mark = asdTMTexTableEntryAt(0x29, 0x9d);
        if (partyEntryGetBit5(id)) {
            texDrawCompositeSprite(2, 0x29, 0xf, entry->x + mark->x + x, entry->y + mark->y + y, 0x74);
        } else if (partyEntryGetBit6(id)) {
            texDrawCompositeSprite(2, 0x29, 0x10, entry->x + mark->x + x, entry->y + mark->y + y, 0x74);
        }
    }

    if ((s32)uiListGetVisibleCount(cursor) > 0 &&
        (quest->state == 2 || quest->state == 6 || quest->state == 7 || quest->state == 8 || quest->state == 9 ||
         quest->state == 10)) {
        s32 row = listCursorGetRowIfUnblocked(cursor);
        TextureTableEntryIV *focus = asdTMTexTableEntryAt(0x29, row + 0xb5);
        u16 id = list[resourceRunOperationIfUnblocked((GridNavigation *)cursor) + row];

        efctSetSpeed(vec2GetSpeed(&quest->sprites[1]));
        texDrawCompositeSprite(2, 0x29, 0x11, focus->x + x, focus->y + y, 0x97);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, 0x29, 0xab, focus->x + x, focus->y + y, 0x9c);

        s32 mode = ifTouchGetSelectionModeForRegion(quest->touch.rowRegions[row]);
        if (mode == 1 || mode == 2 || mode == 6) {
            texDrawTableEntryAtStoredOrigin(2, 0x29, 0xad, focus->x + x, focus->y + y, 0xa1);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x29, 0xac, focus->x + x, focus->y + y, 0xa1);
        }

        TextureTableEntryIV *window = asdTMTexTableEntryAt(0x29, 0xac);
        s32 scrollX = vec2GetXInt(&quest->sprites[2]);
        s32 scrollY = vec2GetYInt(&quest->sprites[2]);
        renderStackSet(&g_titleScene->scissor, 3);
        gxSetMirroredClippedScissor(window->x + focus->x + x, focus->y + window->y + y, window->placement->width,
                                    window->placement->height, 1);
        texDrawTableEntryAtStoredOrigin(2, 0x29, 0xae, focus->x + (scrollX + x), scrollY + y + focus->y, 0xa6);
        renderStackSet(&g_titleScene->scissor, 0);

        TextureTableEntryIV *plate = asdTMTexTableEntryAt(0x29, 0xb3);
        u32 color = FUN_001af84c(id, plate->x + focus->x + x, focus->y + plate->y + y, 0xab, 1);
        TextureTableEntryIV *name = asdTMTexTableEntryAt(0x29, 0xb2);
        __2sprintf(text, "%s", FUN_002bcddc(id, 0));
        textDrawString((f32)(focus->x + name->x + x), (f32)(focus->y + name->y + y), 0.32f, 3, 0.0f, color, 1.0f, text);
        if (questIsCompleted(id)) {
            texDrawTableEntryAtStoredOrigin(2, 0x29, 0xb0, focus->x + x, focus->y + y, 0xab);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x29, 0xaf, focus->x + x, focus->y + y, 0xab);
        }
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x29, 0xb1);
        drawSkillCategoryLabel(id, icon->x + focus->x + x, focus->y + icon->y + y, 0xb0);
        TextureTableEntryIV *mark = asdTMTexTableEntryAt(0x29, 0xb4);
        if (partyEntryGetBit5(id)) {
            texDrawCompositeSprite(2, 0x29, 0xf, focus->x + mark->x + x, focus->y + mark->y + y, 0xb0);
        } else if (partyEntryGetBit6(id)) {
            texDrawCompositeSprite(2, 0x29, 0x10, focus->x + mark->x + x, focus->y + mark->y + y, 0xb0);
        }
    }

    uiDrawListScrollBar(cursor, x, y, 0x29, 0x89, 0x8a, 0x8b, 0x85, 0x87, 0x86, 0x88, quest->touch.scrollThumbRegion,
                        quest->touch.scrollUpRegion, quest->touch.scrollDownRegion, 0x97, 0);
}

} /* extern "C" */
