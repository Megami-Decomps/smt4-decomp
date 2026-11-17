#include "common.h"
#include "addon/AocSystemA.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

EquipmentRecordA *FUN_00192360(AocSystemA *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00183d90(const void *left, const void *right);
u32 dataTableGetCount(void *table);
void *dataTableGetEntries(void);
void *dataTableGet(u32 id, u32 type);

/* Returns the record of data table 8 type 2 for `id`: the add-on's when it has one, else the one found in the table. */
EquipmentRecordA *dataTable08Sub2GetRecord(u32 id)
{
    EquipmentRecordA key;
    EquipmentRecordA *record;
    key.id = id;
    if (g_aocSystem->table08[2].records == 0 || (record = FUN_00192360(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 2);
        record = (EquipmentRecordA *)table;
        if (table != NULL) {
            void *entries = dataTableGetEntries();
            u32 count = dataTableGetCount(table);
            record = (EquipmentRecordA *)libc_bsearch(&key, entries, count, sizeof(EquipmentRecordA), FUN_00183d90);
        }
    }
    return record;
}

} /* extern "C" */
