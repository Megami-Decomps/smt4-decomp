#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 battleUnitHasElementEntry(BtlCombatantEntryA *entry, u32 first, u32 second);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Count eligible combatants satisfying the requested predicate; active override returns one.
u32 FUN_003bc330(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    BtlMainStateA *battle = btlGetMainState();
    s32 count = 0;
    for (s32 index = 0; index < 0x6D; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        if (entry != NULL) {
            if ((g_btlCandidateMasks.required & entry->flags) != 0 &&
                (g_btlCandidateMasks.excluded & entry->flags) == 0 &&
                (entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
                (entry->flags & g_btlCandidateMasks.singleAction) == 0 &&
                battleUnitHasElementEntry(entry, first, second)) {
                ++count;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && battleUnitHasElementEntry(entry, first, second)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(count);
    return 1;
}
}
