#include "gamedata/GroupedFileTables.h"
#include "gamedata/DataTable.h"
#include "addon/PackageRecordSearch.h"

extern "C" {
s32 packageEntryIsLoaded(FileTableGroup *group);
FileTableKindRecord *packageEntryGetDirectory(FileTableGroup *group);
u32 packageEntryGetFileCount(FileTableGroup *group);
void *dataTableFileGetTable(void *file, u32 section);

// Find an enabled kind-0x21 package record and return the payload following its ID.
PackageKind21Payload *aocFindPackagePayload(GroupedFileTables *owner, s32 id)
{
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (packageEntryIsLoaded(group) == 0)
            continue;
        FileTableKindRecord *kinds = packageEntryGetDirectory(group);
        u32 tableCount = packageEntryGetFileCount(group);
        for (u32 tableIndex = 0; tableIndex < tableCount; ++tableIndex) {
            if (kinds[tableIndex].kind != 0x21 || group->slots[tableIndex].enabled == 0)
                continue;
            void *table = dataTableFileGetTable(group->slots[tableIndex].file, 1);
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
