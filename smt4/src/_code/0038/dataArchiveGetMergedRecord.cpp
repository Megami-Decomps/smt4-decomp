#include "common.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

/* A 12-byte record of the merged tables. */
typedef struct DataArchiveRecord {
    u8 data[0xC];
} DataArchiveRecord;

void *dataTableFileGetTable(void *handle, u32 section);

/* Returns record `index` of the '$' data tables of every loaded archive taken in order (NULL past the end). */
DataArchiveRecord *dataArchiveGetMergedRecord(AocSystem *system, s32 index)
{
    s32 base = 0;
    s32 i;

    for (i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];

        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *names = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            u32 j;

            for (j = 0; j < fileCount; j++) {
                if (names[j].kind == '$') {
                    void *table = dataTableFileGetTable(package->files[j].data, 1);
                    s32 end = dataTableGetCount(table) + base;

                    if (end >= index) {
                        return (DataArchiveRecord *)dataTableGetEntries(table) + (index - base);
                    }
                    base += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
