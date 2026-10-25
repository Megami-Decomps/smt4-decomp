/* NON_MATCHING: only the tail differs: retail folds the found-record return into ldrbne/bne onto the shared `return 0` epilogue; ours emits a separate epilogue. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "shard/ItemStackLimit.h"

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

/* The add-on content system: only the flag this unit reads is named. */
typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x3C4];
    /* 0x3C4 */ u32 hasRecords;
} AocSystem;

extern AocSystem *g_aocSystem;

Table8Sub3Record *FUN_001762d4(AocSystem *aoc, u32 id);
s32 compareRecordKey(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

/* The add-on content's record for `id`, when add-on content provides records. */
static Table8Sub3Record *aocFindRecord(AocSystem *aoc, u32 id)
{
    if (!aoc->hasRecords) {
        return NULL;
    }
    return FUN_001762d4(aoc, id);
}

/* Returns the table 8/3 value of kind-9 item `id`, preferring the add-on content's record (0 if none). */
u8 FUN_00480a54(u32 id)
{
    ItemInfo *info;
    Table8Sub3Record key;
    Table8Sub3Record *record;

    if (id == 0) {
        return 0;
    }
    info = reinterpret_cast<ItemInfo *>(itemCategoryFindByItemId(id));
    if (info == NULL || info->kind != 9) {
        return 0;
    }
    key.id = id;
    record = aocFindRecord(g_aocSystem, id);
    if (record == NULL) {
        void *section = dataTableGet(8, 3);
        void *entries;
        u32 count;

        if (section == NULL) {
            return 0;
        }
        entries = dataTableGetEntries(section);
        count = dataTableGetCount(section);
        record = (Table8Sub3Record *)libc_bsearch(&key, entries, count, sizeof(Table8Sub3Record),
                                                  compareRecordKey);
    }
    if (record != NULL) {
        return record->value;
    }
    return 0;
}

} /* extern "C" */
