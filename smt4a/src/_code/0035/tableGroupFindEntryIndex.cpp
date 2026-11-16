/* NON_MATCHING: the builtin strcmp now unrolls the search in pairs like retail; remaining: register numbering (section r5/names r6/peel r7 vs retail r7/r5/r6) and the shared `mvn r0,#-1` return (retail branches to one epilogue). */
#include "gamedata/TableGroup.h"
#include <string.h>


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
            if (strcmp(names[index], name) == 0) {
                return index;
            }
        }
        return -1;
    }
    return -1;
}
