#include "battle/ListedEntry.h"

extern "C" {

ListedState *btlGetMainState(void);
void scrSetResult(s32 value);

// Script command: result is the id of the first used, listed, non-excluded entry (-1 when there is none).
u32 FUN_0031ccec(void)
{
    s32 result = -1;
    for (s32 i = 0; i < 109; i++) {
        ListedEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && entry->id >= 0 && (entry->flags & 0x10) != 0) {
            result = entry->id;
            break;
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
