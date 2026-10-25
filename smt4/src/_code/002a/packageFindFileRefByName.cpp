#include "shard/W8X15_PackageList.h"
#include "shard/packageFindFileRefByName.h"

extern "C" {

/* Finds the file reference paired with the record of `kind` named `name` across all loaded packages. */
PackageFileRef *packageFindFileRefByName(PackageList *list, s32 kind, const char *name)
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
                    return &entry->files[j];
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
