#include "common.h"
#include "addon/AocSystemA.h"

#define DATA_FILE_CHUNK_TABLE 37 /* chunk kind holding a data table */

/* A data table entry (0x10 bytes). */
struct DataTableEntry16 {
    /* 0x00 */ u8 unk00[0x10];
};

extern "C" {

void *dataTableFileGetTable(void *file, s32 section);
s32 dataTableGetCount(void *table);
DataTableEntry16 *dataTableGetEntries(void *table);

/* Returns entry `index` counted across the data tables of every loaded file, or NULL. */
DataTableEntry16 *dataFileSetGetTableEntry(AocSystemA *system, s32 index)
{
    s32 total = 0;
    s32 i;

    for (i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *chunks = packageEntryGetDirectory(package);
            u32 chunkCount = packageEntryGetFileCount(package);
            u32 j;

            for (j = 0; j < chunkCount; j++) {
                if (chunks[j].kind == DATA_FILE_CHUNK_TABLE) {
                    void *table = dataTableFileGetTable(package->files[j].data, 4);
                    s32 end = dataTableGetCount(table) + total;
                    if (end >= index) {
                        return &dataTableGetEntries(table)[index - total];
                    }
                    total += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
