/* NON_MATCHING: local save/candidate array placement, packed prerequisite test and final count branches differ from retail. */
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/DataTable.h"

namespace {
struct DemonSaveEntryView { u8 prefix[0x36]; u16 flags; u8 tail[0x18]; };
struct PartySlotIndexView { u8 prefix[0x1C88]; s8 slots[24]; };
}
extern "C" {
s32 gameFlagIsSet(u32 flag);
u32 gameDataCopySaveEntry(u32 id, void *destination);
PartySlotIndexView *gameGetSlotTable();
BattleSlotSourceRecordA *gameGetSlotRecord(s32 index);
u32 randRange(u32 maximum);

// Choose an unlocked demon of the requested level that is neither excluded nor already owned.
u32 FUN_0023e32c(u32 excludedA, u32 excludedB, u32 excludedC, u32 level)
{
    u16 candidates[20] = {};
    u8 candidateCount = 0;
    DemonSaveEntryView saved;
    void *table = dataTableGet(0, 0);
    dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u16 index = 0; index < count; ++index) {
        const DevilRecordA *entry = FUN_00184310(index);
        if (entry->level != level || index == excludedC || index == excludedA || index == excludedB)
            continue;
        const DevilRecordA *record = FUN_00184310(entry->id);
        if ((record->fusionRestrictions & 0x1C00000) != 0)
            continue;
        if (record->unlockFlag != 0 && !gameFlagIsSet(record->unlockFlag))
            continue;
        u16 requirement = record->saveRequirement;
        if ((requirement & 1) != 0) {
            if ((requirement & 0xFFFE) != 0) {
                if (!gameDataCopySaveEntry(requirement >> 1, &saved) || (saved.flags & 0xFC) == 0)
                    continue;
            } else {
                if (!gameDataCopySaveEntry(record->id, &saved) || (saved.flags & 0xFC) == 0)
                    continue;
            }
        }
        if ((record->flags & 1) == 0)
            continue;
        PartySlotIndexView *party = gameGetSlotTable();
        s32 slot = 0;
        for (; slot < 24; ++slot) {
            if (static_cast<u32>(party->slots[slot]) < 24) {
                const BattleSlotSourceRecordA *owned = gameGetSlotRecord(gameGetSlotTable()->slots[slot]);
                if (owned->id == entry->id)
                    break;
            }
        }
        if (slot == 24)
            candidates[candidateCount++] = index;
    }
    if (candidateCount == 1)
        return candidates[0];
    if (candidateCount < 2)
        return 0;
    return candidates[randRange(static_cast<u16>(candidateCount - 1))];
}
}
