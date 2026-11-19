/* NON_MATCHING: 84 rows; same instructions, frame size and block layout. Spill slots: the row's plate colour and
 * the focused quest id share sp+12 (retail: sp+4 and sp+8) and the focused name's scroll x is at sp+44 (retail:
 * sp+20), 26 of the rows. The rest are temporary registers in six argument computations (the row plate, name
 * and icon positions, the focused plate and name, the pulse product); for the focused name retail also moves the
 * sums through s0/s2 and loads the 0.32 depth last, where this build converts them in s1/s0. */
#include <stdio.h>
#include "ui/UiSpriteApi.h"
#include "shard/W5_W5Match7_UiQuest.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "text/TextDraw.h"
#include "gamedata/GameDataAccess.h"
#include "ui/AnimatedMessage.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 uiSearchPrimary(const void *controller);
u32 uiQuestDrawRowPlate(u32 questId, s32 x, s32 y, s32 depth, s32 focused, s32 pressed);
const char *FUN_00156850(u32 questId, u32 key);
void partyDrawCategorySelectionIcon(s32 id, u32 x, u32 y, u32 flags);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 mode);
u32 partyEntryGetBit5(s32 index);
u32 partyEntryGetBit6(s32 index);
u32 partyEntryBitsBit4(s32 index);
u32 partyEntryFlagsBit3(s32 index);
u32 questHasSpecialDetailPage(u32 id);
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                         u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                         u32 arrowBRegion, s32 layer, s32 horizontal);

/* The quest menu's list draw: the list window, one row per visible quest (its plate, name, category icon
 * and status mark), the enlarged row under the cursor with its scrolling name, and the scroll bar. */
void uiQuestDrawList(void)
{
    u8 *cursor;
    u16 *list;
    char text[64];
    UiQuestApoc *quest = g_uiQuest;
    s32 x = vec2GetXInt(quest->sprite(0));
    s32 y = vec2GetYInt(quest->sprite(0));
    const f32 fullSpeed = 1.0f;

    if (quest->unk90c) {
        cursor = quest->alternateView()->cursor;
        list = quest->alternateView()->list;
    } else {
        cursor = quest->cursor;
        list = quest->list;
    }
    f32 alpha = vec2GetSpeed(quest->sprite(0));
    efctSetSpeed(alpha);
    texDrawCompositeSprite(2, 0x1e, 8, x, y, 0x65);
    if (quest->unk90c) {
        texDrawCompositeSprite(2, 0x1e, 9, x, y, 0x65);
    } else {
        texDrawCompositeSprite(2, 0x1e, 10, x, y, 0x65);
    }
    texDrawCompositeSprite(2, 0x1e, 0xb, x, y, 0x65);
    if (quest->unk90c) {
        texDrawTableEntryAtStoredOrigin(2, 0x1e, 0x82, x, y, 0x6a);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 0x1e, 0x83, x, y, 0x6a);
    }

    for (s32 row = 0; row < uiSearchPrimary(cursor); row++) {
        if (quest->menuState == 2 && listCursorGetRowIfUnblocked(cursor) == row) {
            continue;
        }
        u16 id = list[resourceRunOperationIfUnblocked((Object *)cursor) + row];
        TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x1e, row + 0x9e);
        if (id == 0) {
            continue;
        }
        TextureTableEntryIV *plate = asdTMTexTableEntryAt(0x1e, 0x9c);
        u32 color = uiQuestDrawRowPlate(id, entry->x + plate->x + x, entry->y + plate->y + y, 0x6f, 0, 0);
        TextureTableEntryIV *name = asdTMTexTableEntryAt(0x1e, 0x9b);
        sprintf(text, "%s", FUN_00156850(id, 0));
        textDrawString((f32)(entry->x + name->x + x), (f32)(name->y + entry->y + y), 0.45f, 2, 0.0f, color, alpha, text);
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1e, 0x9a);
        partyDrawCategorySelectionIcon(id, icon->x + entry->x + x, entry->y + icon->y + y, 0x6f);
        TextureTableEntryIV *mark = asdTMTexTableEntryAt(0x1e, 0x9d);
        if (partyEntryGetBit5(id)) {
            texDrawCompositeSprite(2, 0x1e, 0xf, entry->x + mark->x + x, entry->y + mark->y + y, 0x74);
        } else if (!partyEntryBitsBit4(id) && questHasSpecialDetailPage(id)) {
            texDrawCompositeSprite(2, 0x1e, 0x13, entry->x + mark->x + x, entry->y + mark->y + y, 0x74);
        } else if (partyEntryGetBit6(id)) {
            texDrawCompositeSprite(2, 0x1e, 0x10, entry->x + mark->x + x, entry->y + mark->y + y, 0x74);
        }
    }

    if (uiSearchPrimary(cursor) > 0 &&
        (quest->menuState == 2 || quest->menuState == 6 || quest->menuState == 7 || quest->menuState == 8 ||
         quest->menuState == 9 || quest->menuState == 10)) {
        s32 row = listCursorGetRowIfUnblocked(cursor);
        TextureTableEntryIV *focus = asdTMTexTableEntryAt(0x1e, row + 0xb5);
        u16 id = list[resourceRunOperationIfUnblocked((Object *)cursor) + row];

        efctSetSpeed(vec2GetSpeed(quest->sprite(1)) * alpha);
        texDrawCompositeSprite(2, 0x1e, 0x11, focus->x + x, focus->y + y, 0x97);
        efctSetSpeed(alpha);
        texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xab, focus->x + x, focus->y + y, 0x9c);

        bool pressed = false;
        s32 mode = recordGetModeForId(quest->touch.rowRegions[row]);
        if (mode == 1 || mode == 2 || mode == 6) {
            pressed = true;
        }
        if (pressed) {
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xce, focus->x + x, focus->y + y, 0x9c);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xca, focus->x + x, focus->y + y, 0x9c);
        }
        s32 phase = quest->menuTimer % 40;
        if (phase >= 20) {
            phase = 40 - phase;
        }
        f32 pulse = (f32)phase * 0.05f;
        efctSetSpeed(pulse * alpha);
        if (pressed) {
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xcf, focus->x + x, focus->y + y, 0x9c);
            efctSetSpeed(alpha);
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xcc, focus->x + x, focus->y + y, 0xa1);
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xcd, focus->x + x, focus->y + y, 0xa1);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xcb, focus->x + x, focus->y + y, 0x9c);
            efctSetSpeed(alpha);
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xac, focus->x + x, focus->y + y, 0xa1);
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xad, focus->x + x, focus->y + y, 0xa1);
        }

        TextureTableEntryIV *window = asdTMTexTableEntryAt(0x1e, 0xac);
        s32 scrollX = vec2GetXInt(quest->sprite(2));
        s32 scrollY = vec2GetYInt(quest->sprite(2));
        renderStackSet(&g_renderCtx->scissor, 3);
        gxSetMirroredClippedScissor(focus->x + window->x + x, focus->y + window->y + y, window->placement->width,
                                    window->placement->height, 1);
        texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xae, focus->x + (scrollX + x), scrollY + y + focus->y, 0xa6);
        renderStackSet(&g_renderCtx->scissor, 0);

        TextureTableEntryIV *plate = asdTMTexTableEntryAt(0x1e, 0xb3);
        u32 color = uiQuestDrawRowPlate(id, plate->x + focus->x + x, focus->y + plate->y + y, 0xab, 1, pressed);
        TextureTableEntryIV *name = asdTMTexTableEntryAt(0x1e, 0xb2);
        sprintf(text, "%s", FUN_00156850(id, 0));
        textDrawString((f32)(focus->x + name->x + x), (f32)(focus->y + name->y + y), 0.32f, 3, 0.0f, color, alpha, text);
        if (partyEntryFlagsBit3(id)) {
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xb0, focus->x + x, focus->y + y, 0xab);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x1e, 0xaf, focus->x + x, focus->y + y, 0xab);
        }
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1e, 0xb1);
        partyDrawCategorySelectionIcon(id, icon->x + focus->x + x, focus->y + icon->y + y, 0xb0);
        TextureTableEntryIV *mark = asdTMTexTableEntryAt(0x1e, 0xb4);
        if (partyEntryGetBit5(id)) {
            texDrawCompositeSprite(2, 0x1e, 0xf, focus->x + mark->x + x, focus->y + mark->y + y, 0xb0);
        } else if (!partyEntryBitsBit4(id) && questHasSpecialDetailPage(id)) {
            texDrawCompositeSprite(2, 0x1e, 0x13, focus->x + mark->x + x, focus->y + mark->y + y, 0xb0);
        } else if (partyEntryGetBit6(id)) {
            texDrawCompositeSprite(2, 0x1e, 0x10, focus->x + mark->x + x, focus->y + mark->y + y, 0xb0);
        }
    }

    uiDrawListScrollBar((Object *)cursor, x, y, 0x1e, 0x89, 0x8a, 0x8b, 0x85, 0x87, 0x86, 0x88, quest->touch.scrollThumbRegion,
                        quest->touch.scrollUpRegion, quest->touch.scrollDownRegion, 0x97, 0);
    efctSetSpeed(fullSpeed);
}

} /* extern "C" */
