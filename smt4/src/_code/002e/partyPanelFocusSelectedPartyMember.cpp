#include "ui/UiSpriteApi.h"
#include "ui/PartyPanelState.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
void slotPlacementAssignSlotAndPosition(PartyPanelWidget *, u32);
void partyPanelConfigureGridNavigation();
void scrollOwnerSelectIndex(GridNavigation *, s32);
void scrollListSetSelectionMarkChanged(ScrollSelection *, s32);
}

/* Flips the page flag, plays animation 5 and refreshes every character and demon widget. */
static void partyPanelCollapse(void)
{
    PartyPanelState *panel = g_partyPanel;
    s32 i;

    panel->page ^= 1;
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 5, 0);
    for (i = 0; i < 4; i++) {
        slotPlacementAssignSlotAndPosition(panel->characters[i], panel->page);
    }
    for (i = 0; i < 24; i++) {
        slotPlacementAssignSlotAndPosition(panel->demons[i], panel->page);
    }
    partyPanelConfigureGridNavigation();
}

/* Flips the page flag, plays animation 4 and refreshes every character and demon widget. */
static void partyPanelExpand(void)
{
    PartyPanelState *panel = g_partyPanel;
    s32 i;

    panel->page ^= 1;
    uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_PAGE], 4, 0);
    for (i = 0; i < 4; i++) {
        slotPlacementAssignSlotAndPosition(panel->characters[i], panel->page);
    }
    for (i = 0; i < 24; i++) {
        slotPlacementAssignSlotAndPosition(panel->demons[i], panel->page);
    }
    partyPanelConfigureGridNavigation();
}

/* Moves the panel cursor onto the selected party member's roster slot, switching pages unless `force`
 * sets the page directly; returns 1 when the page was switched. */
extern "C" u32 partyPanelFocusSelectedPartyMember(s32 force)
{
    PartyPanelState *panel = g_partyPanel;
    const s8 *table = reinterpret_cast<const s8 *>(gameGetSlotTable());
    u32 changed = 0;

    if (panel->partySlot > 0) {
        s32 unit = table[0x9107 + panel->partySlot];
        if (unit >= 0) {
            s32 i;
            for (i = 0; i < 24; i++) {
                s32 rosterUnit = static_cast<s32>(panel->entries[i].packedIndex);
                if (unit == rosterUnit) {
                    s32 state;
                    if (panel->alternate != 0) {
                        scrollOwnerSelectIndex(&panel->stockGridAlternate, i % 4);
                        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->stockGridAlternate), i / 4);
                        break;
                    }
                    if (i < 12) {
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
                        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->stockGrid), i / 4);
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
                    i -= 12;
                    scrollOwnerSelectIndex(&panel->stockGrid, i % 4);
                    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->stockGrid), i / 4);
                    break;
                }
            }
        }
    }
    return changed;
}
