#include "common.h"

/* One loaded entry: two allocated buffers and their state flags. */
struct LoadedRecord {
    /* 0x00 */ void *data;
    /* 0x04 */ void *extra;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 loaded;
    /* 0x0D */ u8 ready;
    /* 0x0E */ u8 unk0E[2];
};

struct LoadedRecordTable {
    /* 0x000 */ u8 unk000[0x448];
    /* 0x448 */ s32 count;
    /* 0x44C */ u8 unk44C[4];
    /* 0x450 */ LoadedRecord *records;
};

extern "C" {

void asdMemFree(void *memory);
void asdOperatorDeleteB(void *memory);

/* Frees every record's buffers, then the record array itself, and empties the table. */
void loadedRecordTableClear(LoadedRecordTable *table)
{
    s32 i;

    for (i = 0; i < table->count; i++) {
        if (table->records[i].extra != NULL) {
            asdMemFree(table->records[i].extra);
            table->records[i].extra = NULL;
        }
        if (table->records[i].data != NULL) {
            asdMemFree(table->records[i].data);
            table->records[i].data = NULL;
        }
        table->records[i].loaded = 0;
        table->records[i].ready = 0;
    }
    if (table->records != NULL) {
        asdOperatorDeleteB(table->records);
        table->records = NULL;
    }
    table->count = 0;
}

} /* extern "C" */
