#include "common.h"

extern "C" {

typedef struct IdRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 id;
    /* 0x52 */ u8 unk52[6];
} IdRecord;

typedef struct IdRecordTable {
    /* 0x000 */ u8 unk000[0x39C];
    /* 0x39C */ s32 count;
    /* 0x3A0 */ IdRecord *records;
} IdRecordTable;

/* Return the record with the given id, or NULL. */
IdRecord *FUN_0014162c(IdRecordTable *table, u32 id)
{
    for (s32 i = 0; i < table->count; i++) {
        if (table->records[i].id == id) {
            return &table->records[i];
        }
    }
    return NULL;
}

} /* extern "C" */
