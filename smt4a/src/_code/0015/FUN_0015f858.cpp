/* NON_MATCHING: readable rebuild; retail loads g_aocSystem after setting the key id and replicates the `if (record) return record; return 0` check in every case, so each case body is a few instructions longer than armcc's merged form here. */
#include "common.h"
#include "shard/ItemStackLimit.h"

/* Records keyed by the u16 `id` at 0x20; each table has its own record size. */
struct ItemRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x28 - 0x22];
};
struct SkillRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x3C - 0x22];
};
struct AppRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x30 - 0x22];
};

/* The add-on content system: the override tables it holds for three record kinds. */
struct AocSystem {
    /* 0x000 */ u8 unk000[0x3A0];
    /* 0x3A0 */ void *itemOverrides;
    /* 0x3A4 */ u8 unk3A4[0x20];
    /* 0x3C4 */ void *skillOverrides;
    /* 0x3C8 */ u8 unk3C8[8];
    /* 0x3D0 */ void *appOverrides;
};

struct BattleDataKind {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
};

extern "C" {
extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_0019e30c(const void *a, const void *b);
s32 compareRecordKey(const void *a, const void *b);
s32 FUN_00169230(const void *a, const void *b);
void *FUN_001a6858(AocSystem *system, u32 id);
void *FUN_001762d4(AocSystem *system, u32 id);
void *FUN_001763a4(AocSystem *system, u32 id);
void *dataTable8FindRecord(u32 id);
void *dataTable08Sub2GetRecord(u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record `id` of the kind the current data set selects: a record the add-on content
 * overrides wins, otherwise the shared data table is searched. Returns null when there is none. */
void *FUN_0015f858(u32 id)
{
    if (id == 0)
        return NULL;
    BattleDataKind *data = reinterpret_cast<BattleDataKind *>(itemCategoryFindByItemId(id));
    u32 kind = 0;
    if (data != NULL)
        kind = data->kind;
    void *record;
    switch (kind) {
    case 0: {
        ItemRecord key;
        key.id = id;
        if (g_aocSystem->itemOverrides == NULL || (record = FUN_001a6858(g_aocSystem, id)) == NULL) {
            u32 table = dataTableGet(8, 0);
            if (table == 0)
                return NULL;
            void *entries = dataTableGetEntries(table);
            record = libc_bsearch(&key, entries, dataTableGetCount(table), sizeof(ItemRecord), FUN_0019e30c);
        }
        break;
    }
    case 1:
    case 12:
        record = dataTable8FindRecord(id);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        record = dataTable08Sub2GetRecord(id);
        break;
    case 9: {
        SkillRecord key;
        key.id = id;
        if (g_aocSystem->skillOverrides == NULL || (record = FUN_001762d4(g_aocSystem, id)) == NULL) {
            u32 table = dataTableGet(8, 3);
            if (table == 0)
                return NULL;
            void *entries = dataTableGetEntries(table);
            record = libc_bsearch(&key, entries, dataTableGetCount(table), sizeof(SkillRecord), compareRecordKey);
        }
        break;
    }
    case 10: {
        AppRecord key;
        key.id = id;
        if (g_aocSystem->appOverrides == NULL || (record = FUN_001763a4(g_aocSystem, id)) == NULL) {
            u32 table = dataTableGet(8, 4);
            if (table == 0)
                return NULL;
            void *entries = dataTableGetEntries(table);
            record = libc_bsearch(&key, entries, dataTableGetCount(table), sizeof(AppRecord), FUN_00169230);
        }
        break;
    }
    default:
        return NULL;
    }
    if (record != NULL)
        return record;
    return NULL;
}

} /* extern "C" */
