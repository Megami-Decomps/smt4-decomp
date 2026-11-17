/* NON_MATCHING: only the registers of the item id (retail r6) and the entry table (retail r5) are swapped. */
#include "gamedata/EncountData.h"
#include "gamedata/GameDataEntries.h"

static __inline bool gameDataEntryMatches(const EncountAreaKey *entry, u32 groupId, u32 itemId)
{
    return entry->map == groupId && entry->area == itemId;
}

// Map a (map, area) pair to its roll-state slot (EncountData.tbb table 3), with zero as the default.
extern "C" s32 gameDataFindEntryIndex(u32 groupId, u32 itemId)
{
    void* section = dataTableGet(2, 3);
    EncountAreaKey *entries = encountAreaKeys(section);
    s32 count = (s32)dataTableGetCount(section);
    for (s32 i = 0; i < count; ++i) {
        if (gameDataEntryMatches(&entries[i], groupId, itemId)) {
            return i;
        }
    }
    return 0;
}
