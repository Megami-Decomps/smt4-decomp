#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainState* btlGetMainState(void);
BtlEntry* btlMainFindEntryByListedId(BtlMainState* state, s32 id);

// Reports whether the listed battle entry has flag 0x10000.
u32 scrCommBattleEntryHasFlag(s32 argumentIndex)
{
    s32 id = scrGetArg(argumentIndex);
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (entry != NULL) {
        s32 result = entry->flags & 0x10000;
        if (result != 0) {
            result = 1;
        }
        scrSetResult(result);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
