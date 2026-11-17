#include "common.h"
#include "gamedata/DataTable.h"
#include "shard/ItemStackLimit.h"
#include "addon/AocSystemA.h"

extern "C" {

/* A table 8 section 3 record, sorted by id. */
typedef struct Table8Sub3Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u8 value;
    /* 0x25 */ u8 unk25[0x17];
} Table8Sub3Record;

/* The item an id names: only its kind byte is read here. */
typedef struct ItemInfo {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
} ItemInfo;

Table8Sub3Record *idEntryTableFindById(AocSystemA *aoc, u32 id);
s32 compareRecordKey(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

/* The add-on content's record for `id`, when add-on content provides records. */
static Table8Sub3Record *aocFindRecord(AocSystemA *aoc, u32 id)
{
    if (!aoc->table08[3].records) {
        return NULL;
    }
    return idEntryTableFindById(aoc, id);
}

/* The table 8/3 record for `id`: the add-on content's first, else a search of the table. */
static __inline Table8Sub3Record *table8Sub3Lookup(u32 id)
{
    Table8Sub3Record key;
    key.id = id;
    Table8Sub3Record *record = aocFindRecord(g_aocSystem, id);
    if (record != NULL) {
        return record;
    }
    void *section = dataTableGet(8, 3);
    if (section == NULL) {
        return NULL;
    }
    void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    return (Table8Sub3Record *)libc_bsearch(&key, entries, count, sizeof(Table8Sub3Record), compareRecordKey);
}

/* Returns the table 8/3 value of kind-9 item `id`, preferring the add-on content's record (0 if none). */
u8 itemGetTable8Sub3Value(u32 id)
{
    if (id == 0) {
        return 0;
    }
    ItemInfo *info = reinterpret_cast<ItemInfo *>(itemCategoryFindByItemId(id));
    if (info == NULL || info->kind != 9) {
        return 0;
    }
    Table8Sub3Record *record = table8Sub3Lookup(id);
    if (record != NULL) {
        return record->value;
    }
    return 0;
}

} /* extern "C" */
