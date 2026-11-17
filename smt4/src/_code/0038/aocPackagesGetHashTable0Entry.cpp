#include "shard/W8X15_PackageList.h"
#include "addon/AocSystem.h"

extern "C" void *dataTableFileGetTable(void *file, u32 section);

extern "C" {
/* Returns the index-th record (8 bytes each) across every '#' data table file of the loaded
 * packages, or NULL past the end. */
u8 *aocPackagesGetHashTable0Entry(AocSystem *list, s32 index)
{
    s32 total = 0;
    for (s32 i = 0; i < list->packageCount; i++) {
        AocPackage *entry = &list->packages[i];
        if (packageEntryIsLoaded(entry) != 0) {
            AocPackageDirectoryEntry *names = packageEntryGetDirectory(entry);
            u32 fileCount = packageEntryGetFileCount(entry);
            for (u32 j = 0; j < fileCount; j++) {
                if (names[j].kind == '#') {
                    void *table = dataTableFileGetTable(entry->files[j].data, 0);
                    s32 end = dataTableGetCount(table) + total;
                    if (end >= index) {
                        return reinterpret_cast<u8 *>(dataTableGetEntries(table)) + (index - total) * 8;
                    }
                    total += end;
                }
            }
        }
    }
    return NULL;
}
}
