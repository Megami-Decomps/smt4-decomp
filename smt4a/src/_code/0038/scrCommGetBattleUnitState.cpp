#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 value);

s32 scrCommGetBattleUnitState(void)
{
    s32 state = 0;
    s32 id = scrGetArg(0);
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (unit != NULL) {
        state = unit->data.state;
    }
    scrSetResult(state);
    return 1;
}

} /* extern "C" */
