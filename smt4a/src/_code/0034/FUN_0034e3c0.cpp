#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
s32 scrGetArg(u32);
void scrSetResult(s32);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);

static s32 remainingPercent(s32 current, s32 maximum)
{
    return current * 100 / maximum;
}

// Report whether an available combatant's remaining MP percentage is at or below a threshold.
u32 FUN_0034e3c0(void)
{
    s32 threshold = scrGetArg(0);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            remainingPercent(entry->mp, entry->maxMp) <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *partner = FUN_003eaf20(btlGetMainState());
        if (partner != NULL && remainingPercent(partner->mp, partner->maxMp) <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
