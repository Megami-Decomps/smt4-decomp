/* NON_MATCHING: index -= 4 (unfolded), arm order and positive final guard now match; retail also merges the state-6 tails into the state-8 tail (b 178) and copies the state-6 part pointer through r0 into r5, ours keeps separate tails. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 objectPartRunUnlessLocked(void *part);
s32 FUN_0029efa8(void *part);
PartyDamageSlotsIV *gameGetSlotTable(void);
StatBlock *gameGetUnitRecord(s32 slot);
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
    if (panel->history.unk20 == 6 || panel->sceneState == 6) {
        s32 index;
        if (panel->unk42 != 0) {
            void *part = panel->transitionParts.stateSixParts.secondary;
            s32 cursor = objectPartRunUnlessLocked(part);
            index = cursor + FUN_0029efa8(part) * 4;
        } else {
            index = FUN_0029efa8(panel->transitionParts.stateSixParts.primary) * 4 + panel->unk2C * 12;
            index += objectPartRunUnlessLocked(panel->transitionParts.stateSixParts.primary);
        }
        slot = (s32)panel->previewUnits[index].packedIndex;
    } else if (panel->history.unk20 == 4 || panel->sceneState == 4) {
        slot = selectedPartyPositionToSlot(objectPartRunUnlessLocked(panel->transitionParts.stateFourPart));
    } else if (panel->history.unk20 == 8 || panel->sceneState == 8) {
        void *part = panel->transitionParts.primaryPart;
        if (panel->unk42 != 0) {
            part = panel->transitionParts.secondaryPart;
        }
        if (FUN_0029efa8(part) < 1) {
            slot = selectedPartyPositionToSlot(objectPartRunUnlessLocked(part));
        } else {
            s32 index;
            if (panel->unk42 != 0) {
                s32 cursor = objectPartRunUnlessLocked(part);
                index = cursor + FUN_0029efa8(part) * 4;
            } else {
                index = FUN_0029efa8(part) * 4 + panel->unk2C * 12;
                index += objectPartRunUnlessLocked(part);
            }
            index -= 4;
            slot = (s32)panel->previewUnits[index].packedIndex;
        }
    } else if (panel->history.unk20 == 10 || panel->sceneState == 10) {
        slot = panel->pendingSelection.selection;
    }
    if (slot >= 0) {
        return (s16)gameGetUnitRecord(slot)->id;
    }
    return -1;
}
