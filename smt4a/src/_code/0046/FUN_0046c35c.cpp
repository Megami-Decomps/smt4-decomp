#include "gamedata/GroupedFileTables.h"

extern "C" {
bool FUN_001b315c(FileTableGroup *group);
const FileTableKindRecord *FUN_001b31ac(FileTableGroup *group);
u32 FUN_001b31e0(FileTableGroup *group);
const void *dataTableFileGetTable(void *file, u32 tableIndex);
u32 dataTableGetCount(const void *table);

// Count records in enabled file tables whose resource kind matches the requested category.
u32 FUN_0046c35c(GroupedFileTables *owner, s32 kind, u32 tableIndex)
{
    u32 total = 0;
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (FUN_001b315c(group)) {
            const FileTableKindRecord *kinds = FUN_001b31ac(group);
            u32 count = FUN_001b31e0(group);
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
