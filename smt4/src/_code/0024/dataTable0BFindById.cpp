#include "gamedata/DataTable.h"
#include "shard/W5_W5Match1_RecordKeys.h"

struct Table0BRecord {
    UnsignedRecordKey32 sort; // 0x00, key at 0x20
    u8 unk22[0x1e]; // 0x22
};

extern "C" {
s32 unsignedKeyRecordCompare(const UnsignedRecordKey32*, const UnsignedRecordKey32*);
void* libc_bsearch(const void*, const void*, u32, u32,
                   s32 (*)(const void*, const void*));

// Search section eleven by the record's halfword ID.
Table0BRecord* dataTable0BFindById(u16 id)
{
    void* section = dataTableGet(0x0b, 0);
    if (section != NULL) {
        void* entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        Table0BRecord key;
        key.sort.key = id;
        Table0BRecord* record = (Table0BRecord*)libc_bsearch(
            &key, entries, count, sizeof(key),
            (s32 (*)(const void*, const void*))unsignedKeyRecordCompare);
        if (record != NULL) {
            return record;
        }
    }
    return NULL;
}
}
