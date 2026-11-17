#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelStateA.h"

extern "C" {

s32 FUN_0026fa30(void);
s32 scrollOwnerSelectIndex(void *cursor, s32 column);
s32 scrollListSetSelectionTracked(void *cursor, s32 row);
s32 slotPlacementAssignSlotPosition(PartyPanelWidget *widget, s32 expanded);
s8 *gameGetSlotTable(void);

/* Flips the expanded flag, shows keyframe 5 and refreshes every header and row handle. */
static void partyPanelCollapse(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 i;

    panel->page ^= 1;
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 5, 0);
    for (i = 0; i < 4; i++) {
        slotPlacementAssignSlotPosition(panel->characters[i], panel->page);
    }
    for (i = 0; i < 0x18; i++) {
        slotPlacementAssignSlotPosition(panel->demons[i], panel->page);
    }
    FUN_0026fa30();
}

/* Flips the expanded flag, shows keyframe 4 and refreshes every header and row handle. */
static void partyPanelExpand(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 i;

    panel->page ^= 1;
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 4, 0);
    for (i = 0; i < 4; i++) {
        slotPlacementAssignSlotPosition(panel->characters[i], panel->page);
    }
    for (i = 0; i < 0x18; i++) {
        slotPlacementAssignSlotPosition(panel->demons[i], panel->page);
    }
    FUN_0026fa30();
}

u32 FUN_00372570(s32 force)
{
    PartyPanelStateA *panel = g_partyPanel;
    s8 *table = gameGetSlotTable();
    u32 changed = 0;

    if (panel->partySlot > 0) {
        s32 key = table[panel->partySlot + 0x1C9F];
        if (key >= 0) {
            s32 i;
            for (i = 0; i < 0x18; i++) {
                s32 slotKey = static_cast<s32>(panel->entries[i].packedIndex);
                if (key == slotKey) {
                    s32 state;
                    if (panel->alternate != 0) {
                        scrollOwnerSelectIndex(&panel->stockGridAlternate, i % 4);
                        scrollListSetSelectionTracked(&panel->stockGridAlternate, i / 4);
                        break;
                    }
                    if (i < 0xC) {
                        if (force == 0) {
                            state = panel->page;
                        } else {
                            state = 0;
                            panel->page = 0;
                        }
                        if (force == 0 && state == 1) {
                            changed = 1;
                            partyPanelCollapse();
                        }
                        scrollOwnerSelectIndex(&panel->stockGrid, i % 4);
                        scrollListSetSelectionTracked(&panel->stockGrid, i / 4);
                        break;
                    }
                    if (force == 0) {
                        state = panel->page;
                    } else {
                        panel->page = 1;
                        state = panel->page;
                    }
                    if (force == 0) {
                        if (state == 0) {
                            changed = 1;
                            partyPanelExpand();
                        }
                    }
                    i -= 0xC;
                    scrollOwnerSelectIndex(&panel->stockGrid, i % 4);
                    scrollListSetSelectionTracked(&panel->stockGrid, i / 4);
                    break;
                }
            }
        }
    }
    return changed;
}

} /* extern "C" */
