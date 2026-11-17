/* NON_MATCHING: correct table traversal; register allocation and conditional-null branches differ. */
#include "gamedata/MsSearchTable.h"


extern "C" {
extern void *g_aocSystem;
u32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, u32 tableIndex);
MsSearchRecord *FUN_0046ea50(void *system, u32 index);

// Find a key in the base and downloadable records and return its associated value.
s32 FUN_003cd5f4(s32 key)
{
    for (u32 index = 0; (s32)index < (s32)(dataTableGetCount(dataTableGet(0x30, 0)) +
             groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x27, 0)); ++index) {
        DataTableView<MsSearchRecord> table(0x30, 0);
        MsSearchRecord *record;
        if (index < table.count) {
            record = &table.entries[index];
        } else {
            u32 total = table.count + groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x27, 0);
            record = NULL;
            if (index < total)
                record = FUN_0046ea50(g_aocSystem, index - table.count);
        }
        if (record->id == key)
            return record->markBit;
    }
    return -1;
}
}
