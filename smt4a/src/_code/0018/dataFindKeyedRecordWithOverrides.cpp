#include "shard/W5_W5Match1_RecordKeys.h"

struct CatalogRecord {
    /* 0x00 */ UnsignedRecordKey32 key;
    /* 0x22 */ u8 unk22[0x1e];
};

extern "C" {
extern const CatalogRecord DAT_00531018;
extern const CatalogRecord DAT_00531058;
extern const CatalogRecord DAT_00531098;
extern const CatalogRecord DAT_005310d8;
extern const CatalogRecord DAT_00531118;
void *dataTableGet(u32 category, u32 subcategory);
const CatalogRecord *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 keyedRecordCompare(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

const CatalogRecord *dataFindKeyedRecordWithOverrides(u32 id)
{
    void *table = dataTableGet(11, 0);
    if (!table) {
        return NULL;
    }
    const CatalogRecord *record = NULL;
    if (id == 139) {
        record = &DAT_00531018;
    } else if (id == 140) {
        record = &DAT_00531058;
    } else if (id == 129) {
        record = &DAT_00531098;
    } else if (id == 128) {
        record = &DAT_005310d8;
    } else if (id == 0) {
        record = &DAT_00531118;
    }
    if (record) {
        return record;
    }
    const CatalogRecord *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    CatalogRecord key;
    key.key.key = id;
    return (const CatalogRecord *)libc_bsearch(&key, entries, count, sizeof(key),
                                             keyedRecordCompare);
}
}
