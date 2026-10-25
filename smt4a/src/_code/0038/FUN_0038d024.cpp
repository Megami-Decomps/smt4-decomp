#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 argument);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 group, s32 *first, s32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Query the selected group's encoded affinity class, including the active special combatant.
u32 FUN_0038d024()
{
    u32 affinity = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    if (affinity < 21) {
        s32 first, count;
        FUN_00301a08(group, &first, &count);
        for (s32 index = first; index < count + first; ++index) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
            if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
                (g_btlCandidateMasks.required & entry->flags) &&
                !(entry->flags & g_btlCandidateMasks.excluded) &&
                entry->encodedStats.values[affinity] >> 10 == 5) {
                scrSetResult(1);
                return 1;
            }
        }
        if (btlGetMainState()->unk4cd1) {
            BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
            if (entry && entry->encodedStats.values[affinity] >> 10 == 5) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
