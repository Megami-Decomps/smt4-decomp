/* NON_MATCHING: the party-slot loop and the inlined slotPlacementSet* setters match retail; in the reserve loop armcc folds the first slot-pointer load into a write-back (`ldr r0,[r6,#1752]!`) where retail forms the base and the slot pointer separately, which swaps r6/r7 there. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitRecordAccess.h"

namespace {
struct SlotTable {
    u8 unk0000[0x9108];
    s8 unitId[3];           // 0x9108
};

}

extern "C" {
SlotTable *gameGetSlotTable(void);
void slotPlacementSetSlot(PartyPanelWidget *placement, s32 slot);
void slotPlacementStartTransition(PartyPanelWidget *placement, s32 immediate);
void slotPlacementAssignSlotAndPosition(PartyPanelWidget *placement, u32 arg);
s32 slotUnitIsInActiveParty(void);
void FUN_0026c9c0(void);
void slotPlacementSetEmpty(PartyPanelWidget *placement, u8 value);
void slotPlacementSetUnitId(PartyPanelWidget *placement, s32 value);
void slotPlacementSetFlagA(PartyPanelWidget *placement, s32 value);
void slotPlacementSetFlagB(PartyPanelWidget *placement, s32 value);
void slotPlacementSetFlagC(PartyPanelWidget *placement, s32 value);
void slotPlacementSetUnk25(PartyPanelWidget *placement, u8 value);
void slotPlacementSetUnk26(PartyPanelWidget *placement, u8 value);
void slotPlacementSetUnk27(PartyPanelWidget *placement, u8 value);
void FUN_002e36f8(void);

/* Reset the party panel's placements: the leader, the three party slots and the reserve list. */
void FUN_001d13b0(void)
{
    PartyPanelState *panel = g_partyPanel;
    SlotTable *slots = gameGetSlotTable();
    slotPlacementAssignSlotAndPosition(panel->characters[0], 0);
    slotPlacementStartTransition(panel->characters[0], panel->alternate == 1);
    slotPlacementSetUnk25(panel->characters[0], 0);
    slotPlacementSetUnk26(panel->characters[0], 0);
    slotPlacementSetUnk27(panel->characters[0], 0);
    for (s32 i = 0; i < 3; i++) {
        slotPlacementAssignSlotAndPosition(panel->characters[1 + i], panel->page);
        slotPlacementStartTransition(panel->characters[1 + i], panel->alternate == 1);
        slotPlacementSetSlot(panel->characters[1 + i], i + 1);
        PartyPanelWidget **placement = &panel->characters[1 + i];
        if (slots->unitId[i] < 0) {
            slotPlacementSetEmpty(panel->characters[1 + i], 1);
        } else {
            slotPlacementSetEmpty(panel->characters[1 + i], 0);
            slotPlacementSetUnitId(*placement, slots->unitId[i]);
        }
        slotPlacementSetUnk25(panel->characters[1 + i], 0);
        slotPlacementSetUnk26(*placement, 0);
        slotPlacementSetUnk27(*placement, 0);
    }
    for (s32 i = 0; i < 24; i++) {
        slotPlacementAssignSlotAndPosition(panel->demons[i], panel->page);
        slotPlacementStartTransition(panel->demons[i], panel->alternate == 1);
        PartyPanelWidget **placement = &panel->demons[i];
        slotPlacementSetSlot(*placement, i + 4);
        slotPlacementSetUnk25(*placement, 0);
        slotPlacementSetUnk26(*placement, 0);
        slotPlacementSetUnk27(*placement, 0);
        if (static_cast<s32>(panel->entries[i].packedIndex) < 0) {
            slotPlacementSetEmpty(panel->demons[i], 1);
        } else {
            slotPlacementSetEmpty(panel->demons[i], 0);
            slotPlacementSetUnitId(*placement, static_cast<s32>(panel->entries[i].packedIndex));
            StatBlock *unit = gameGetUnitRecord(static_cast<s32>(panel->entries[i].packedIndex));
            slotPlacementSetFlagA(panel->demons[i], slotUnitIsInActiveParty() != 0);
            s32 flagB;
            if (unit->ailments & 0x400) {
                flagB = 1;
            } else {
                flagB = 0;
            }
            slotPlacementSetFlagB(panel->demons[i], flagB);
            s32 flagC;
            if (unit->ailments & 4) {
                flagC = 1;
            } else {
                flagC = 0;
            }
            slotPlacementSetFlagC(panel->demons[i], flagC);
        }
    }
    if (panel->panelState == 10) {
        FUN_0026c9c0();
    }
    if (panel->panelState != 11) {
        return;
    }
    FUN_002e36f8();
}
}
