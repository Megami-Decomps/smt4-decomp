/* NON_MATCHING: index -= 4 (unfolded), arm order and positive final guard now match; retail also merges the state-6 tails into the state-8 tail (b 178) and copies the state-6 part pointer through r0 into r5, ours keeps separate tails. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
s32 objectPartRunUnlessLocked(void *part);
s32 listCursorGetRowIfUnblocked(void *part);
}

static __inline s32 selectedPartyPositionToSlot(s32 position)
{
    if (position == 0) {
        return -1;
    }
    return gameGetSlotTable()->active[position - 1];
}

/* Resolves the active party-panel selection to the persistent unit's id, or -1 when no unit is selected. */
extern "C" s32 FUN_00282ccc(void)
{
    PartyPanelState *panel = g_partyPanel;
    s32 slot = 0;
    if (panel->pendingState == 6 || panel->sceneState == 6) {
        s32 index;
        if (panel->alternate != 0) {
            void *part = &panel->stockGridAlternate;
            s32 cursor = objectPartRunUnlessLocked(part);
            index = cursor + listCursorGetRowIfUnblocked(part) * 4;
        } else {
            index = listCursorGetRowIfUnblocked(&panel->stockGrid) * 4 + panel->page * 12;
            index += objectPartRunUnlessLocked(&panel->stockGrid);
        }
        slot = (s32)panel->entries[index].packedIndex;
    } else if (panel->pendingState == 4 || panel->sceneState == 4) {
        slot = selectedPartyPositionToSlot(objectPartRunUnlessLocked(&panel->partyGrid));
    } else if (panel->pendingState == 8 || panel->sceneState == 8) {
        void *part = &panel->fullGrid;
        if (panel->alternate != 0) {
            part = &panel->fullGridAlternate;
        }
        if (listCursorGetRowIfUnblocked(part) < 1) {
            slot = selectedPartyPositionToSlot(objectPartRunUnlessLocked(part));
        } else {
            s32 index;
            if (panel->alternate != 0) {
                s32 cursor = objectPartRunUnlessLocked(part);
                index = cursor + listCursorGetRowIfUnblocked(part) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(part) * 4 + panel->page * 12;
                index += objectPartRunUnlessLocked(part);
            }
            index -= 4;
            slot = (s32)panel->entries[index].packedIndex;
        }
    } else if (panel->pendingState == 10 || panel->sceneState == 10) {
        slot = panel->selection;
    }
    if (slot >= 0) {
        return (s16)gameGetUnitRecord(slot)->id;
    }
    return -1;
}
