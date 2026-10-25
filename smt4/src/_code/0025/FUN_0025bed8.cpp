#include "gamedata/GroupedFileTables.h"
#include "shard/FUN_0025bed8.h"

extern "C" {
bool FUN_002ac12c(FileTableGroup *group);
const FileTableKindRecord *FUN_002ac0f8(FileTableGroup *group);
u32 FUN_002ac0c4(FileTableGroup *group);
const void *dataTableFileGetTable(void *file, u32 tableIndex);
u32 dataTableGetCount(const void *table);

// Count records in enabled file tables whose resource kind matches the requested category.
u32 FUN_0025bed8(GroupedFileTables *owner, s32 kind, u32 tableIndex)
{
    u32 total = 0;
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (FUN_002ac12c(group)) {
            const FileTableKindRecord *kinds = FUN_002ac0f8(group);
            u32 count = FUN_002ac0c4(group);
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
