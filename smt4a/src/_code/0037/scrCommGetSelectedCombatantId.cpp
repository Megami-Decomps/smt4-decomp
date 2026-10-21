#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"


extern "C" {
BtlMainStateA* btlGetMainState(void);
s32 FUN_003eebf4(BtlMainStateA* state, s32 kind);
void scrSetResult(s32 result);

// Return the listed id of the selected kind-1 combatant, or zero if absent.
u32 scrCommGetSelectedCombatantId(void)
{
    BtlMainStateA* state = btlGetMainState();
    s32 index = FUN_003eebf4(state, 1);
    if (index < 0)
        scrSetResult(0);
    else
        scrSetResult(state->entries[index].id);
    return 1;
}
}
