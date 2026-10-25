/* NON_MATCHING: separate signed bounds and table-entry receiver recovered; compiler combines initial compare and ID save with SUBS. */
#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

/* A 4-byte record of data table 0x47: an ID and a value. */
typedef struct IdValueRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ s16 value;
} IdValueRecord;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_002321f8(const void *left, const void *right);

/* Returns whether `id` (1-63) has a record in table 0x47 with a non-negative value. */
u32 FUN_0026812c(s32 id)
{
    if (id <= 0)
        return 0;
    if (id < 0x40) {
        void *table = dataTableGet(0x47, 0);
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        IdValueRecord key;
        key.id = id;
        IdValueRecord *record = (IdValueRecord *)libc_bsearch(&key, entries, count, sizeof(IdValueRecord), FUN_002321f8);
        if (record != NULL && record->value >= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
