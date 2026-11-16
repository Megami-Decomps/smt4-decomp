#include "shard/W8X15_PackageList.h"
#include "gamedata/DataTableAccess_VariantA.h"

extern "C" {
s32 packageEntryIsLoaded(PackageEntry *);
char (*packageEntryGetDirectory(PackageEntry *))[0x40];
u32 packageEntryGetFileCount(PackageEntry *);
}

/* Count records in a section of all loaded package files holding records of the given kind. */
static s32 countKindRecords(PackageList *packages, s32 kind, u32 section)
{
    s32 total = 0;
    for (s32 i = 0; i < packages->count; ++i) {
        PackageEntry *package = &packages->entries[i];
        if (packageEntryIsLoaded(package) != 0) {
            PackageRecord *records = (PackageRecord *)packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            for (u32 j = 0; j < count; ++j) {
                if (records[j].kind == kind && package->files[j].state.loaded != 0) {
                    total += dataTableGetCount(dataTableFileGetTable(package->files[j].fileId, section));
                }
            }
        }
    }
    return total;
}

/* Count records in a section of all loaded type-six package files. */
extern "C" s32 packageListCountSectionRecords(PackageList *packages, u32 section)
{
    return countKindRecords(packages, 6, section);
}
