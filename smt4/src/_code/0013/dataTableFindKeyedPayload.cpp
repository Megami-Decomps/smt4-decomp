#include "common.h"

struct KeyedRecord {
    u16 key;         // 0x00
    u8 payload[22];  // 0x02
};

struct RecordTable {
    u8 unk000[0x42c]; // 0x000
    u32 count;        // 0x42c
    KeyedRecord* data; // 0x430
};

extern "C" {
void* libc_bsearch(const void* key, const void* base, u32 count, u32 size,
                   s32 (*compare)(const void*, const void*));
s32 FUN_0014147c(const void*, const void*);

// Returns the payload of a record with the requested key.
void* dataTableFindKeyedPayload(const RecordTable* table, u16 key)
{
    if (table->count == 0) {
        return NULL;
    }
    KeyedRecord search;
    search.key = key;
    KeyedRecord* record = static_cast<KeyedRecord*>(
        libc_bsearch(&search, table->data, table->count, sizeof(search), FUN_0014147c));
    return record ? record->payload : NULL;
}
}
