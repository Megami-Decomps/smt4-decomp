/* NON_MATCHING: loop range reloads use separate loads; successful query exits do not share the retail epilogue. */
#include "shard/W4_Match6_BtlEntry.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlMainState *btlGetMainState(void);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(s32 group, u32 *first, u32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

// Test whether an eligible member of the selected group has the requested flag.
u32 FUN_002f07c8(void)
{
    s32 flag = scrGetArg(0);
    s32 group = btlScriptResolveGroupArg(scrGetArg(1));
    u32 first;
    u32 count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < (s32)(first + count); ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 && (entry->groupMask & (1 << flag)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    s32 result = 0;
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && (entry->groupMask & (1 << flag)) != 0) {
            result = 1;
        }
    }
    scrSetResult(result);
    return 1;
}
}
