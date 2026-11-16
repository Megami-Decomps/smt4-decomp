/* NON_MATCHING: written like FUN_002f7418 (same registers and calls); only the loop's value-kind test is placed after the epilogue where retail keeps it in the loop body. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "util/SlotRangeSelect.h"
#include "battle/BattleHelpers.h"

extern "C" {
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);

// Report whether a group member or the active entry has a value of encoded kind zero or two.
u32 FUN_002f7528(void)
{
    s32 slot = scrGetArg(0);
    s32 first;
    s32 count;
    s32 i;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(1)), &first, &count);
    for (i = first; i < first + count; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) == 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && ((unit->values[slot] & 0xFC00) == 0 || unit->values[slot] >> 10 == 2)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active = btlMainFindActiveEntry(btlGetMainState());

        if (active != NULL && ((active->values[slot] & 0xFC00) == 0 || active->values[slot] >> 10 == 2)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
