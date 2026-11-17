#include "addon/aocMain.h"
#include "gamedata/EncountData.h"
#include "addon/AocSystemA.h"

extern "C" {
EncountTableRecordA *resourceFindType27Record(AocSystemA *system, u32 index);

// Prefer an add-on record; invalid indices retain the table's base record.
EncountTableRecordA *dataTableGetRecord02(s32 index)
{
    void* section = dataTableGet(2, 1);
    EncountTableRecordA *entries = encountTableRecordsA(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    EncountTableRecordA *entry = resourceFindType27Record(g_aocSystem, index);
    if (entry == NULL) {
        entry = &entries[index];
    }
    return entry;
}
}
