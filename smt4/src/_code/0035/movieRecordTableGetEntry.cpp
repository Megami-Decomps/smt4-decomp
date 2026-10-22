#include "common.h"

struct IndexedRecord { u8 bytes[40]; };
struct RecordTable {
    /* 0x000 */ u8 unk00[0x2e8];
    /* 0x2e8 */ s32 count;
    /* 0x2ec */ u8 padding[0x20];
    /* 0x30c */ IndexedRecord records[1];
};
/* Returns an in-range record, otherwise null. */
extern "C" IndexedRecord *movieRecordTableGetEntry(RecordTable *table, s32 index)
{
    if (index >= 0 && index < table->count)
        return &table->records[index];
    return NULL;
}
