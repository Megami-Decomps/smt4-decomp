#include "gamedata/GroupedFileTables.h"
#include "gamedata/DataTable.h"

struct GroupedSectionRecord { u8 data[0x1C]; };

extern "C" {
u32 packageEntryIsLoaded(FileTableGroup* group);
const FileTableKindRecord* packageEntryGetDirectory(FileTableGroup* group);
u32 packageEntryGetFileCount(FileTableGroup* group);
void* dataTableFileGetTable(void* file, u32 section);

// Resolve an index across enabled groups' kind-37 table sections.
GroupedSectionRecord* dataFindGroupedSectionRecord(GroupedFileTables* tables, s32 index)
{
    s32 base = 0;
    for (s32 groupIndex = 0; groupIndex < tables->count; ++groupIndex) {
        FileTableGroup* group = &tables->groups[groupIndex];
        if (packageEntryIsLoaded(group) == 0) {
            continue;
        }
        const FileTableKindRecord* kinds = packageEntryGetDirectory(group);
        u32 count = packageEntryGetFileCount(group);
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
