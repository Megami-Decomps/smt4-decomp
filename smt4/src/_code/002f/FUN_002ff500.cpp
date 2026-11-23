#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "util/SlotRangeSelect.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);

/* btlScriptHasEntryGroupBit's body, which retail inlines whole into this command (one source file in the
 * original). */
static __inline u32 scriptHasEntryGroupBit(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 first, count;
    btlSideGetEntryRange(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & 0x10) && (entry->flags & 1) && !(entry->flags & 0x40) &&
            entry->data.id == id && (entry->data.statusFlags & (1u << bit))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && (entry->data.statusFlags & (1u << bit))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

/* Test a requested entry ID's group bit, including the special active entry (btlScriptHasEntryGroupBit). */
u32 FUN_002ff500(void)
{
    return scriptHasEntryGroupBit();
}
}
