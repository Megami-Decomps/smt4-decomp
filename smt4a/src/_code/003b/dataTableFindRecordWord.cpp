#include "addon/aocMain.h"

extern "C" {
extern AocSystemA* g_aocSystem;
const u32* FUN_00471bc8(AocSystemA* system, u32 index);
u32 dataTableGet(u32 group, u32 table);
const u32* dataTableGetEntries(u32 table);
u32 dataTableGetCount(u32 table);

// Looks up add-on data first, falling back to word table 5:9 when absent.
const u32* dataTableFindRecordWord(u32 index)
{
    const u32* record = FUN_00471bc8(g_aocSystem, index);
    if (record == NULL) {
        u32 table = dataTableGet(5, 9);
        const u32* entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        if (index >= count) {
            return NULL;
        }
        return &entries[index];
    }
    return record;
}
}
