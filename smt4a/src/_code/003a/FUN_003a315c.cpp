#include "common.h"

extern "C" {

/* A 0x30-byte record of the type-0x29 table. */
struct Table29Record {
    /* 0x00 */ u8 data[0x30];
};

extern void *g_aocSystem;
void *dataTableGet(s32 table, s32 section);
u8 *dataTableGetEntries(void *section);
s32 dataTableGetCount(void *section);
u32 FUN_0046c35c(void *aocSystem, s32 kind, u32 tableIndex);
Table29Record *dataSetRecordAt(void *aocSystem, u32 index);

/* Finds record `index` of the base table, continuing into the add-on packages' tables. */
Table29Record *FUN_003a315c(u32 index)
{
    void *section = dataTableGet(0x29, 4);
    Table29Record *entries = (Table29Record *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x23, 4) + count) {
        return dataSetRecordAt(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
