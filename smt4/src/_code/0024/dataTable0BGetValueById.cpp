#include "gamedata/DataTable.h"
#include "shard/W5_W5Match1_RecordKeys.h"

struct Table0BRecord {
    UnsignedRecordKey32 sort; // 0x00, key at 0x20
    u8 unk22[4];              // 0x22
    u16 value;                // 0x26
    u8 unk28[0x18];           // 0x28
};

extern "C" {
s32 unsignedKeyRecordCompare(const UnsignedRecordKey32*, const UnsignedRecordKey32*);
void* libc_bsearch(const void*, const void*, u32, u32,
                   s32 (*)(const void*, const void*));

// Looks up the halfword value of section eleven's record with the given ID (0 when there is none).
u16 dataTable0BGetValueById(u16 id)
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
            return record->value;
        }
    }
    return 0;
}
}
