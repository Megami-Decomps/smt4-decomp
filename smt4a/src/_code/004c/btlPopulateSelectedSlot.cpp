/* NON_MATCHING: retail pads the register push with ip (frame 1056) where the build extends the frame by 4, and loads the final transition flags after the state store (built hoists it above the compare); all other instructions agree. */
#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleSlotCore { u8 data[0x2ac]; };
struct BattleSlotScratch {
    u8 unk000[0x164];
    BattleSlotCore core; // 0x164
};
struct BattleSlotVisual {
    u8 unk00[0x48];
    u32 state; // 0x48
    u32 phase; // 0x4c
    u32 flags; // 0x50
    u32 unk54;
    u32 transitionFlags; // 0x58
    u8 unk5c[0x12];
    s16 unitIndex; // 0x6e
    u8 unk70[0x30];
    u8 alternate; // 0xa0
    u8 unka1[0x12f];
};
struct BattleSlotId { u32 id; u32 unk04; };
struct BattleSlotState {
    u8 unk0000[0x1ed4];
    BattleSlotVisual *units; // 0x1ed4
    u8 unk1ed8[0x130];
    BattleSlotId slots[1]; // 0x2008
};
struct PartySlotMap {
    u8 unk0000[0x1c88];
    s8 selected[24]; // 0x1c88
    s8 assigned[1]; // 0x1ca0
};
struct RecoverableSlot {
    u8 unk00[0x2a];
    u16 hp; // 0x2a
};
extern "C" {
extern void *g_btlUiBlock;
void *dataTable00FindById(u16);
void FUN_003eb314(BattleSlotState *, BattleSlotCore *, void *);
PartySlotMap *gameGetSlotTable();
RecoverableSlot *gameGetSlotRecord(s32);
s32 bitsAt60Test(RecoverableSlot *, u32);
u16 recordGetScaledMaximum(RecoverableSlot *);
void bitsAt60Clear(RecoverableSlot *, u32);
void FUN_003e9cec(BattleSlotState *, BattleSlotCore *, RecoverableSlot *, u32);
BattleSlotVisual *FUN_003e83b4(BattleSlotState *, s32, u32);
void FUN_004fb43c(s32, s32, u32, s32, s32, s32, s32);
void FUN_004a9c24(void *, s32, s32, s32);
void FUN_004ca63c(BattleSlotState *, BattleSlotCore *, s32, s32, s32);

// Populate a battle slot from a table definition or a selected saved party member.
void btlPopulateSelectedSlot(s32 kind, s32 slot, s32 destination, s32 animate)
{
    BattleSlotState *battle = reinterpret_cast<BattleSlotState *>(btlGetMainState());
    BattleSlotScratch scratch;
    if (kind == 0) {
        PartySlotMap *party = gameGetSlotTable();
        RecoverableSlot *record = gameGetSlotRecord(party->selected[slot]);
        if (bitsAt60Test(record, 1)) {
            record->hp = recordGetScaledMaximum(record);
            bitsAt60Clear(record, 2);
        }
        FUN_003e9cec(battle, &scratch.core, record, 0);
        if (party->selected[slot] >= 0) {
            BattleSlotVisual *unit = FUN_003e83b4(battle, destination, 0);
            s32 assignedIndex = unit->unitIndex - 1;
            party->assigned[assignedIndex] = party->selected[slot];
            s32 immediate = 1;
            if (animate > 0) {
                immediate = 0;
                FUN_004fb43c(0, 0, 0x1000271, 0, 0, 0, 0);
            }
            FUN_004a9c24(g_btlUiBlock, unit->unitIndex, party->selected[slot], immediate);
        }
    } else {
        void *definition = dataTable00FindById((u16)battle->slots[slot].id);
        if (definition == NULL)
            return;
        FUN_003eb314(battle, &scratch.core, definition);
    }
    FUN_004ca63c(battle, &scratch.core, kind, destination, 1);
    if (kind == 1) {
        BattleSlotVisual *unit = &battle->units[destination];
        u32 flags = unit->flags;
        if ((flags & 1) && (flags & 0x80) && !(flags & 2)) {
            unit->state = unit->alternate == 0 ? 5 : 6;
            unit->phase = 0;
            unit->transitionFlags &= ~6u;
            unit->transitionFlags |= 1;
        }
    }
}
}
