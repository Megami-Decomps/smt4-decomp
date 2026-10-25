#include "gamedata/DataTable.h"

namespace { struct TableEntry { u32 first; u32 file; u32 third; u32 fourth; }; }

extern "C" {
/* Reads or updates the current object state. */
extern TableEntry g_fileSlots[];
void *dataTableFileGetTable(u32 file, u32 table);
void *dataTableGet(int table, int section)
{
    u32 file = (u32)table < 67 ? g_fileSlots[table].file : 0;
    return dataTableFileGetTable(file, section);
}
}
