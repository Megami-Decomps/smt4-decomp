/* NON_MATCHING: only the inner loop test differs: retail compares k against the count (cmp k, count; blt), built the reverse */
#include "shard/W8X15_PackageList.h"
#include "gamedata/DataTable.h"

extern "C" {

/* A 0x2c-byte record of a kind-11 package data table. */
typedef struct {
    u8 unk00[0x20];
    s16 id;         /* 0x20 */
    u8 unk22[0x2c - 0x22];
} PackageIdRecord;

/* Returns the record with `id` from the kind-11 data tables of the loaded packages, or NULL. */
PackageIdRecord *FUN_00131530(PackageList *list, s32 id)
{
    for (s32 i = 0; i < list->count; i++) {
        PackageEntry *entry = &list->entries[i];
        if (FUN_002ac12c(entry) != 0) {
            char (*names)[0x40] = FUN_002ac0f8(entry);
            u32 fileCount = FUN_002ac0c4(entry);
            for (u32 j = 0; j < fileCount; j++) {
                if (names[j][0] == 11) {
                    void *table = dataTableFileGetTable(entry->files[j].fileId, 0);
                    PackageIdRecord *records = (PackageIdRecord *)dataTableGetEntries(table);
                    s32 count = dataTableGetCount(table);
                    for (s32 k = 0; k < count; k++) {
                        const PackageIdRecord *record = &records[k];
                        if (record->id == id) {
                            return &records[k];
                        }
                    }
                }
            }
        }
    }
    return NULL;
}
}
