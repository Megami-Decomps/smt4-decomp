#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *start, s32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);
void scrSetResult(s32 result);

// Test whether the selected group or active entry contains the requested id at the required level.
u32 FUN_002ff964(void)
{
    u32 id = scrGetArg(0);
    s32 minimumLevel = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 start;
    s32 count;
    FUN_002499fc(group, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 &&
            entry->id == id && entry->level >= minimumLevel) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && entry->level >= minimumLevel) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
