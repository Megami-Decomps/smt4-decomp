#include "gamedata/GauntletAppTable.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
s32 unsignedKeyRecordCompare(const UnsignedRecordKey32*, const UnsignedRecordKey32*);
void* libc_bsearch(const void*, const void*, u32, u32,
                   s32 (*)(const void*, const void*));

// Looks up the cost of gauntlet app `id` (0 when there is none).
u16 dataTable0BGetValueById(u16 id)
{
    void* section = dataTableGet(0x0b, 0);
    if (section != NULL) {
        void* entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        GauntletAppRecord key;
        key.id = id;
        GauntletAppRecord *record = (GauntletAppRecord *)libc_bsearch(
            &key, entries, count, sizeof(key),
            (s32 (*)(const void*, const void*))unsignedKeyRecordCompare);
        if (record != NULL) {
            return record->cost;
        }
    }
    return 0;
}
}
