#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SaveSlotTable.h"


// Find the party-slot index whose active order entry has the requested ID.
extern "C" s32 partyFindSlotById(u32 id)
{
    SaveSlotTableA *table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        s32 slot = table->party[index];
        if (slot >= 0 && table->entries[slot].id == id) {
            return slot;
        }
    }
    return -1;
}
