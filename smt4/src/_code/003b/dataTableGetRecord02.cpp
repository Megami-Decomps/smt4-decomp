#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

struct Table02Record {
    u8 data[0x3c]; // 0x00
};

extern "C" {
extern AocSystem* g_aocSystem;
Table02Record* FUN_00389168(AocSystem* system, u32 index);

// Resolve a valid table index from add-on data, falling back to the base entry or base pointer.
Table02Record* dataTableGetRecord02(s32 index)
{
    void* section = dataTableGet(2, 1);
    Table02Record* entries = (Table02Record*)dataTableGetEntries(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    Table02Record* entry = FUN_00389168(g_aocSystem, index);
    if (entry == NULL) {
        entry = &entries[index];
    }
    return entry;
}
}
