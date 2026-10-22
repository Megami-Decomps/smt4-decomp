#include "gamedata/GroupedFileTables.h"
#include "gamedata/DataTable.h"

extern "C" {
s32 FUN_002ac12c(FileTableGroup *);
FileTableKindRecord *FUN_002ac0f8(FileTableGroup *);
u32 FUN_002ac0c4(FileTableGroup *);
void *dataTableFileGetTable(void *, u32);

// Find an indexed 0x28-byte record among the enabled groups' ampersand-kind tables.
void *dataFindGroupedRecord(GroupedFileTables *owner, s32 index)
{
    struct TableRecord { u8 data[0x28]; };
    s32 offset = 0;
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (FUN_002ac12c(group) == 0)
            continue;
        FileTableKindRecord *kinds = FUN_002ac0f8(group);
        u32 count = FUN_002ac0c4(group);
        for (u32 slot = 0; slot < count; ++slot) {
            if (kinds[slot].kind != '&')
                continue;
            void *table = dataTableFileGetTable(group->slots[slot].file, 0);
            s32 end = dataTableGetCount(table) + offset;
            if (end >= index)
                return static_cast<TableRecord *>(dataTableGetEntries(table)) + (index - offset);
            // The retail traversal advances by the accumulated end of this section.
            offset += end;
        }
    }
    return NULL;
}
}
