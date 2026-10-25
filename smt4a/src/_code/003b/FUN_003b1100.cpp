/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* The shared entry's padding union starts at 0x0a and must not acquire s32 alignment. */
struct BattleCandidateSignedValuesView {
    u8 unk00[0x74];
    s32 values[12];
};

extern "C" {
s32 scrGetArg(s32 argument);
u32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(u32 group, s32 *first, s32 *count);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

u32 FUN_003b1100(void)
{
    s32 selector = scrGetArg(0);
    s32 valueIndex = 0;
    if (selector == 0)
        valueIndex = 7;
    else if (selector == 1)
        valueIndex = 8;
    else if (selector == 2)
        valueIndex = 10;
    else if (selector == 3)
        valueIndex = 11;
    u32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            ((const BattleCandidateSignedValuesView *)entry)->values[valueIndex] < 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && ((const BattleCandidateSignedValuesView *)entry)->values[valueIndex] < 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
