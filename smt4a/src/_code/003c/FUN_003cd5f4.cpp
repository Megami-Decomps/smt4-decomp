/* NON_MATCHING: loop latch loads g_aocSystem straight into r0 instead of retail's `ldr r3, [r8]; mov r5, r0; ...; mov r0, r3`. */
#include "gamedata/MsSearchTable.h"
#include "shard/W4_W4Match5_DataTable.h"

extern "C" {
extern void *g_aocSystem;
u32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, u32 tableIndex);
MsSearchRecord *FUN_0046ea50(void *system, u32 index);

static s32 table30Count(void)
{
    return dataTableGetCount(dataTableGetSection(0x30, 0)) + groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x27, 0);
}

static MsSearchRecord *table30Get(s32 index)
{
    void *section = dataTableGet(0x30, 0);
    MsSearchRecord *entries = (MsSearchRecord *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    if ((u32)index < count) {
        return &entries[index];
    }
    u32 extra = groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x27, 0);
    if ((u32)index < count + extra) {
        return FUN_0046ea50(g_aocSystem, index - count);
    }
    return NULL;
}

/* Find a key in the base and downloadable records and return its associated value. */
s32 FUN_003cd5f4(s32 key)
{
    for (s32 i = 0; i < table30Count(); i++) {
        MsSearchRecord *record = table30Get(i);
        if (record->id == key) {
            return record->markBit;
        }
    }
    return -1;
}
} /* extern "C" */
