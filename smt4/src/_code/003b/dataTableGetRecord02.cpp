#include "addon/aocMain.h"
#include "gamedata/EncountData.h"
#include "addon/AocSystem.h"

extern "C" {

// Resolve encounter table `index` from add-on data, falling back to the base entry or base pointer.
EncountTableRecord *dataTableGetRecord02(s32 index)
{
    void* section = dataTableGet(2, 1);
    EncountTableRecord *entries = encountTableRecords(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    EncountTableRecord *entry = static_cast<EncountTableRecord *>(aocFindQuestPayloadById(g_aocSystem, index));
    if (entry == NULL) {
        entry = &entries[index];
    }
    return entry;
}
}
