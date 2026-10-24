#include "battle/BattleEntries.h"

extern "C" {

u32 scrGetArg(u32 index);
BattleEntryOwner *btlGetMainState(void);
void scrSetResult(s32 value);

/* Script command: returns the value of the active (flag 0x10) battle entry whose key matches the argument, or -1. */
u32 scrCommGetBattleEntryValue(void)
{
    u32 key = scrGetArg(0);
    s32 result = -1;
    s32 i;

    for (i = 0; i < 109; i++) {
        BattleEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) && entry->key == key) {
            result = entry->value;
            break;
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
