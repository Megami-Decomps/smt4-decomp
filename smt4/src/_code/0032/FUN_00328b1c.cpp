/* NON_MATCHING: extension count/array loads and lookup-register allocation differ from retail. */
#include "gamedata/Table23Availability.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystem* g_aocSystem;
s32 gameFlagIsSet(s32 flag);
s32 FUN_00298dc8(u32 id);

// Find the first base or add-on availability rule satisfied by the current flags and party.
Table23AvailabilityRecord* FUN_00328b1c(s32 id)
{
    // This table lies beyond the canonical AocSystem prefix in both games.
    struct AvailabilityExtension {
        u8 unk000[0x414];
        s32 count;
        Table23AvailabilityRecord* entries;
    };
    for (u32 index = 0;
         (s32)index < (s32)dataTableGetCount(dataTableGet(0x23, 6)) +
                         reinterpret_cast<AvailabilityExtension*>(g_aocSystem)->count;
         ++index) {
        void* section = dataTableGet(0x23, 6);
        Table23AvailabilityRecord* entries =
            static_cast<Table23AvailabilityRecord*>(dataTableGetEntries(section));
        u32 count = dataTableGetCount(section);
        Table23AvailabilityRecord* record = NULL;
        if (index < count) {
            record = &entries[index];
        } else {
            AvailabilityExtension* extension = reinterpret_cast<AvailabilityExtension*>(g_aocSystem);
            if (index < count + extension->count)
                record = &extension->entries[index - count];
        }
        if (record->id == id &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->excludedFlag == 0 || !gameFlagIsSet(record->excludedFlag)) &&
            (record->requiredUnit == 0 || FUN_00298dc8((u16)record->requiredUnit)))
            return record;
    }
    return NULL;
}
}
