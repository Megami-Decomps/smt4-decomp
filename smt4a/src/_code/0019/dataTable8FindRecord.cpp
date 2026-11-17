#include "gamedata/DataTable.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/DataTableAccess_VariantD_Table8Record.h"
#include "addon/AocSystemA.h"

struct Table8Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
};

extern "C" {

ConsumableRecordA *FUN_0019227c(AocSystemA *system, u32 id);
Table8Owner *itemCategoryFindByItemId(u32 id);
s32 FUN_00183450(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
    s32 (*compare)(const void *, const void *));

/* Find the table-8 record for id: downloadable records first, then section 1 (section 6 for kind 12 owners). */
ConsumableRecordA *dataTable8FindRecord(u32 id)
{
    ConsumableRecordA key;
    key.id = id;
    if (id == 0) {
        return NULL;
    }
    if (g_aocSystem->table08[1].records != 0) {
        ConsumableRecordA *record = FUN_0019227c(g_aocSystem, id);
        if (record != NULL) {
            return record;
        }
    }
    Table8Owner *owner = itemCategoryFindByItemId(id);
    s32 section;
    if (owner == NULL) {
        section = 1;
    } else {
        section = 1;
        if (owner->kind == 12) {
            section = 6;
        }
    }
    void *table = dataTableGet(8, section);
    if (table == NULL) {
        return NULL;
    }
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return static_cast<ConsumableRecordA *>(libc_bsearch(&key, entries, count, sizeof(ConsumableRecordA), FUN_00183450));
}

} /* extern "C" */
