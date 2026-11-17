#include "shard/W6_W6Match3_ForwardEffect.h"
#include "addon/AocSystem.h"

extern "C" {
const void *dataTableFileGetTable(void *file, u32 tableIndex);
u32 dataTableGetCount(const void *table);

// Count records in enabled file tables whose resource kind matches the requested category.
u32 groupedFileTablesCountRecordsOfKind(AocSystem *owner, s32 kind, u32 tableIndex)
{
    u32 total = 0;
    for (s32 groupIndex = 0; groupIndex < owner->packageCount; ++groupIndex) {
        AocPackage *group = &owner->packages[groupIndex];
        if (packageEntryIsLoaded(group)) {
            const AocPackageDirectoryEntry *kinds = packageEntryGetDirectory(group);
            u32 count = packageEntryGetFileCount(group);
            for (u32 index = 0; index < count; ++index) {
                if (kinds[index].kind == kind && group->files[index].available) {
                    const void *table = dataTableFileGetTable(group->files[index].data, tableIndex);
                    total += dataTableGetCount(table);
                }
            }
        }
    }
    return total;
}
}
