#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(u32 group);
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);
s32 btlEntryHasActionSkillCategory(BtlEntry *entry, u32 argument);
void scrSetResult(s32 value);

/* Test matching units in the requested group, including the separately active entry. */
u32 btlScriptGroupUnitAcceptsArgument(void)
{
    u32 id = scrGetArg(0);
    u32 argument = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 first, count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) == 0 && (flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->id == id &&
            btlEntryHasActionSkillCategory(entry, argument) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && btlEntryHasActionSkillCategory(entry, argument) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
