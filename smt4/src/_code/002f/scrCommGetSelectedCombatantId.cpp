#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
BtlMainState* btlGetMainState(void);
s32 FUN_0027e6f4(BtlMainState* state, s32 kind);
void scrSetResult(s32 result);

// Return the listed id of the selected kind-1 combatant, or zero if absent.
u32 scrCommGetSelectedCombatantId(void)
{
    BtlMainState* state = btlGetMainState();
    s32 index = FUN_0027e6f4(state, 1);
    if (index < 0)
        scrSetResult(0);
    else
        scrSetResult(state->entries[index].id);
    return 1;
}
}
