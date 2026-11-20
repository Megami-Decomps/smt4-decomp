#include "shard/RuntimeEntryTable.h"

extern "C" {


/* Sets the two halfword fields of the entry whose id matches. */
void entryTableSetHalfwordsById(s32 id, u16 first, u16 second)
{
    s32 i;

    for (i = 0; i < DAT_00580c90.count; i++) {
        if (g_recordTable[i].id == id) {
            g_recordTable[i].first = first;
            g_recordTable[i].second = second;
            return;
        }
    }
}

} /* extern "C" */
