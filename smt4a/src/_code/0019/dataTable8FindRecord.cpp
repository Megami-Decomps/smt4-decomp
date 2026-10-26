#include "gamedata/DataTable.h"
#include "gamedata/Table8Record.h"
#include "gamedata/DataTableAccess_VariantD_Table8Record.h"

struct AocSystem {
    /* 0x000 */ u8 unk000[0x3ac];
    /* 0x3AC */ u32 unk3ac; /* nonzero: downloadable records are loaded */
};

struct Table8Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
};

extern "C" {

extern AocSystem *g_aocSystem;

Table8Record *FUN_0019227c(AocSystem *system, u32 id);
Table8Owner *itemCategoryFindByItemId(u32 id);
s32 FUN_00183450(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
    s32 (*compare)(const void *, const void *));

/* Find the table-8 record for id: downloadable records first, then section 1 (section 6 for kind 12 owners). */
Table8Record *dataTable8FindRecord(u32 id)
{
    Table8Record key;
    key.id = id;
    if (id == 0) {
        return NULL;
    }
    if (g_aocSystem->unk3ac != 0) {
        Table8Record *record = FUN_0019227c(g_aocSystem, id);
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
    return static_cast<Table8Record *>(libc_bsearch(&key, entries, count, sizeof(Table8Record), FUN_00183450));
}

} /* extern "C" */
