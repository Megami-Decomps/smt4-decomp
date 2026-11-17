#include "common.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "addon/AocSystemA.h"

extern "C" {

typedef struct Entry00470080 {
    /* 0x00 */ u8 data[0xd0];
} Entry00470080;

void *dataTableFileGetTable(void *file, s32 slot);
s32 dataTableGetCount(void *table);
Entry00470080 *dataTableGetEntries(void *table);

/* Entry `index` of the data tables of kind 6 (section `slot`) of the add-on content's files, counted across all files (NULL past the end). */
Entry00470080 *contentEntryGetFromFilesByKind(AocSystemA *system, s32 slot, s32 index)
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
                if (rows[row].kind == 6) {
                    void *table = dataTableFileGetTable(package->files[row].data, slot);
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
