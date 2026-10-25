#include "gamedata/DataTable.h"

extern "C" {
extern void *g_aocSystem;
/* The add-on content lookup is a stub in this game (armlink inlined its `mov r0, #0`). */
u32 *aocFindKindRecordById(void *system, u32 index);

// Look up one four-byte record in table five's ninth section.
u32 *dataTableFindRecordWord(u32 index)
{
    u32 *record = aocFindKindRecordById(g_aocSystem, index);
    if (record == NULL) {
        void *section = dataTableGet(5, 9);
        u32 *entries = (u32 *)dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        if (index >= count) {
            return NULL;
        }
        return entries + index;
    }
    return record;
}
}
