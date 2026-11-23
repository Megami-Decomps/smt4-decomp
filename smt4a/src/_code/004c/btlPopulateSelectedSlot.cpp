/* NON_MATCHING: 8 lines, the render-flags update at the end: retail builds it in r2, the build in r1. It matches
 * through a 64-bit view of the word at 0x58 (BattleRosterRecordA::removal.flags), but the record's other users
 * update that word as the u32 motion.renderFlags (FUN_004caca0, battleUnitUpdateModelLoad), and FUN_004caca0 does not
 * match with a u64 field: one view per field. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct BattleSlotCore { u8 data[0x2ac]; };
struct BattleSlotVisual;
struct BattleSlotId { u32 id; u32 unk04; };
struct BattleSlotState {
    u8 unk0000[0x1ed4];
    BattleRosterRecordA *units; /* 0x1ed4 */
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
void btlUnitStateInitFromEnemyRecord(BattleSlotState *, BattleSlotCore *, void *);
PartySlotMap *gameGetSlotTable();
RecoverableSlot *gameGetSlotRecord(s32);
s32 bitsAt60Test(RecoverableSlot *, u32);
u16 recordGetScaledMaximum(RecoverableSlot *);
void bitsAt60Clear(RecoverableSlot *, u32);
void btlInitializeDemonUnitState(BattleSlotState *, BattleSlotCore *, RecoverableSlot *, u32);
BattleSlotVisual *FUN_003e83b4(BattleSlotState *, s32, u32);
void btlQueueActionMessage(s32, s32, u32, s32, s32, s32, s32);
void FUN_004a9c24(BtlUiA *ui, s32, s32, s32);
void FUN_004ca63c(BattleSlotState *, BattleSlotCore *, s32, s32, s32);

// Populate a battle slot from a table definition or a selected saved party member.
void btlPopulateSelectedSlot(s32 kind, s32 slot, s32 destination, s32 animate)
{
    BattleSlotState *battle = reinterpret_cast<BattleSlotState *>(btlGetMainState());
    BtlCombatantEntryA scratch;
    if (kind == 0) {
        PartySlotMap *party = gameGetSlotTable();
        RecoverableSlot *record = gameGetSlotRecord(party->selected[slot]);
        if (bitsAt60Test(record, 1)) {
            record->hp = recordGetScaledMaximum(record);
            bitsAt60Clear(record, 2);
        }
        btlInitializeDemonUnitState(battle, (BattleSlotCore *)&scratch.data, record, 0);
        if (party->selected[slot] >= 0) {
            const BtlCombatantEntryA *unit = (const BtlCombatantEntryA *)FUN_003e83b4(battle, destination, 0);
            s32 assignedIndex = unit->selectionIndex - 1;
            party->assigned[assignedIndex] = party->selected[slot];
            s32 immediate = 1;
            if (animate > 0) {
                immediate = 0;
                btlQueueActionMessage(0, 0, 0x1000271, 0, 0, 0, 0);
            }
            FUN_004a9c24(g_btlUiBlock, unit->selectionIndex, party->selected[slot], immediate);
        }
    } else {
        void *definition = nkmEnemyFindById((u16)battle->slots[slot].id);
        if (definition == NULL)
            return;
        btlUnitStateInitFromEnemyRecord(battle, (BattleSlotCore *)&scratch.data, definition);
    }
    FUN_004ca63c(battle, (BattleSlotCore *)&scratch.data, kind, destination, 1);
    if (kind == 1) {
        BattleRosterRecordA *unit = &battle->units[destination];
        u32 flags = unit->motion.flags;
        if ((flags & 1) && (flags & 0x80) && !(flags & 2)) {
            if (unit->motion.useAlternateState == 0) {
                unit->motion.state = 5;
            } else {
                unit->motion.state = 6;
            }
            unit->motion.stateFrame = 0;
            unit->motion.renderFlags = (unit->motion.renderFlags & ~6u) | 1;
        }
    }
}
}
