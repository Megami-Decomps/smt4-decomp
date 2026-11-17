#include "gamedata/DataTable.h"
#include "addon/PackageRecordSearch.h"
#include "addon/AocSystemA.h"

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

// Find an ID across all loaded kind-0x1B package tables.
PackageKind1BRecord *aocFindPackageRecord(AocSystemA *owner, u32 id)
{
    for (s32 groupIndex = 0; groupIndex < owner->packageCount; ++groupIndex) {
        AocPackage *group = &owner->packages[groupIndex];
        if (packageEntryIsLoaded(group) == 0)
            continue;
        AocPackageDirectoryEntry *kinds = packageEntryGetDirectory(group);
        u32 tableCount = packageEntryGetFileCount(group);
        for (u32 tableIndex = 0; tableIndex < tableCount; ++tableIndex) {
            if (kinds[tableIndex].kind != 0x1B)
                continue;
            void *table = dataTableFileGetTable(group->files[tableIndex].data, 0);
            PackageKind1BRecord *entries = static_cast<PackageKind1BRecord *>(dataTableGetEntries(table));
            s32 count = dataTableGetCount(table);
            for (s32 entryIndex = 0; entryIndex < count; ++entryIndex) {
                if (entries[entryIndex].id == id)
                    return &entries[entryIndex];
            }
        }
    }
    return NULL;
}
}
