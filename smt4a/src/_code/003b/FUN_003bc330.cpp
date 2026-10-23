/* NON_MATCHING: first required-mask loads merge into LDM and active-entry byte addressing adds one instruction. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
BtlMainStateA *btlGetMainState(void);
s32 FUN_00221754(BtlCombatantEntryA *entry, u32 first, u32 second);
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
            u64 flags = entry->flags;
            if ((g_btlCandidateMasks.required & flags) != 0 &&
                (g_btlCandidateMasks.excluded & flags) == 0 &&
                (g_btlCandidateMasks.unavailable & flags) == 0 &&
                (flags & g_btlCandidateMasks.singleAction) == 0 &&
                FUN_00221754(entry, first, second)) {
                ++count;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_00221754(entry, first, second)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(count);
    return 1;
}
}
