/* NON_MATCHING: prologue, per-table lookups (inlined) and stack layout match; retail keeps a separate null/payload check (cmp; nop; beq) per case with one shared +0x20 tail, built merges/predicates them */
#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

/* The tail of the content system: one lookup cache per record table, at the offsets the callers below use. */
typedef struct AocRecordSystem {
    /* 0x000 */ u8 unk000[0x3A0];
    /* 0x3A0 */ s32 cache3A0;
    /* 0x3A4 */ u8 unk3A4[0x20];
    /* 0x3C4 */ s32 cache3C4;
    /* 0x3C8 */ u8 unk3C8[8];
    /* 0x3D0 */ s32 cache3D0;
    /* 0x3D4 */ u8 unk3D4[8];
    /* 0x3DC */ s32 cache3DC;
} AocRecordSystem;

/* Search keys of the four bsearched record tables: only the id is filled. */
typedef struct DataRecord58 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 id;
    /* 0x52 */ u8 unk52[6];
} DataRecord58;

typedef struct DataRecord3C {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x1A];
} DataRecord3C;

typedef struct DataRecord30 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0xE];
} DataRecord30;

typedef struct DataRecord2C {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0xA];
} DataRecord2C;

extern AocRecordSystem *g_aocSystem;

void *FUN_0014162c(AocRecordSystem *system, u32 id);
void *FUN_001317c8(AocRecordSystem *system, u32 id);
void *FUN_00131898(AocRecordSystem *system, u32 id);
void *FUN_002b4504(AocRecordSystem *system, u32 id);
int itemCategoryFindByItemId(void);
void *dataTable08Sub1GetRecord(u32 id);
void *dataTable08Sub2GetRecord(u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, int (*compare)(const void *, const void *));

int dataTable08Sub0CompareKeys(const void *a, const void *b);
int aocCompareRecord83Keys(const void *a, const void *b);
int aocCompareRecord84Keys(const void *a, const void *b);
int compareLookupKey(const void *a, const void *b);

static inline u8 *getTable08Sub0Record(u32 id)
{
    DataRecord58 key;
    u8 *record;
    key.id = id;
    if (g_aocSystem->cache3A0 == 0 || (record = (u8 *)FUN_0014162c(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 0);
        if (table == 0) {
            return NULL;
        }
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        record = (u8 *)libc_bsearch(&key, entries, count, sizeof(key), dataTable08Sub0CompareKeys);
    }
    return record;
}

static inline u8 *getTable08Sub3Record(u32 id)
{
    DataRecord3C key;
    u8 *record;
    key.id = id;
    if (g_aocSystem->cache3C4 == 0 || (record = (u8 *)FUN_001317c8(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 3);
        if (table == 0) {
            return NULL;
        }
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        record = (u8 *)libc_bsearch(&key, entries, count, sizeof(key), aocCompareRecord83Keys);
    }
    return record;
}

static inline u8 *getTable08Sub4Record(u32 id)
{
    DataRecord30 key;
    u8 *record;
    key.id = id;
    if (g_aocSystem->cache3D0 == 0 || (record = (u8 *)FUN_00131898(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 4);
        if (table == 0) {
            return NULL;
        }
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        record = (u8 *)libc_bsearch(&key, entries, count, sizeof(key), aocCompareRecord84Keys);
    }
    return record;
}

static inline u8 *getTable08Sub5Record(u32 id)
{
    DataRecord2C key;
    u8 *record;
    key.id = id;
    if (g_aocSystem->cache3DC == 0 || (record = (u8 *)FUN_002b4504(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 5);
        if (table == 0) {
            return NULL;
        }
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        record = (u8 *)libc_bsearch(&key, entries, count, sizeof(key), compareLookupKey);
    }
    return record;
}

/* Looks up the record `id` in the data table selected by the current content mode; with `payload` returns the record's payload at +0x20. */
u8 *FUN_002be650(u32 id, int payload)
{
    u8 *record;
    int info;
    u8 mode;

    if (id == 0) {
        return NULL;
    }
    info = itemCategoryFindByItemId();
    mode = 0;
    if (info != 0) {
        mode = *(u8 *)(info + 8);
    }
    switch (mode) {
    case 0:
        record = getTable08Sub0Record(id);
        break;
    case 1:
        record = (u8 *)dataTable08Sub1GetRecord(id);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        record = (u8 *)dataTable08Sub2GetRecord(id);
        break;
    case 9:
        return getTable08Sub3Record(id);
    case 10:
        return getTable08Sub4Record(id);
    case 11:
        return getTable08Sub5Record(id);
    default:
        return NULL;
    }
    if (record == NULL) {
        return NULL;
    }
    return payload != 0 ? record + 0x20 : record;
}

} /* extern "C" */
