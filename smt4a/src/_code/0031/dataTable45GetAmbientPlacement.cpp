#include "common.h"
#include "code/Code0031_Smt4a.h"
#include "addon/AocSystemA.h"
#include "gamedata/AmbientSoundPlacement.h"

extern "C" {

void *dataTableGet(u32 category, u32 variant);
Table2dSection4Record *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Table2dSection4Record *dataFileSetGetTableEntry(AocSystemA *aoc, u32 index);

// Entry `index` of the base data table, continuing into the add-on content's tables (NULL past the end).
Table2dSection4Record *dataTable45GetAmbientPlacement(u32 index)
{
    void *table = dataTableGet(0x2d, 4);
    Table2dSection4Record *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x25, 4) + count) {
        return dataFileSetGetTableEntry(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
