#include "gamedata/GroupedFileTables.h"
#include "shard/W6_W6Match7_QuestInteraction.h"

extern "C" {
bool packageEntryIsLoaded(FileTableGroup *group);
const FileTableKindRecord *packageEntryGetDirectory(FileTableGroup *group);
u32 packageEntryGetFileCount(FileTableGroup *group);
const void *dataTableFileGetTable(void *file, u32 tableIndex);
u32 dataTableGetCount(const void *table);

// Count records in enabled file tables whose resource kind matches the requested category.
u32 groupedFileTablesCountRecordsOfKind(GroupedFileTables *owner, s32 kind, u32 tableIndex)
{
    u32 total = 0;
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (packageEntryIsLoaded(group)) {
            const FileTableKindRecord *kinds = packageEntryGetDirectory(group);
            u32 count = packageEntryGetFileCount(group);
            for (u32 index = 0; index < count; ++index) {
                if (kinds[index].kind == kind && group->slots[index].enabled) {
                    const void *table = dataTableFileGetTable(group->slots[index].file, tableIndex);
                    total += dataTableGetCount(table);
                }
            }
        }
    }
    return total;
}
}
