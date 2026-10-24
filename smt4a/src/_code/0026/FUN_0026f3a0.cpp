/* NON_MATCHING: structure and field accesses are right (party panel slot widgets reset and filled from the slot table); retail rematerialises the zero constant and the widget pointer before every byte store and uses nop-padded conditional branches where built hoists the zero into a register and predicates the empty-slot store */
#include "common.h"
#include <stddef.h>

/* A slot widget of the party panel; only the fields this setup touches are named. */
struct SlotWidget {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 empty;
    /* 0x21 */ u8 unk21[2];
    /* 0x23 */ u8 hasTag;
    /* 0x24 */ u8 flagA;
    /* 0x25 */ u8 transitionActive;
    /* 0x26 */ u8 unk26;
    /* 0x27 */ u8 transitionPending;
    /* 0x28 */ u8 unk28;
    /* 0x29 */ u8 flagB;
    /* 0x2A */ u8 unk2A[0xA];
    /* 0x34 */ s32 slotValue;
};

struct DemonSlotValue {
    s32 value;
    s32 unk4;
};

/* The party panel state as this function sees it. */
struct PanelView {
    /* 0x000 */ u8 unk000[0x2C];
    /* 0x02C */ u32 toggle;
    /* 0x030 */ u8 unk030[0x12];
    /* 0x042 */ u8 alternate;
    /* 0x043 */ u8 unk043[0x971];
    /* 0x9B4 */ u8 mode;
    /* 0x9B5 */ u8 unk9B5[0x5B];
    /* 0xA10 */ SlotWidget *characters[4];
    /* 0xA20 */ SlotWidget *demons[24];
    /* 0xA80 */ DemonSlotValue demonValues[24];
};
typedef char PanelViewLayout[offsetof(PanelView, mode) == 0x9B4 && offsetof(PanelView, demons) == 0xA20 &&
    offsetof(PanelView, demonValues) == 0xA80 ? 1 : -1];

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

extern PanelView *g_partyPanel;

SlotTable *gameGetSlotTable(void);
SlotRecord *gameGetSlotRecord(s32 id);
void FUN_003f5220(SlotWidget *widget, u32 toggle);
void slotPlacementStartTransition(SlotWidget *widget, s32 alternate);
void slotPlacementSetSlot(SlotWidget *widget, s32 slot);
s32 FUN_004bd0d8(void);
void FUN_002ade88(void);
void partyPanelRefreshFilterMarks(void);

/* Resets the slot widgets of the party panel (four characters' three slots and the 24 demon slots) and fills them from the slot table. */
void FUN_0026f3a0(void)
{
    PanelView *panel = g_partyPanel;
    SlotTable *table = gameGetSlotTable();
    s32 i;

    FUN_003f5220(panel->characters[0], 0);
    slotPlacementStartTransition(panel->characters[0], panel->alternate == 1);
    panel->characters[0]->transitionActive = 0;
    panel->characters[0]->unk26 = 0;
    panel->characters[0]->transitionPending = 0;
    for (i = 0; i < 3; i++) {
        FUN_003f5220(panel->characters[i + 1], panel->toggle);
        slotPlacementStartTransition(panel->characters[i + 1], panel->alternate == 1);
        slotPlacementSetSlot(panel->characters[i + 1], i + 1);
        if (table->characterIds[i] < 0) {
            panel->characters[i + 1]->empty = 1;
        } else {
            SlotRecord *record;

            panel->characters[i + 1]->empty = 0;
            panel->characters[i + 1]->slotValue = table->characterIds[i];
            record = gameGetSlotRecord(table->characterIds[i]);
            panel->characters[i + 1]->flagB = (record->flags & 4) != 0;
        }
        panel->characters[i + 1]->transitionActive = 0;
        panel->characters[i + 1]->unk26 = 0;
        panel->characters[i + 1]->transitionPending = 0;
    }
    for (i = 0; i < 24; i++) {
        FUN_003f5220(panel->demons[i], panel->toggle);
        slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        slotPlacementSetSlot(panel->demons[i], i + 4);
        panel->demons[i]->transitionActive = 0;
        panel->demons[i]->unk26 = 0;
        panel->demons[i]->transitionPending = 0;
        if (panel->demonValues[i].value < 0) {
            panel->demons[i]->empty = 1;
        } else {
            SlotRecord *record;

            panel->demons[i]->empty = 0;
            panel->demons[i]->slotValue = panel->demonValues[i].value;
            record = gameGetSlotRecord(panel->demonValues[i].value);
            panel->demons[i]->hasTag = FUN_004bd0d8() != 0;
            panel->demons[i]->flagA = (record->flags & 0x400) != 0;
            panel->demons[i]->flagB = (record->flags & 4) != 0;
        }
    }
    if (panel->mode == 10 || panel->mode == 18) {
        FUN_002ade88();
    }
    if (panel->mode == 11) {
        partyPanelRefreshFilterMarks();
    }
}

} /* extern "C" */
