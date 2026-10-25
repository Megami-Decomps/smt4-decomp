#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"
#include "battle/BtlMainAccess.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(s32 group, s32 *first, s32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
}

static inline bool hasAlternateEffectCounter(const BtlEntry *entry)
{
    return entry->effects.primaryAlternate > 0 || entry->effects.secondaryAlternate > 0;
}

// Test a listed unit's alternate effect counters in the requested group or active selection.
extern "C" u32 btlScriptHasAlternateEffectCounter(void)
{
    u32 id = scrGetArg(0);
    s32 group = btlScriptResolveGroupArg(scrGetArg(1));
    s32 first;
    s32 count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 &&
            (entry->flags & 0x40) == 0 && entry->id == id && hasAlternateEffectCounter(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && hasAlternateEffectCounter(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
