#include "shard/W8X15_PackageList.h"
#include "addon/AocSystemA.h"

extern "C" void *dataTableFileGetTable(void *file, u32 section);

/* Count records in a section of all loaded package files holding records of the given kind. */
static s32 countKindRecords(AocSystemA *system, s32 kind, u32 section)
{
    s32 total = 0;
    for (s32 i = 0; i < system->packageCount; ++i) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *records = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            for (u32 j = 0; j < count; ++j) {
                if (records[j].kind == kind && package->files[j].available != 0) {
                    total += dataTableGetCount(dataTableFileGetTable(package->files[j].data, section));
                }
            }
        }
    }
    return total;
}

/* Count records in a section of all loaded type-six package files. */
extern "C" s32 packageListCountSectionRecords(AocSystemA *system, u32 section)
{
    return countKindRecords(system, 6, section);
}
