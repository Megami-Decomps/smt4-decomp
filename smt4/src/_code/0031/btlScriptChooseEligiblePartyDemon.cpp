#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/UnitStats.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"
extern "C" {
u32 scrGetArg(u32 argument);
s32 flagWordTestBit(const StatBlock *unit, u32 bit);
s32 slotUnitIsInActiveParty(const StatBlock *unit);
u32 randNextInRange(u32 maximum);
void scrSetResult(s32 result);

// Choose an eligible reserve demon, falling back to an eligible active combatant.
u32 btlScriptChooseEligiblePartyDemon()
{
    u32 excludedId = scrGetArg(0);
    s8 candidates[24] = {0};
    s32 result = -1;
    s8 candidateCount = 0;
    s8 activeCount = 0;
    for (s32 slot = 0; slot < gameGetSlotTable()->stockCount; ++slot) {
        s8 index = gameGetSlotTable()->stock[slot];
        if (index >= 0) {
            StatBlock *unit = gameGetUnitRecord(index);
            if (!flagWordTestBit(unit, 1) && !flagWordTestBit(unit, 10) &&
                !flagWordTestBit(unit, 2) && unit->id != excludedId) {
                if (!slotUnitIsInActiveParty(unit)) {
                    candidates[candidateCount] = index;
                    candidateCount = static_cast<s8>(candidateCount + 1);
                } else {
                    activeCount = static_cast<s8>(activeCount + 1);
                }
            }
        }
    }
    if (candidateCount > 0) {
        s8 choice = static_cast<s8>(randNextInRange(static_cast<u16>(candidateCount - 1)));
        result = candidates[choice] + BTL_ENTRY_COUNT;
    } else if (activeCount > 0) {
        s8 choice = static_cast<s8>(randNextInRange(static_cast<u16>(activeCount - 1)));
        s8 found = 0;
        for (s32 index = 0; index < BTL_ENTRY_COUNT; ++index) {
            BtlEntry *entry = &btlGetMainState()->entries[index];
            if ((entry->flags & BTL_ENTRY_FLAG_ACTIVE) && !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) &&
                entry->ids[0] >= 0 && (entry->flags & 8)) {
                if (choice == found) {
                    result = entry->ids[0];
                    break;
                }
                found = static_cast<s8>(found + 1);
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
