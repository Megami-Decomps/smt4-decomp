/* NON_MATCHING: mask operations use an extra saved register; HP loads are not paired, and distant state-byte addressing adds an instruction. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 FUN_00232388(void);
void FUN_00301a08(u32 group, s32 *first, s32 *count);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);

// Report whether any eligible battle entry is at or below the requested HP percentage.
u32 btlScriptAnyEntryHpAtMost(void)
{
    s32 percent = scrGetArg(0);
    scrGetArg(1);
    s32 first, count;
    FUN_00301a08(FUN_00232388(), &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->hp * 100 / entry->maxHp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->hp * 100 / entry->maxHp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
