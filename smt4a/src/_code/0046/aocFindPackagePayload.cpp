#include "gamedata/GroupedFileTables.h"
#include "gamedata/DataTable.h"
#include "addon/PackageRecordSearch.h"

extern "C" {
s32 FUN_001b315c(FileTableGroup *group);
FileTableKindRecord *FUN_001b31ac(FileTableGroup *group);
u32 FUN_001b31e0(FileTableGroup *group);
void *dataTableFileGetTable(void *file, u32 section);

// Find an enabled kind-0x21 package record and return the payload following its ID.
PackageKind21Payload *aocFindPackagePayload(GroupedFileTables *owner, s32 id)
{
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (FUN_001b315c(group) == 0)
            continue;
        FileTableKindRecord *kinds = FUN_001b31ac(group);
        u32 tableCount = FUN_001b31e0(group);
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
