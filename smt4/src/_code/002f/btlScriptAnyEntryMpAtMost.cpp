/* NON_MATCHING: retail rebases MP accesses at entry+0xcc; the flat layout rebases at +0x100 and changes multiply/divide register scheduling. */
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 btlScriptResolveGroupArg(void);
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindActiveEntry(BtlMainState *);

// Test whether the requested combatant has at most the given MP percentage.
u32 btlScriptAnyEntryMpAtMost(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);
    scrGetArg(2);
    s32 first, count;
    FUN_002499fc(btlScriptResolveGroupArg(), &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) &&
            entry->id == id && entry->mp * 100 / entry->maxMp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && entry->id == id && entry->mp * 100 / entry->maxMp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
