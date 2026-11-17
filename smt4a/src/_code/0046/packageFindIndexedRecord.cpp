/* Resolves an indexed record across loaded type-40 package tables. */
#include "addon/PackageSelection.h"
#include "addon/AocSystemA.h"

extern "C" void *dataTableFileGetTable(void *file, u32 section);

extern "C" {

PackageIndexedRecord *packageFindIndexedRecord(AocSystemA *system, s32 index)
{
    s32 base = 0;
    for (s32 i = 0; i < system->packageCount; ++i) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package)) {
            AocPackageDirectoryEntry *records = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            for (u32 j = 0; j < count; ++j) {
                if (records[j].kind == 40) {
                    void *table = dataTableFileGetTable(package->files[j].data, 0);
                    s32 next = dataTableGetCount(table) + base;
                    if (next >= index) {
                        return (PackageIndexedRecord *)dataTableGetEntries(table) + (index - base);
                    }
                    base += next;
                }
            }
        }
    }
    return NULL;
}
}
