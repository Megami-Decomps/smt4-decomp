#include "gamedata/GroupedFileTables.h"
#include "gamedata/DataTable.h"

struct GroupedSectionRecord { u8 data[0x1C]; };

extern "C" {
u32 FUN_001b315c(FileTableGroup* group);
const FileTableKindRecord* FUN_001b31ac(FileTableGroup* group);
u32 FUN_001b31e0(FileTableGroup* group);
void* dataTableFileGetTable(void* file, u32 section);

// Resolve an index across enabled groups' kind-37 table sections.
GroupedSectionRecord* dataFindGroupedSectionRecord(GroupedFileTables* tables, s32 index)
{
    s32 base = 0;
    for (s32 groupIndex = 0; groupIndex < tables->count; ++groupIndex) {
        FileTableGroup* group = &tables->groups[groupIndex];
        if (FUN_001b315c(group) == 0) {
            continue;
        }
        const FileTableKindRecord* kinds = FUN_001b31ac(group);
        u32 count = FUN_001b31e0(group);
        for (u32 slot = 0; slot < count; ++slot) {
            if (kinds[slot].kind == '%') {
                void* table = dataTableFileGetTable(group->slots[slot].file, 3);
                s32 end = base + (s32)dataTableGetCount(table);
                if (end >= index) {
                    return static_cast<GroupedSectionRecord*>(dataTableGetEntries(table)) + (index - base);
                }
                // Retail advances the base by the cumulative end, not just the section count.
                base += end;
            }
        }
    }
    return NULL;
}
}
