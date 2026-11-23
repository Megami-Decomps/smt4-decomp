#include "gamedata/EncountData.h"

// Map a (map, area) pair to its roll-state slot (EncountData.tbb table 3), with zero as the default.
extern "C" s32 gameDataFindEntryIndex(u32 groupId, u32 itemId)
{
    void* section = dataTableGet(2, 3);
    EncountAreaKey *entries = encountAreaKeys(section);
    s32 count = (s32)dataTableGetCount(section);
    for (s32 i = 0; i < count; ++i) {
        EncountAreaKey *entry = &entries[i];
        if (entry->map == groupId && entry->area == itemId) {
            return i;
        }
    }
    return 0;
}
