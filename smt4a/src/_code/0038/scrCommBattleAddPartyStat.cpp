#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: adds the third argument to stat `index` (0..8) of the party member with the given id. */
u32 scrCommBattleAddPartyStat(void)
{
    u32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    s32 amount = scrGetArg(2);
    BtlCombatantEntryA *member = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (member != NULL && index >= 0 && index < 9) {
        member->modifiers[index] += amount;
    }
    return 1;
}

} /* extern "C" */
