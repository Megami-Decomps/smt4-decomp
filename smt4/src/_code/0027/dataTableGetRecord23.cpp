#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match2_AocTable23.h"
#include "gamedata/DataTableAccess_AocTable23.h"

extern "C" {
extern AocSystem* g_aocSystem;

// Index the built-in table followed by its add-on extension.
Table23Record* dataTableGetRecord23(u32 index)
{
    void* section = dataTableGet(0x23, 1);
    Table23Record* entries = (Table23Record*)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    if (index < count) {
        return &entries[index];
    }
    AocTable23View* addon = (AocTable23View*)g_aocSystem;
    entries = addon->entries;
    if (index < count + addon->count) {
        entries += index - count;
    } else {
        entries = NULL;
    }
    return entries;
}
}
