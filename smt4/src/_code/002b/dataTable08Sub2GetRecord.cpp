#include "common.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

EquipmentRecord *dataTable08Sub2FindById(AocSystem *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable08Sub2CompareKeys(const void *left, const void *right);

/* Returns the record of data table 8 type 2 for `id`: the add-on's when it has one, else the one found in the table. */
EquipmentRecord *dataTable08Sub2GetRecord(u32 id)
{
    EquipmentRecord key;
    EquipmentRecord *record;
    key.id = id;
    if (g_aocSystem->table08[2].records == 0 || (record = dataTable08Sub2FindById(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 2);
        record = (EquipmentRecord *)table;
        if (table != NULL) {
            void *entries = dataTableGetEntries(table);
            u32 count = dataTableGetCount(table);
            record = (EquipmentRecord *)libc_bsearch(&key, entries, count, sizeof(EquipmentRecord), dataTable08Sub2CompareKeys);
        }
    }
    return record;
}

} /* extern "C" */
