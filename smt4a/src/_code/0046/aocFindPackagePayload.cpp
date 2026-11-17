#include "gamedata/DataTable.h"
#include "addon/PackageRecordSearch.h"
#include "addon/AocSystemA.h"

extern "C" {
void *dataTableFileGetTable(void *file, u32 section);

// Find an enabled kind-0x21 package record and return the payload following its ID.
PackageKind21Payload *aocFindPackagePayload(AocSystemA *owner, s32 id)
{
    for (s32 groupIndex = 0; groupIndex < owner->packageCount; ++groupIndex) {
        AocPackage *group = &owner->packages[groupIndex];
        if (packageEntryIsLoaded(group) == 0)
            continue;
        AocPackageDirectoryEntry *kinds = packageEntryGetDirectory(group);
        u32 tableCount = packageEntryGetFileCount(group);
        for (u32 tableIndex = 0; tableIndex < tableCount; ++tableIndex) {
            if (kinds[tableIndex].kind != 0x21 || group->files[tableIndex].available == 0)
                continue;
            void *table = dataTableFileGetTable(group->files[tableIndex].data, 1);
            PackageKind21Record *entries = static_cast<PackageKind21Record *>(dataTableGetEntries(table));
            s32 count = dataTableGetCount(table);
            for (s32 entryIndex = 0; entryIndex < count; ++entryIndex) {
                if (entries[entryIndex].id == id)
                    return &entries[entryIndex].payload;
            }
        }
    }
    return NULL;
}
}
