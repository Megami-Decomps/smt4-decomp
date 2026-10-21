#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

struct Table02RecordA {
    u8 data[0x78];
};

extern "C" {
extern AocSystem* g_aocSystem;
Table02RecordA* resourceFindType27Record(AocSystem*, u32);

// Prefer an add-on record; invalid indices retain the table's base record.
Table02RecordA* dataTableGetRecord02(s32 index)
{
    void* section = dataTableGet(2, 1);
    Table02RecordA* entries = (Table02RecordA*)dataTableGetEntries(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    Table02RecordA* entry = resourceFindType27Record(g_aocSystem, index);
    if (entry == NULL) {
        entry = &entries[index];
    }
    return entry;
}
}
