/* NON_MATCHING: the extension count/array pair now loads with one ldm like retail, but retail keeps the pointer in r1 and the pair in r2/r3 where this build uses r2 and r1/r2. */
#include "gamedata/Table23Availability.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {
s32 gameFlagIsSet(s32 flag);
u32 questHasNewMark(s32 index);

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

static Table23AvailabilityRecord *availabilityRecordAt(u32 index)
{
    void *section = dataTableGet(0x23, 6);
    Table23AvailabilityRecord *entries =
        (Table23AvailabilityRecord *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    if (index < count)
        return &entries[index];
    const AocRecordList *source = &g_aocSystem->table23[6];
    AocRecordList extension = *source;
    u32 extensionCount = extension.count;
    if (index < extensionCount + count)
        return &((Table23AvailabilityRecord *)extension.records)[index - count];
    return NULL;
}

/* Finds the first base or add-on availability rule satisfied by the current flags and party. */
Table23AvailabilityRecord *dataTable23FindAvailableRule(s32 id)
{
    for (u32 index = 0;
         (s32)index < (s32)tableSectionCount(0x23, 6) +
                         g_aocSystem->table23[6].count;
         ++index) {
        Table23AvailabilityRecord *record = availabilityRecordAt(index);
        if (record->id == id &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->excludedFlag == 0 || !gameFlagIsSet(record->excludedFlag)) &&
            (record->requiredUnit == 0 || questHasNewMark((u16)record->requiredUnit)))
            return record;
    }
    return NULL;
}
} /* extern "C" */
