#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 id);
s32 scrGetArg(u32 index);
void scrSetResult(s32 value);

s32 scrCommGetBattleUnitState(void)
{
    s32 state = 0;
    s32 id = scrGetArg(0);
    BtlCombatantEntryA *unit = FUN_003f0e20(btlGetMainState(), id);
    if (unit != NULL) {
        state = unit->unitState.state;
    }
    scrSetResult(state);
    return 1;
}

} /* extern "C" */
