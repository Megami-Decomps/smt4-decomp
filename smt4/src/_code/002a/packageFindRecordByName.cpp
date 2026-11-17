#include "shard/W8X15_PackageList.h"
#include "addon/AocSystem.h"

extern "C" {

/* Finds the record of `kind` whose key word is `key` across all loaded packages. */
AocPackageDirectoryEntry *packageFindRecordByName(AocSystem *system, s32 kind, u32 key)
{
    s32 i;
    u32 j;

    if (kind == -1) {
        return NULL;
    }
    for (i = 0; i < system->packageCount; i++) {
        AocPackage *entry = &system->packages[i];

        if (packageEntryIsLoaded(entry) != 0) {
            AocPackageDirectoryEntry *records = packageEntryGetDirectory(entry);
            u32 count = packageEntryGetFileCount(entry);

            for (j = 0; j < count; j++) {
                const AocPackageDirectoryEntry *record = &records[j];

                if (record->kind == kind && record->value == key) {
                    return &records[j];
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
