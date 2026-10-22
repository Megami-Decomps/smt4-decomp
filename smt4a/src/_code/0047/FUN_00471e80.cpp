/* NON_MATCHING: register allocation only: retail keeps the count in r5 and the id offset (0x20) in ip; built swaps them */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0[0x20];
    u16 id;          /* 0x20 */
    u8 unk22[0x2c - 0x22];
} IdRecord; /* size 0x2c */

typedef struct {
    u8 unk0[0x3d8];
    s32 recordCount;   /* 0x3d8 */
    IdRecord *records; /* 0x3dc */
} IdRecordTable;

/* Returns the record whose id is `id`, or NULL. */
IdRecord *FUN_00471e80(IdRecordTable *table, u32 id)
{
    s32 i;

    for (i = 0; i < table->recordCount; i++) {
        if (table->records[i].id == id) {
            return &table->records[i];
        }
    }
    return NULL;
}

} /* extern "C" */
