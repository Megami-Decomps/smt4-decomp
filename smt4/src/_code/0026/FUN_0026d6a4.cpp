#include "ui/UiSpriteApi.h"
#include "common.h"
#include "camp/CampMenuEntry.h"
#include "code/Code002a_VariantA.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "status/StatusCamera.h"
#include "ui/PartyPanelState.h"

extern "C" {

s32 inputQueryButtonState(s32 key, s32 mode);
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void objClearFlagPair(GridNavigation *grid);
void partyPanelConfigureGridNavigation(void);
void slotPlacementAssignSlotAndPosition(PartyPanelWidget *widget, u32 slot);
void slotPlacementStartTransition(PartyPanelWidget *widget, u8 mode);
void partyPanelRebuildTouchRegions(void);
s32 FUN_0029e02c(void);
void sortMenuCreate(u32 owner, u8 option);
void useCounterStart(void);
void partyPanelSetState(s32 state, s32 rememberPrevious);

/* The party panel's help-view toggle: flips the alternate layout, reselects the matching list entry in
 * the list that takes over and restarts the widget placement transitions. Without the toggle key it opens
 * the sort menu instead. */
u32 FUN_0026d6a4(s32 enabled)
{
    u32 result = 0;
    PartyPanelState *panel = g_partyPanel;
    if (inputQueryButtonState(10, 1) != 0) {
        panel->alternate ^= 1;
        if (panel->alternate != 0)
            uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 6, 0);
        else
            uiSpriteSetKeyframe(&panel->sprites[PARTY_PANEL_SPRITE_LAYOUT], 4, 0);
        eventQueueAddUniqueIfValid(0x100016d);
        switch (panel->sceneState) {
        case 6:
            if (panel->alternate != 0) {
                scrollOwnerSelectIndex(&panel->stockGridAlternate, objectPartRunUnlessLocked(&panel->stockGrid));
                scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->stockGridAlternate, panel->page * 3 + listCursorGetRowIfUnblocked(&panel->stockGrid));
            } else {
                if (listCursorGetRowIfUnblocked(&panel->stockGridAlternate) >= 3 && panel->pageCount > 1)
                    panel->page = 1;
                else
                    panel->page = 0;
                partyPanelConfigureGridNavigation();
                scrollOwnerSelectIndex(&panel->stockGrid, objectPartRunUnlessLocked(&panel->stockGridAlternate));
                if (listCursorGetRowIfUnblocked(&panel->stockGridAlternate) >= 3) {
                    if (panel->pageCount > 1)
                        scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->stockGrid, listCursorGetRowIfUnblocked(&panel->stockGridAlternate) - panel->page * 3);
                    else
                        scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->stockGrid, 2);
                } else {
                    scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->stockGrid, listCursorGetRowIfUnblocked(&panel->stockGridAlternate));
                }
                objClearFlagPair(&panel->stockGrid);
            }
            break;
        case 8:
            if (panel->alternate != 0) {
                scrollOwnerSelectIndex(&panel->fullGridAlternate, objectPartRunUnlessLocked(&panel->fullGrid));
                if (listCursorGetRowIfUnblocked(&panel->fullGrid) < 1)
                    scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->fullGridAlternate, 0);
                else
                    scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->fullGridAlternate, panel->page * 3 + listCursorGetRowIfUnblocked(&panel->fullGrid));
            } else {
                if (listCursorGetRowIfUnblocked(&panel->fullGridAlternate) >= 4 && panel->pageCount > 1)
                    panel->page = 1;
                else
                    panel->page = 0;
                partyPanelConfigureGridNavigation();
                scrollOwnerSelectIndex(&panel->fullGrid, objectPartRunUnlessLocked(&panel->fullGridAlternate));
                if (listCursorGetRowIfUnblocked(&panel->fullGridAlternate) >= 4) {
                    if (panel->pageCount > 1)
                        scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->fullGrid, listCursorGetRowIfUnblocked(&panel->fullGridAlternate) - panel->page * 3);
                    else
                        scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->fullGrid, 3);
                } else {
                    scrollListSetSelectionMarkChanged((ScrollSelection *)&panel->fullGrid, listCursorGetRowIfUnblocked(&panel->fullGridAlternate));
                }
                objClearFlagPair(&panel->fullGrid);
            }
            break;
        }
        for (s32 i = 0; i < 4; i++) {
            slotPlacementAssignSlotAndPosition(panel->characters[i], panel->page);
            slotPlacementStartTransition(panel->characters[i], panel->alternate == 1);
        }
        for (s32 i = 0; i < 0x18; i++) {
            slotPlacementAssignSlotAndPosition(panel->demons[i], panel->page);
            slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        }
        if (panel->sceneState != 1)
            partyPanelRebuildTouchRegions();
        result = 1;
    } else if (enabled != 0 && panel->disabled == 0 && FUN_0029e02c() == 0 && inputQueryButtonState(9, 1) != 0) {
        sortMenuCreate(0, 0);
        useCounterAppendValue(2);
        useCounterAppendValue(1);
        useCounterAppendValue(4);
        useCounterAppendValue(5);
        useCounterAppendValue(0x1f);
        useCounterAppendValue(3);
        useCounterStart();
        partyPanelSetState(0xf, 1);
        gameGlobalsSetSubScreenActive(1);
        eventQueueAddUniqueIfValid(0x100016d);
        result = 1;
    }
    return result;
}

} /* extern "C" */
