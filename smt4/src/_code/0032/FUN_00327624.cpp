#include "battle/ListedEntry.h"

extern "C" {

ListedState *btlGetMainState(void);
void scrSetResult(s32 value);

// Script command: result 1 when a used, listed, non-excluded entry has a positive value.
u32 FUN_00327624(void)
{
    for (s32 i = 0; i < 109; i++) {
        ListedEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && entry->value98 > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
