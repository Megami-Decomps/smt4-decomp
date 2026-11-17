#include "shard/W8X15_PackageList.h"
#include "addon/AocSystemA.h"

extern "C" void *dataTableFileGetTable(void *file, u32 section);

extern "C" {

/* Find an indexed triple-word record in the loaded packages' hash-marked tables. */
u32 *packageFindIndexedTripleRecord(AocSystemA *system, s32 index)
{
    s32 skipped = 0;
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            const AocPackageDirectoryEntry *records = reinterpret_cast<const AocPackageDirectoryEntry *>(packageEntryGetDirectory(package));
            u32 count = packageEntryGetFileCount(package);
            for (u32 recordIndex = 0; recordIndex < count; ++recordIndex) {
                if (records[recordIndex].kind == '#') {
                    void *table = dataTableFileGetTable(package->files[recordIndex].data, 0);
                    s32 tableCount = dataTableGetCount(table);
                    if (index <= tableCount + skipped) {
                        u32 (*values)[3] = reinterpret_cast<u32 (*)[3]>(dataTableGetEntries(table));
                        return values[index - skipped];
                    }
                    skipped += tableCount + skipped;
                }
            }
        }
    }
    return NULL;
}
}
