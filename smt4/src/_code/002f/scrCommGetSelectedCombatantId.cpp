#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 btlFindNthActiveSpecialEntry(BtlMainState* state, s32 kind);

// Return the listed id of the selected kind-1 combatant, or zero if absent.
u32 scrCommGetSelectedCombatantId(void)
{
    BtlMainState* state = btlGetMainState();
    s32 index = btlFindNthActiveSpecialEntry(state, 1);
    if (index < 0)
        scrSetResult(0);
    else
        scrSetResult(state->entries[index].id);
    return 1;
}
}
