#include "gamedata/GauntletAppTable.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gamedata/DataTableAccess_Smt4.h"

extern "C" {
s32 unsignedKeyRecordCompare(const UnsignedRecordKey32*, const UnsignedRecordKey32*);
void* libc_bsearch(const void*, const void*, u32, u32,
                   s32 (*)(const void*, const void*));

// Binary-search the gauntlet apps (GauntletAppTable.tbb) for app `id`.
GauntletAppRecord *dataTable0BFindById(u32 id)
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
            return record;
        }
    }
    return NULL;
}
}
