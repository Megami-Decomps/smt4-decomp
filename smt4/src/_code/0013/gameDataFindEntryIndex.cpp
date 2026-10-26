/* NON_MATCHING: only the registers of the item id (retail r6) and the entry table (retail r5) are swapped. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match2_GameDataEntryKeys.h"

static __inline bool gameDataEntryMatches(const GameDataEntryKey* entry, u32 groupId, u32 itemId)
{
    return entry->groupId == groupId && entry->itemId == itemId;
}

// Map the group/item byte pair to its table index, with zero as the default.
extern "C" s32 gameDataFindEntryIndex(u32 groupId, u32 itemId)
{
    void* section = dataTableGet(2, 3);
    GameDataEntryKey* entries = (GameDataEntryKey*)dataTableGetEntries(section);
    s32 count = (s32)dataTableGetCount(section);
    for (s32 i = 0; i < count; ++i) {
        if (gameDataEntryMatches(&entries[i], groupId, itemId)) {
            return i;
        }
    }
    return 0;
}
