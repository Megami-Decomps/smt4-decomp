/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

/* The shared entry's padding union starts at 0x0a and must not acquire s32 alignment. */
struct BattleCandidateSignedValuesView {
    u8 unk00[0x74];
    s32 values[12];
};

extern "C" {
s32 scrGetArg(s32 argument);
void scrSetResult(s32 result);
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
    for (s32 i = first; i < count + first; ++i) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            ((const BattleCandidateSignedValuesView *)entry)->values[valueIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && ((const BattleCandidateSignedValuesView *)entry)->values[valueIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
