#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
u32 scrGetArg(u32 argument);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Test the requested status bit on the selected combatant, if one exists.
u32 FUN_0038c330(u32 argument)
{
    u32 bit = scrGetArg(argument);
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *entry = FUN_003eaf20(battle);
    if (entry != NULL && (entry->statusFlags & (1u << bit)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
