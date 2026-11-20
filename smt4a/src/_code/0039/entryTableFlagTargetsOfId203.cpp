#include "shard/RuntimeEntryTable.h"

extern "C" {


/* Flags every unflagged entry of id 0x203 whose target equals `target`. */
void entryTableFlagTargetsOfId203(s32 target)
{
    s32 i;

    for (i = 0; i < DAT_00580c90.count; i++) {
        if (!g_recordTable[i].flagged && g_recordTable[i].id == 0x203 && g_recordTable[i].target == target) {
            g_recordTable[i].flagged = 1;
        }
    }
}

} /* extern "C" */
