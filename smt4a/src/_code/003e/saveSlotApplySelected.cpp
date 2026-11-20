#include "battle/BattleUnitInit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

UnitSourceRecord *saveSlotFindSelected(void);
void btlUnitStateInitFromRecord(u32 target, BattleUnitState *unit, UnitSourceRecord *record, s32 useSaveSlot);
void FUN_004ca63c(u32 target, BattleUnitState *unit, s32 kind, s32 index, s32 flags);

/* Loads the selected save slot's data and applies it to the target. */
void saveSlotApplySelected(u32 target)
{
    BtlCombatantEntryA entry;
    UnitSourceRecord *slot = saveSlotFindSelected();

    if (slot != 0) {
        btlUnitStateInitFromRecord(target, reinterpret_cast<BattleUnitState *>(&entry.data), slot, 0);
        FUN_004ca63c(target, reinterpret_cast<BattleUnitState *>(&entry.data), 2, 0x36, 0);
    }
}

} /* extern "C" */
