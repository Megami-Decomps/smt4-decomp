#include "gamedata/DataTable.h"

struct Table02Sub2Entry { u8 data[0x1c]; };
struct AocSystem;

extern "C" {
extern AocSystem *g_aocSystem;
Table02Sub2Entry *aocFindSpriteTemplateByKey(AocSystem *system, u32 index);

// Prefer an add-on record for a valid index, falling back to table2/section2.
Table02Sub2Entry *dataTable02GetEntryByIndex(s32 index)
{
    void *section = dataTableGet(2, 2);
    Table02Sub2Entry *entries = (Table02Sub2Entry *)dataTableGetEntries(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    Table02Sub2Entry *entry = aocFindSpriteTemplateByKey(g_aocSystem, index);
    if (entry == NULL) {
        entry = &entries[index];
    }
    return entry;
}
}
