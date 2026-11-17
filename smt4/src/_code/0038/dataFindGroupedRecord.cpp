#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {
void *dataTableFileGetTable(void *, u32);

// Find an indexed 0x28-byte record among the enabled groups' ampersand-kind tables.
void *dataFindGroupedRecord(AocSystem *owner, s32 index)
{
    struct TableRecord { u8 data[0x28]; };
    s32 offset = 0;
    for (s32 groupIndex = 0; groupIndex < owner->packageCount; ++groupIndex) {
        AocPackage *group = &owner->packages[groupIndex];
        if (packageEntryIsLoaded(group) == 0)
            continue;
        AocPackageDirectoryEntry *kinds = packageEntryGetDirectory(group);
        u32 count = packageEntryGetFileCount(group);
        for (u32 slot = 0; slot < count; ++slot) {
            if (kinds[slot].kind != '&')
                continue;
            void *table = dataTableFileGetTable(group->files[slot].data, 0);
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
