#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x1E];
} Record;

extern u8 LAB_00145c78;

u32 dataTableGet(u32 id, u32 section);
Record *dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
Record *libc_bsearch(const Record *key, const Record *base, u32 count, u32 size, const u8 *compare);

/* Binary-searches data table 0xB for the record with id `id` (the result is not used). */
void FUN_002ae584(u16 id)
{
    Record key;
    u32 table = dataTableGet(0xB, 0);

    if (table != 0) {
        Record *entries = dataTableGetEntries();
        u32 count = dataTableGetCount(table);

        key.id = id;
        libc_bsearch(&key, entries, count, 0x40, &LAB_00145c78);
    }
}

} /* extern "C" */
