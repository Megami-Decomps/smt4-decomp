/* NON_MATCHING: extension metadata load pairing and count-sum scratch register differ from retail. */
#include "gamedata/Table23Availability.h"
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"

extern "C" {
extern AocSystemA* g_aocSystem;
s32 gameFlagIsSet(s32 flag);
s32 partyEntryFlagsBit1(u32 id);

struct AvailabilityExtension {
    u8 unk000[0x414];
    struct Records {
        s32 count;
        Table23AvailabilityRecord *entries;
    } records;
};

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

static Table23AvailabilityRecord *availabilityRecordAt(u32 index)
{
    void *section = dataTableGet(0x23, 6);
    Table23AvailabilityRecord *entries =
        static_cast<Table23AvailabilityRecord *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    if (index < count)
        return &entries[index];
    AvailabilityExtension::Records extension =
        reinterpret_cast<AvailabilityExtension *>(g_aocSystem)->records;
    u32 extensionCount = extension.count;
    if (extensionCount + count > index)
        return &extension.entries[index - count];
    return NULL;
}

// Find the first base or add-on availability rule satisfied by the current flags and party.
Table23AvailabilityRecord* FUN_003cd4b4(s32 id)
{
    // This table lies beyond the canonical AocSystem prefix in both games.
    for (u32 index = 0;
         (s32)index < (s32)tableSectionCount(0x23, 6) +
                         reinterpret_cast<AvailabilityExtension*>(g_aocSystem)->records.count;
         ++index) {
        Table23AvailabilityRecord *record = availabilityRecordAt(index);
        if (record->id == id &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->excludedFlag == 0 || !gameFlagIsSet(record->excludedFlag)) &&
            (record->requiredUnit == 0 || partyEntryFlagsBit1((u16)record->requiredUnit)))
            return record;
    }
    return NULL;
}
}