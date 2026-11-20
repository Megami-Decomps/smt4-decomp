#include "common.h"
#include <stddef.h>
#include "ui/PartyPanelStateA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

void slotPlacementAssignSlotPosition(PartyPanelWidget *widget, u32 toggle);
void slotPlacementStartTransition(PartyPanelWidget *widget, s32 alternate);
void slotPlacementSetSlot(PartyPanelWidget *widget, s32 slot);
s32 slotIsReservePick(void);
void partyPanelRefreshFusionAvailability(void);
void partyPanelRefreshFilterMarks(void);

/* Resets the party panel's slot widgets (the protagonist, the three party rows and the 24 stock cells) and fills
 * them from the slot table, then refreshes the fusion marks of the panel's current mode. */
void partyPanelResetWidgets(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *table = gameGetSlotTable();
    s32 i;

    slotPlacementAssignSlotPosition(panel->characters[0], 0);
    slotPlacementStartTransition(panel->characters[0], panel->alternate == 1);
    partyWidgetSetTransitionActive(panel->characters[0], 0);
    partyWidgetSetTransitionHeld(panel->characters[0], 0);
    partyWidgetSetTransitionPending(panel->characters[0], 0);
    for (i = 0; i < 3; i++) {
        slotPlacementAssignSlotPosition(panel->characters[i + 1], panel->page);
        slotPlacementStartTransition(panel->characters[i + 1], panel->alternate == 1);
        slotPlacementSetSlot(panel->characters[i + 1], i + 1);
        if (table->reserve[i] < 0) {
            partyWidgetSetEmpty(panel->characters[i + 1], 1);
        } else {
            SlotRecordA *record;

            partyWidgetSetEmpty(panel->characters[i + 1], 0);
            partyWidgetSetUnitId(panel->characters[i + 1], table->reserve[i]);
            record = gameGetSlotRecord(table->reserve[i]);
            if (record->ailments & 4)
                partyWidgetSetFlagB(panel->characters[i + 1], 1);
            else
                partyWidgetSetFlagB(panel->characters[i + 1], 0);
        }
        partyWidgetSetTransitionActive(panel->characters[i + 1], 0);
        partyWidgetSetTransitionHeld(panel->characters[i + 1], 0);
        partyWidgetSetTransitionPending(panel->characters[i + 1], 0);
    }
    for (i = 0; i < 24; i++) {
        slotPlacementAssignSlotPosition(panel->demons[i], panel->page);
        slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        slotPlacementSetSlot(panel->demons[i], i + 4);
        partyWidgetSetTransitionActive(panel->demons[i], 0);
        partyWidgetSetTransitionHeld(panel->demons[i], 0);
        partyWidgetSetTransitionPending(panel->demons[i], 0);
        if ((s32)panel->entries[i].packedIndex < 0 /* the index is signed */) {
            partyWidgetSetEmpty(panel->demons[i], 1);
        } else {
            SlotRecordA *record;

            partyWidgetSetEmpty(panel->demons[i], 0);
            partyWidgetSetUnitId(panel->demons[i], panel->entries[i].packedIndex);
            record = gameGetSlotRecord(panel->entries[i].packedIndex);
            partyWidgetSetHasTag(panel->demons[i], slotIsReservePick() != 0);
            if (record->ailments & 0x400)
                partyWidgetSetFlagA(panel->demons[i], 1);
            else
                partyWidgetSetFlagA(panel->demons[i], 0);
            if (record->ailments & 4)
                partyWidgetSetFlagB(panel->demons[i], 1);
            else
                partyWidgetSetFlagB(panel->demons[i], 0);
        }
    }
    if (panel->panelState == 10 || panel->panelState == 18) {
        partyPanelRefreshFusionAvailability();
    }
    if (panel->panelState == 11) {
        partyPanelRefreshFilterMarks();
    }
}

} /* extern "C" */
