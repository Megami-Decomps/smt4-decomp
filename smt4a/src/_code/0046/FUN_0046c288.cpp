#include "addon/AocSystemA.h"

struct ArchiveRangeRecord { u8 data[0x38]; };
extern "C" {
void *dataTableFileGetTable(void *file, u32 table);
s32 dataTableGetCount(void *table);
ArchiveRangeRecord *dataTableGetEntries(void *table);

// Resolve a ranged record index across loaded packages' dollar-kind data tables.
ArchiveRangeRecord *FUN_0046c288(AocSystemA *system, s32 index)
{
    s32 base = 0;
    for (s32 i = 0; i < system->packageCount; ++i) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package)) {
            const AocPackageDirectoryEntry *records = packageEntryGetDirectory(package);
            u32 fileCount = packageEntryGetFileCount(package);
            for (u32 file = 0; file < fileCount; ++file) {
                if (records[file].kind == '$') {
                    void *table = dataTableFileGetTable(package->files[file].data, 0);
                    s32 count = dataTableGetCount(table);
                    if (index <= count + base)
                        return dataTableGetEntries(table) + (index - base);
                    base += count + base;
                }
            }
        }
    }
    return NULL;
}
}
