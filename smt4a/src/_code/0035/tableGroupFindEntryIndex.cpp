/* NON_MATCHING: retail unrolls the name-search loop in pairs; this loop remains scalar. */
#include "gamedata/TableGroup.h"

extern "C" int libc_strcmp(const char *left, const char *right);

// Find a name in the group's fixed-width name section.
extern "C" s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name)
{
    if (table == NULL) {
        return -1;
    }
    TableGroupSection *sections = table->sections;
    for (s32 sectionIndex = 0; sectionIndex < table->sectionCount; ++sectionIndex) {
        TableGroupSection *section = &sections[sectionIndex];
        if (section->kind != 0) {
            continue;
        }
        const char (*names)[0x20] = reinterpret_cast<const char (*)[0x20]>(
            reinterpret_cast<const u8 *>(table) + sections[sectionIndex].dataOffset);
        if (names == NULL) {
            return -1;
        }
        for (s32 index = 0; index < section->count; ++index) {
            if (libc_strcmp(names[index], name) == 0) {
                return index;
            }
        }
        return -1;
    }
    return -1;
}
