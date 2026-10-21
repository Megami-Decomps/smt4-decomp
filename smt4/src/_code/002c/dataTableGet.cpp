#include "common.h"

namespace { struct TableEntry { u32 first; u32 file; u32 third; u32 fourth; }; }

extern "C" {
/* Reads or updates the current object state. */
extern TableEntry DAT_0049382c[];
void *dataTableFileGetTable(u32 file, u32 table);
void *dataTableGet(u32 index, u32 table)
{
    u32 file = index < 67 ? DAT_0049382c[index].file : 0;
    return dataTableFileGetTable(file, table);
}
}
