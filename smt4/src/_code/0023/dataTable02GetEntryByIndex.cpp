#include "gamedata/EncountData.h"
#include "addon/AocSystem.h"

extern "C" {

// Prefer an add-on encounter group for a valid index, falling back to EncountData.tbb table 2.
EncountGroupRecord *dataTable02GetEntryByIndex(s32 index)
{
    void *section = dataTableGet(2, 2);
    EncountGroupRecord *entries = encountGroupRecords(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    EncountGroupRecord *entry = aocFindSpriteTemplateByKey(g_aocSystem, index);
    if (entry != NULL) {
        return entry;
    }
    return &entries[index];
}
}
