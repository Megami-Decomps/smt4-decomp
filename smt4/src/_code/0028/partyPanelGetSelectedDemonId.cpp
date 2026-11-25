/* NON_MATCHING: retail computes the alternate stock-grid address in the argument register
 * before saving it; the build computes it in the saved register. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"
#include "camp/CampMenuEntry.h"
#include "code/Code002a_VariantA.h"

static __inline s32 selectedPartyPositionToSlot(s32 position)
{
    if (position == 0) {
        return -1;
    }
    return gameGetSlotTable()->active[position - 1];
}

/* Resolves the active party-panel selection to the persistent unit's id, or -1 when no unit is selected. */
extern "C" s32 partyPanelGetSelectedDemonId(void)
{
    PartyPanelState *panel = g_partyPanel;
    s32 slot = 0;
    bool stockSelected = false;
    s32 stockIndex = 0;
    if (panel->pendingState == 6 || panel->sceneState == 6) {
        if (panel->alternate != 0) {
            GridNavigation *part = &panel->stockGridAlternate;
            s32 cursor = objectPartRunUnlessLocked(part);
            stockIndex = cursor + listCursorGetRowIfUnblocked(part) * 4;
        } else {
            stockIndex = listCursorGetRowIfUnblocked(&panel->stockGrid) * 4 + panel->page * 12;
            stockIndex += objectPartRunUnlessLocked(&panel->stockGrid);
        }
        stockSelected = true;
    } else if (panel->pendingState == 4 || panel->sceneState == 4) {
        slot = selectedPartyPositionToSlot(objectPartRunUnlessLocked(&panel->partyGrid));
    } else if (panel->pendingState == 8 || panel->sceneState == 8) {
        GridNavigation *part = &panel->fullGrid;
        if (panel->alternate != 0) {
            part = &panel->fullGridAlternate;
        }
        if (listCursorGetRowIfUnblocked(part) < 1) {
            slot = selectedPartyPositionToSlot(objectPartRunUnlessLocked(part));
        } else {
            if (panel->alternate != 0) {
                s32 cursor = objectPartRunUnlessLocked(part);
                stockIndex = cursor + listCursorGetRowIfUnblocked(part) * 4;
            } else {
                stockIndex = listCursorGetRowIfUnblocked(part) * 4 + panel->page * 12;
                stockIndex += objectPartRunUnlessLocked(part);
            }
            stockIndex -= 4;
            stockSelected = true;
        }
    } else if (panel->pendingState == 10 || panel->sceneState == 10) {
        slot = panel->selection;
    }
    if (stockSelected) {
        slot = (s32)panel->entries[stockIndex].packedIndex;
    }
    if (slot >= 0) {
        return (s16)gameGetUnitRecord(slot)->id;
    }
    return -1;
}
