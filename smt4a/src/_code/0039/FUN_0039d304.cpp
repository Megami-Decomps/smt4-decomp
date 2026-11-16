#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);

/* Sets the script result and reports the command as done. */
static s32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

// Report whether the current battle entry has the requested status bit.
u32 FUN_0039d304()
{
    u32 bit = scrGetArg(0);
    BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
    if (entry != NULL && (entry->statusFlags & (1u << bit)) != 0) {
        return commandResult(1);
    }
    return commandResult(0);
}
}
