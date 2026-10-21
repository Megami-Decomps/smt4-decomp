#include "common.h"

struct IndexedRecord { u8 bytes[16]; };
struct RecordTable {
    /* 0x000 */ u8 unk00[0x484];
    /* 0x484 */ s32 count;
    /* 0x488 */ u8 padding[0x20];
    /* 0x4a8 */ IndexedRecord records[1];
};
/* Returns an in-range record, otherwise null. */
extern "C" IndexedRecord *FUN_00424c0c(RecordTable *table, s32 index)
{
    if (index >= 0 && index < table->count)
        return &table->records[index];
    return NULL;
}
