#include "shard/W8X15_PackageList.h"

extern "C" {

/* Finds the record of `kind` whose name is the string `name` across all loaded packages. */
PackageRecord *packageFindRecordByName(PackageList *list, s32 kind, const char *name)
{
    s32 i;
    u32 j;

    if (kind == -1) {
        return NULL;
    }
    for (i = 0; i < list->count; i++) {
        PackageEntry *entry = &list->entries[i];

        if (FUN_002ac12c(entry) != 0) {
            PackageRecord *records = (PackageRecord *)FUN_002ac0f8(entry);
            u32 count = FUN_002ac0c4(entry);

            for (j = 0; j < count; j++) {
                const PackageRecord *record = &records[j];

                if (record->kind == kind && record->name == name) {
                    return &records[j];
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
