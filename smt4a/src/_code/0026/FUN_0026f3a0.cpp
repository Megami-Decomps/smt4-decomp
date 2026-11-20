/* NON_MATCHING: structure and field accesses are right (party panel slot widgets reset and filled from the slot table); retail rematerialises the zero constant and the widget pointer before every byte store and uses nop-padded conditional branches where built hoists the zero into a register and predicates the empty-slot store */
#include "common.h"
#include <stddef.h>
#include "ui/PartyPanelStateA.h"

struct SlotRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 flags;
};

/* The game's slot table: the three character slots' record ids at +0x1CA0. */
struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x1CA0];
    /* 0x1CA0 */ s8 characterIds[3];
};

extern "C" {

SlotTable *gameGetSlotTable(void);
SlotRecord *gameGetSlotRecord(s32 id);
void slotPlacementAssignSlotPosition(PartyPanelWidget *widget, u32 toggle);
void slotPlacementStartTransition(PartyPanelWidget *widget, s32 alternate);
void slotPlacementSetSlot(PartyPanelWidget *widget, s32 slot);
s32 slotIsReservePick(void);
void FUN_002ade88(void);
void partyPanelRefreshFilterMarks(void);

/* Resets the slot widgets of the party panel (four characters' three slots and the 24 demon slots) and fills them from the slot table. */
void FUN_0026f3a0(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SlotTable *table = gameGetSlotTable();
    s32 i;

    slotPlacementAssignSlotPosition(panel->characters[0], 0);
    slotPlacementStartTransition(panel->characters[0], panel->alternate == 1);
    panel->characters[0]->transitionActive = 0;
    panel->characters[0]->unk26 = 0;
    panel->characters[0]->transitionPending = 0;
    for (i = 0; i < 3; i++) {
        slotPlacementAssignSlotPosition(panel->characters[i + 1], panel->page);
        slotPlacementStartTransition(panel->characters[i + 1], panel->alternate == 1);
        slotPlacementSetSlot(panel->characters[i + 1], i + 1);
        if (table->characterIds[i] < 0) {
            panel->characters[i + 1]->empty = 1;
        } else {
            SlotRecord *record;

            panel->characters[i + 1]->empty = 0;
            panel->characters[i + 1]->slot = table->characterIds[i];
            record = gameGetSlotRecord(table->characterIds[i]);
            panel->characters[i + 1]->flagB = (record->flags & 4) != 0;
        }
        panel->characters[i + 1]->transitionActive = 0;
        panel->characters[i + 1]->unk26 = 0;
        panel->characters[i + 1]->transitionPending = 0;
    }
    for (i = 0; i < 24; i++) {
        slotPlacementAssignSlotPosition(panel->demons[i], panel->page);
        slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        slotPlacementSetSlot(panel->demons[i], i + 4);
        panel->demons[i]->transitionActive = 0;
        panel->demons[i]->unk26 = 0;
        panel->demons[i]->transitionPending = 0;
        if ((s32)panel->entries[i].packedIndex < 0 /* the index is signed */) {
            panel->demons[i]->empty = 1;
        } else {
            SlotRecord *record;

            panel->demons[i]->empty = 0;
            panel->demons[i]->slot = panel->entries[i].packedIndex;
            record = gameGetSlotRecord(panel->entries[i].packedIndex);
            panel->demons[i]->hasTag = slotIsReservePick() != 0;
            panel->demons[i]->flagA = (record->flags & 0x400) != 0;
            panel->demons[i]->flagB = (record->flags & 4) != 0;
        }
    }
    if (panel->panelState == 10 || panel->panelState == 18) {
        FUN_002ade88();
    }
    if (panel->panelState == 11) {
        partyPanelRefreshFilterMarks();
    }
}

} /* extern "C" */
