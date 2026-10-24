/* NON_MATCHING: the build folds the (0 < id && id < 64) range test into one unsigned compare; retail tests both bounds separately (cmp #0; ble / cmp #64; bge) and keeps the ID in r4 afterwards. */
#include "common.h"

extern "C" {

/* A 4-byte record of data table 0x47: an ID and a value. */
typedef struct IdValueRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ s16 value;
} IdValueRecord;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_002321f8(const void *left, const void *right);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(void);
u32 dataTableGet(u32 id, u32 type);

/* Returns whether `id` (1-63) has a record in table 0x47 with a non-negative value. */
u32 FUN_0026812c(s32 id)
{
    if (id > 0 && id < 0x40) {
        u32 table = dataTableGet(0x47, 0);
        void *entries = dataTableGetEntries();
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
