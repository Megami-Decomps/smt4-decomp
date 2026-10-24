#include "shard/RuntimeEntryTable.h"

extern "C" {


/* Flags every unflagged entry of id 0x203 whose target equals `target`. */
void entryTableFlagTargetsOfId203(s32 target)
{
    s32 i;

    for (i = 0; i < DAT_00580c90.count; i++) {
        if (!DAT_005f32a0[i].flagged && DAT_005f32a0[i].id == 0x203 && DAT_005f32a0[i].target == target) {
            DAT_005f32a0[i].flagged = 1;
        }
    }
}

} /* extern "C" */
