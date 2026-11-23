#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 btlScriptResolveGroupArg(s32 group);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

/* btlScriptAnyLiveUnitHasFlag's body, which retail inlines whole into this command (one source file in the
 * original). */
static __inline u32 scriptAnyLiveUnitHasFlag(void)
{
    u32 flag = scrGetArg(0);
    s32 first;
    s32 count;
    u32 group = btlScriptResolveGroupArg(scrGetArg(1));
    btlSideGetEntryRange(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *unit = &btlGetMainState()->entries[index];
        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) &&
            (unit->data.statusFlags & (1u << flag))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active = btlMainFindActiveEntry(btlGetMainState());
        if (active != NULL && (active->data.statusFlags & (1u << flag))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

// Test whether an eligible member of the selected group has the requested flag (btlScriptAnyLiveUnitHasFlag).
u32 FUN_002f07c8(void)
{
    return scriptAnyLiveUnitHasFlag();
}
}
