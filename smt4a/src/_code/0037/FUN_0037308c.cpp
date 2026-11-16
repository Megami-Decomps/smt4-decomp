#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

// A word-aligned view avoids increasing the alignment of the shared union at 0x00A.
struct BattleQueryParametersViewA {
    u8 prefix[0x74];
    u32 parameters[12];
};
extern "C" {
s32 scrGetArg(s32 argument);
void scrSetResult(s32 value);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA* battle);

// Test selected eligible combatants, then the special combatant, for a parameter equal to argument 2.
s32 FUN_0037308c(void)
{
    s32 choice = btlResolveEntryChoice(scrGetArg(0));
    s32 category = scrGetArg(1);
    s32 parameter = 0;
    if (category == 0) {
        parameter = 7;
    } else if (category == 1) {
        parameter = 8;
    } else if (category == 2) {
        parameter = 10;
    } else if (category == 3) {
        parameter = 11;
    }
    u32 expected = scrGetArg(2);
    s32 first, count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            reinterpret_cast<BattleQueryParametersViewA*>(entry)->parameters[parameter] == expected) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry && reinterpret_cast<BattleQueryParametersViewA*>(entry)->parameters[parameter] == expected) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
