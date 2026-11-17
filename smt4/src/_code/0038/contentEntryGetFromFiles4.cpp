#include "common.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct Entry00387790 {
    /* 0x00 */ u8 data[0x10];
} Entry00387790;

void *dataTableFileGetTable(void *file, s32 slot);
s32 dataTableGetCount(void *table);
Entry00387790 *dataTableGetEntries(void *table);

/* Entry `index` of the 0x10-byte data tables (section 2) of the add-on content's files, counted across all files (NULL past the end). */
Entry00387790 *contentEntryGetFromFiles4(AocSystem *system, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < system->packageCount; fileIndex++) {
        AocPackage *package = &system->packages[fileIndex];

        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *rows = packageEntryGetDirectory(package);
            u32 rowCount = packageEntryGetFileCount(package);
            u32 row;

            for (row = 0; row < rowCount; row++) {
                if (rows[row].kind == '%') {
                    void *table = dataTableFileGetTable(package->files[row].data, 2);
                    s32 count = dataTableGetCount(table);

                    if (index <= count + base) {
                        return &dataTableGetEntries(table)[index - base];
                    }
                    base = base + (count + base);
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
