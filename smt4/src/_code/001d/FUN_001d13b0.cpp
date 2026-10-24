/* NON_MATCHING: logic recovered; retail re-materialises each zero store and re-reads the placement pointers with a different register scheme (22 rows more), the party panel struct is a local view. */
#include "common.h"

namespace {
// One slot placement widget of the party panel.
struct SlotPlacement {
    u8 unk00[0x20];
    u8 empty;               // 0x20
    u8 unk21[2];
    u8 flagA;               // 0x23
    u8 flagB;               // 0x24
    u8 unk25;               // 0x25
    u8 unk26;               // 0x26
    u8 unk27;               // 0x27
    u8 unk28;
    u8 flagC;               // 0x29
    u8 unk2A[0xA];
    s32 unitId;             // 0x34
};

struct ReserveRecord {
    s32 unitId;             // 0x00
    s32 unk04;
};

struct PartyPanel {
    u8 unk00[0x2C];
    u32 transitionArg;      // 0x2C
    u8 unk30[0x12];
    s8 transitionMode;      // 0x42
    u8 unk43[0x629];
    s8 state;               // 0x66C
    u8 unk66D[0x5B];
    SlotPlacement *placements[28]; // 0x6C8: leader, 3 party slots, 24 reserve slots
    ReserveRecord reserve[24];     // 0x738
};

struct SlotTable {
    u8 unk0000[0x9108];
    s8 unitId[3];           // 0x9108
};

struct UnitRecord {
    u8 unk00[0x44];
    u16 flags;              // 0x44
};
}

extern "C" {
extern PartyPanel *g_partyPanel;
SlotTable *gameGetSlotTable(void);
void slotPlacementSetSlot(SlotPlacement *placement, s32 slot);
void slotPlacementStartTransition(SlotPlacement *placement, s32 immediate);
void FUN_0029378c(SlotPlacement *placement, u32 arg);
UnitRecord *gameGetUnitRecord(s32 id);
s32 FUN_00295d7c(void);
void FUN_0026c9c0(void);
void FUN_002e36f8(void);

/* Reset the party panel's placements: the leader, the three party slots and the reserve list. */
void FUN_001d13b0(void)
{
    PartyPanel *panel = g_partyPanel;
    SlotTable *slots = gameGetSlotTable();
    FUN_0029378c(panel->placements[0], 0);
    slotPlacementStartTransition(panel->placements[0], panel->transitionMode == 1);
    panel->placements[0]->unk25 = 0;
    panel->placements[0]->unk26 = 0;
    panel->placements[0]->unk27 = 0;
    for (s32 i = 0; i < 3; i++) {
        SlotPlacement **placement = &panel->placements[1 + i];
        FUN_0029378c(*placement, panel->transitionArg);
        slotPlacementStartTransition(*placement, panel->transitionMode == 1);
        slotPlacementSetSlot(*placement, i + 1);
        if (slots->unitId[i] < 0) {
            (*placement)->empty = 1;
        } else {
            (*placement)->empty = 0;
            (*placement)->unitId = slots->unitId[i];
        }
        (*placement)->unk25 = 0;
        (*placement)->unk26 = 0;
        (*placement)->unk27 = 0;
    }
    for (s32 i = 0; i < 24; i++) {
        SlotPlacement **placement = &panel->placements[4 + i];
        FUN_0029378c(*placement, panel->transitionArg);
        slotPlacementStartTransition(*placement, panel->transitionMode == 1);
        slotPlacementSetSlot(*placement, i + 4);
        (*placement)->unk25 = 0;
        (*placement)->unk26 = 0;
        (*placement)->unk27 = 0;
        if (panel->reserve[i].unitId < 0) {
            (*placement)->empty = 1;
        } else {
            (*placement)->empty = 0;
            (*placement)->unitId = panel->reserve[i].unitId;
            UnitRecord *unit = gameGetUnitRecord(panel->reserve[i].unitId);
            (*placement)->flagA = FUN_00295d7c() != 0;
            (*placement)->flagB = (unit->flags & 0x400) != 0;
            (*placement)->flagC = (unit->flags & 4) != 0;
        }
    }
    if (panel->state == 10) {
        FUN_0026c9c0();
    }
    if (panel->state != 11) {
        return;
    }
    FUN_002e36f8();
}
}
