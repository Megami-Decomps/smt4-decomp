/* NON_MATCHING: the party-slot loop and the inlined slotPlacementSet* setters match retail; in the reserve loop armcc folds the first slot-pointer load into a write-back (`ldr r0,[r6,#1752]!`) where retail forms the base and the slot pointer separately, which swaps r6/r7 there. */
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
    u8 state;               // 0x66C
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
void slotPlacementSetEmpty(SlotPlacement *placement, u8 value);
void slotPlacementSetUnitId(SlotPlacement *placement, s32 value);
void slotPlacementSetFlagA(SlotPlacement *placement, s32 value);
void slotPlacementSetFlagB(SlotPlacement *placement, s32 value);
void slotPlacementSetFlagC(SlotPlacement *placement, s32 value);
void slotPlacementSetUnk25(SlotPlacement *placement, u8 value);
void slotPlacementSetUnk26(SlotPlacement *placement, u8 value);
void slotPlacementSetUnk27(SlotPlacement *placement, u8 value);
void FUN_002e36f8(void);

/* Reset the party panel's placements: the leader, the three party slots and the reserve list. */
void FUN_001d13b0(void)
{
    PartyPanel *panel = g_partyPanel;
    SlotTable *slots = gameGetSlotTable();
    FUN_0029378c(panel->placements[0], 0);
    slotPlacementStartTransition(panel->placements[0], panel->transitionMode == 1);
    slotPlacementSetUnk25(panel->placements[0], 0);
    slotPlacementSetUnk26(panel->placements[0], 0);
    slotPlacementSetUnk27(panel->placements[0], 0);
    for (s32 i = 0; i < 3; i++) {
        FUN_0029378c(panel->placements[1 + i], panel->transitionArg);
        slotPlacementStartTransition(panel->placements[1 + i], panel->transitionMode == 1);
        slotPlacementSetSlot(panel->placements[1 + i], i + 1);
        SlotPlacement **placement = &panel->placements[1 + i];
        if (slots->unitId[i] < 0) {
            slotPlacementSetEmpty(panel->placements[1 + i], 1);
        } else {
            slotPlacementSetEmpty(panel->placements[1 + i], 0);
            slotPlacementSetUnitId(*placement, slots->unitId[i]);
        }
        slotPlacementSetUnk25(panel->placements[1 + i], 0);
        slotPlacementSetUnk26(*placement, 0);
        slotPlacementSetUnk27(*placement, 0);
    }
    for (s32 i = 0; i < 24; i++) {
        FUN_0029378c(panel->placements[4 + i], panel->transitionArg);
        slotPlacementStartTransition(panel->placements[4 + i], panel->transitionMode == 1);
        SlotPlacement **placement = &panel->placements[4 + i];
        slotPlacementSetSlot(*placement, i + 4);
        slotPlacementSetUnk25(*placement, 0);
        slotPlacementSetUnk26(*placement, 0);
        slotPlacementSetUnk27(*placement, 0);
        if (panel->reserve[i].unitId < 0) {
            slotPlacementSetEmpty(panel->placements[4 + i], 1);
        } else {
            slotPlacementSetEmpty(panel->placements[4 + i], 0);
            slotPlacementSetUnitId(*placement, panel->reserve[i].unitId);
            UnitRecord *unit = gameGetUnitRecord(panel->reserve[i].unitId);
            slotPlacementSetFlagA(panel->placements[4 + i], FUN_00295d7c() != 0);
            s32 flagB;
            if (unit->flags & 0x400) {
                flagB = 1;
            } else {
                flagB = 0;
            }
            slotPlacementSetFlagB(panel->placements[4 + i], flagB);
            s32 flagC;
            if (unit->flags & 4) {
                flagC = 1;
            } else {
                flagC = 0;
            }
            slotPlacementSetFlagC(panel->placements[4 + i], flagC);
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
