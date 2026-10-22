/* NON_MATCHING: array/count base registers, flag-subobject address hoisting, and final loop comparison order differ. */
#include "shard/W9_W9Match7_FlagGatedEntries.h"

extern "C" {
extern FlagGatedEntryState DAT_00580c90;
extern FlagGatedEntry DAT_005f32a0[];
int gameFlagIsSet(s32 flag);

/* Disable live entries whose required flag is absent or exclusion flag is set. */
void FUN_002b79d8(void)
{
    for (s32 index = 0; index < DAT_00580c90.count; ++index) {
        FlagGatedEntry *entry = &DAT_005f32a0[index];
        if (!entry->disabled && entry->object &&
            ((entry->requiredFlag && !gameFlagIsSet(entry->requiredFlag)) ||
             (entry->excludedFlag && gameFlagIsSet(entry->excludedFlag)))) {
            entry->disabled = 1;
        }
    }
}
}
