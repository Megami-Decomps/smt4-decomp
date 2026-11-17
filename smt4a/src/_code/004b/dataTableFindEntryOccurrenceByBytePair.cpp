#include "gamedata/EncountData.h"

extern "C" {

// Return the zero-based matching occurrence of the encounter records for (map, area).
EncountRecordA *dataTableFindEntryOccurrenceByBytePair(u32 map, u32 area, s32 occurrence)
{
    void* table = dataTableGet(2, 0);
    EncountRecordA *entries = encountRecordsA(table);
    s32 entryCount = dataTableGetCount(table);
    s32 matchCount = 0;

    for (s32 entryIndex = 0; entryIndex < entryCount; ++entryIndex) {
        if (entries[entryIndex].map == map &&
            entries[entryIndex].area == area) {
            if (matchCount == occurrence) {
                return &entries[entryIndex];
            }
            ++matchCount;
        }
    }
    return 0;
}

} // extern "C"
