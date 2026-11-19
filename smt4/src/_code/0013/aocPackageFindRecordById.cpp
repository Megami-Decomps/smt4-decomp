#include "shard/W8X15_PackageList.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable25.h"
#include "addon/AocSystem.h"

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

/* Returns the record with `id` from the kind-11 data tables of the loaded packages, or NULL. */
DataTable25Record *aocPackageFindRecordById(AocSystem *system, u32 id)
{
    for (s32 i = 0; i < system->packageCount; i++) {
        AocPackage *entry = &system->packages[i];
        if (packageEntryIsLoaded(entry) != 0) {
            AocPackageDirectoryEntry *names = packageEntryGetDirectory(entry);
            u32 fileCount = packageEntryGetFileCount(entry);
            for (u32 j = 0; j < fileCount; j++) {
                if (names[j].kind == 11) {
                    void *table = dataTableFileGetTable(entry->files[j].data, 0);
                    DataTable25Record *records = (DataTable25Record *)dataTableGetEntries(table);
                    s32 count = dataTableGetCount(table);
                    for (s32 k = 0; k < count; k++) {
                        const DataTable25Record *record = &records[k];
                        if (static_cast<s16>(record->id) != static_cast<s32>(id)) {
                            continue;
                        }
                        return &records[k];
                    }
                }
            }
        }
    }
    return NULL;
}
}
