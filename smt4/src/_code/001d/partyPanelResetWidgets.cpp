#include "gamedata/SaveSlotTableIV.h"
#include "ui/PartyPanelState.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
void slotPlacementSetSlot(PartyPanelWidget *placement, s32 slot);
void slotPlacementStartTransition(PartyPanelWidget *placement, s32 immediate);
void slotPlacementAssignSlotAndPosition(PartyPanelWidget *placement, u32 arg);
s32 slotUnitIsInActiveParty(StatBlock *unit);
void partyWidgetSetEmpty(PartyPanelWidget *widget, u8 empty);
void partyWidgetSetUnitId(PartyPanelWidget *widget, s32 unitId);
void partyWidgetSetHasTag(PartyPanelWidget *widget, u8 value);
void partyWidgetSetFlagA(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionActive(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionHeld(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);
void partyWidgetSetFlagB(PartyPanelWidget *widget, u8 value);
void partyPanelRefreshFusionParents(void);
void partyPanelRefreshFilterMarks(void);

/* Resets the party panel's slot widgets (the protagonist, the three party rows and the 24 stock cells) and fills
 * them from the slot table, then refreshes the fusion marks of the panel's current mode. */
void partyPanelResetWidgets(void)
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *slots = gameGetSlotTable();
    s32 i;

    slotPlacementAssignSlotAndPosition(panel->characters[0], 0);
    slotPlacementStartTransition(panel->characters[0], panel->alternate == 1);
    partyWidgetSetTransitionActive(panel->characters[0], 0);
    partyWidgetSetTransitionHeld(panel->characters[0], 0);
    partyWidgetSetTransitionPending(panel->characters[0], 0);
    for (i = 0; i < 3; i++) {
        slotPlacementAssignSlotAndPosition(panel->characters[i + 1], panel->page);
        slotPlacementStartTransition(panel->characters[i + 1], panel->alternate == 1);
        slotPlacementSetSlot(panel->characters[i + 1], i + 1);
        if (slots->active[i] < 0) {
            partyWidgetSetEmpty(panel->characters[i + 1], 1);
        } else {
            partyWidgetSetEmpty(panel->characters[i + 1], 0);
            partyWidgetSetUnitId(panel->characters[i + 1], slots->active[i]);
        }
        partyWidgetSetTransitionActive(panel->characters[i + 1], 0);
        partyWidgetSetTransitionHeld(panel->characters[i + 1], 0);
        partyWidgetSetTransitionPending(panel->characters[i + 1], 0);
    }
    for (i = 0; i < 24; i++) {
        slotPlacementAssignSlotAndPosition(panel->demons[i], panel->page);
        slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        slotPlacementSetSlot(panel->demons[i], i + 4);
        partyWidgetSetTransitionActive(panel->demons[i], 0);
        partyWidgetSetTransitionHeld(panel->demons[i], 0);
        partyWidgetSetTransitionPending(panel->demons[i], 0);
        if ((s32)panel->entries[i].packedIndex < 0 /* the index is signed */) {
            partyWidgetSetEmpty(panel->demons[i], 1);
        } else {
            StatBlock *unit;

            partyWidgetSetEmpty(panel->demons[i], 0);
            partyWidgetSetUnitId(panel->demons[i], panel->entries[i].packedIndex);
            unit = gameGetUnitRecord(panel->entries[i].packedIndex);
            partyWidgetSetHasTag(panel->demons[i], slotUnitIsInActiveParty(unit) != 0);
            if (unit->ailments & 0x400)
                partyWidgetSetFlagA(panel->demons[i], 1);
            else
                partyWidgetSetFlagA(panel->demons[i], 0);
            if (unit->ailments & 4)
                partyWidgetSetFlagB(panel->demons[i], 1);
            else
                partyWidgetSetFlagB(panel->demons[i], 0);
        }
    }
    if (panel->panelState == 10) {
        partyPanelRefreshFusionParents();
    }
    if (panel->panelState == 11) {
        partyPanelRefreshFilterMarks();
    }
}

} /* extern "C" */
